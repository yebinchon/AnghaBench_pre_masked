
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ (* add_endpoint ) (char const*,int *,void*) ;int endpoints; } ;
typedef TYPE_1__ protocomm_t ;
typedef int * protocomm_req_handler_t ;
struct TYPE_8__ {char const* ep_name; int flag; void* priv_data; int * req_handler; } ;
typedef TYPE_2__ protocomm_ep_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_5 ;
 TYPE_2__* FUNC_3 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_4 (char const*,int *,void*) ;

__attribute__((used)) static esp_err_t FUNC_5(protocomm_t *VAR_6, const char *VAR_7,
                                                 protocomm_req_handler_t VAR_8, void *VAR_9,
                                                 uint32_t VAR_10)
{
    if ((VAR_6 == ((void*)0)) || (VAR_7 == ((void*)0)) || (VAR_8 == ((void*)0))) {
        return VAR_0;
    }

    protocomm_ep_t *VAR_11;
    esp_err_t VAR_12;

    VAR_11 = FUNC_3(VAR_6, VAR_7);
    if (VAR_11) {
        FUNC_0(VAR_4, "Endpoint with this name already exists");
        return VAR_2;
    }

    if (VAR_6->add_endpoint) {
        VAR_12 = VAR_6->add_endpoint(VAR_7, VAR_8, VAR_9);
        if (VAR_12 != VAR_3) {
            FUNC_0(VAR_4, "Error adding endpoint");
            return VAR_12;
        }
    }

    VAR_11 = (protocomm_ep_t *) FUNC_2(1, sizeof(protocomm_ep_t));
    if (!VAR_11) {
        FUNC_0(VAR_4, "Error allocating endpoint resource");
        return VAR_1;
    }


    VAR_11->ep_name = VAR_7;
    VAR_11->req_handler = VAR_8;
    VAR_11->priv_data = VAR_9;
    VAR_11->flag = VAR_10;


    FUNC_1(&VAR_6->endpoints, VAR_11, VAR_5);

    return VAR_3;
}
