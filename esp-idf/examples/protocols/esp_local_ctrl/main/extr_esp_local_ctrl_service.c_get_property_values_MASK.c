
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int int64_t ;
struct TYPE_5__ {int free_fn; int * data; int size; } ;
typedef TYPE_1__ esp_local_ctrl_prop_val_t ;
struct TYPE_6__ {int type; int * ctx; int name; } ;
typedef TYPE_2__ esp_local_ctrl_prop_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static esp_err_t FUNC_4(size_t VAR_4,
                                     const esp_local_ctrl_prop_t VAR_5[],
                                     esp_local_ctrl_prop_val_t VAR_6[],
                                     void *VAR_7)
{
    for (uint32_t VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        FUNC_0(VAR_2, "Reading property : %s", VAR_5[VAR_8].name);



        switch (VAR_5[VAR_8].type) {
            case 130:
            case 131:



                VAR_6[VAR_8].data = VAR_5[VAR_8].ctx;
                break;
            case 128: {

                static int64_t VAR_9 = 0;
                VAR_9 = FUNC_1();



                VAR_6[VAR_8].data = &VAR_9;
                break;
            }
            case 129: {
                char **VAR_10 = (char **) VAR_5[VAR_8].ctx;
                if (*VAR_10 == ((void*)0)) {
                    VAR_6[VAR_8].size = 0;
                    VAR_6[VAR_8].data = ((void*)0);
                } else {



                    VAR_6[VAR_8].size = FUNC_3(*VAR_10);
                    VAR_6[VAR_8].data = FUNC_2(*VAR_10);
                    if (!VAR_6[VAR_8].data) {
                        return VAR_0;
                    }
                    VAR_6[VAR_8].free_fn = VAR_3;
                }
            }
            default:
                break;
        }
    }
    return VAR_1;
}
