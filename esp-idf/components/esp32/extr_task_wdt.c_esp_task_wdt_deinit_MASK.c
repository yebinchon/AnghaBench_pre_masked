
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_3__ {int intr_handle; int * list; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

esp_err_t FUNC_8(void)
{
    FUNC_4(&VAR_5);

    FUNC_0((VAR_4 != ((void*)0)), VAR_1);

    FUNC_0((VAR_4->list == ((void*)0)), VAR_0);


    FUNC_7(&VAR_3, 0);
    FUNC_6(&VAR_3, 0);
    FUNC_7(&VAR_3, 1);

    FUNC_1(FUNC_2(VAR_4->intr_handle));
    FUNC_3(VAR_4);
    VAR_4 = ((void*)0);
    FUNC_5(&VAR_5);
    return VAR_2;
}
