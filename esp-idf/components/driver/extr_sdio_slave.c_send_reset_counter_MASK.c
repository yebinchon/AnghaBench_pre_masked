
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int esp_err_t ;
struct TYPE_5__ {void* pkt_len; scalar_t__ length; } ;
typedef TYPE_1__ buf_desc_t ;
struct TYPE_6__ {int sendbuf; TYPE_1__* in_flight; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static esp_err_t FUNC_6(void)
{
    FUNC_0(FUNC_4() == VAR_2,
        "reset counter when transmission started", VAR_0);

    FUNC_5(0);

    uint32_t VAR_5=0;
    buf_desc_t *VAR_6 = VAR_3.in_flight;
    buf_desc_t *VAR_7 = ((void*)0);
    while(VAR_6 != ((void*)0)) {
        VAR_5 += VAR_6->length;
        VAR_6->pkt_len = VAR_5;
        VAR_7 = VAR_6;
        VAR_6 = FUNC_1(VAR_6, VAR_4);
    }


    VAR_6 = (buf_desc_t*)FUNC_2(&VAR_3.sendbuf);
    while(VAR_6 != ((void*)0)) {
        VAR_5 += VAR_6->length;
        VAR_6->pkt_len = VAR_5;
        VAR_7 = VAR_6;
        VAR_6 = FUNC_1(VAR_6, VAR_4);
    }
    if (VAR_7 == ((void*)0)) {
        VAR_7 = (buf_desc_t*)FUNC_3(&VAR_3.sendbuf);
        VAR_7->pkt_len = 0;
    }

    return VAR_1;
}
