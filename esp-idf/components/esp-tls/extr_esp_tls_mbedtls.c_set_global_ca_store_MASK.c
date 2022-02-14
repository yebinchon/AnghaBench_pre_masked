
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * cacert_ptr; int conf; } ;
typedef TYPE_1__ esp_tls_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int * VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static esp_err_t FUNC_4(esp_tls_t *VAR_5)
{
    FUNC_1(VAR_5);
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_3, "global_cacert is NULL");
        return VAR_0;
    }
    VAR_5->cacert_ptr = VAR_4;
    FUNC_2(&VAR_5->conf, VAR_2);
    FUNC_3(&VAR_5->conf, VAR_5->cacert_ptr, ((void*)0));
    return VAR_1;
}
