
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_5__ {int count; TYPE_1__* ud; } ;
typedef TYPE_2__ button_click_t ;
struct TYPE_4__ {int builder; } ;
typedef int GtkWidget ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static gboolean
FUNC_2(button_click_t *VAR_1)
{
    if (VAR_1->count == 1)
    {
        GtkWidget *VAR_2;
        VAR_2 = FUNC_0(VAR_1->ud->builder, "allow_tweaks");
        FUNC_1(VAR_2);
        VAR_2 = FUNC_0(VAR_1->ud->builder, "hbfd_feature");
        FUNC_1(VAR_2);
    }
    VAR_1->count = 0;

    return VAR_0;
}
