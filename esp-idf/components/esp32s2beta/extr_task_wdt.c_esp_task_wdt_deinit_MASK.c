
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_5__ {scalar_t__ en; } ;
struct TYPE_7__ {scalar_t__ wdt_wprotect; TYPE_1__ wdt_config0; } ;
struct TYPE_6__ {int intr_handle; int * list; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;

esp_err_t FUNC_6(void)
{
    FUNC_4(&VAR_6);

    FUNC_0((VAR_5 != ((void*)0)), VAR_1);

    FUNC_0((VAR_5->list == ((void*)0)), VAR_0);


    VAR_3=VAR_4;
    VAR_3=0;
    VAR_3=0;

    FUNC_1(FUNC_2(VAR_5->intr_handle));
    FUNC_3(VAR_5);
    VAR_5 = ((void*)0);
    FUNC_5(&VAR_6);
    return VAR_2;
}
