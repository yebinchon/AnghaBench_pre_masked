
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int globals; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gchar ;
typedef int gboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int *,int ,int ) ;

gboolean
FUNC_4(signal_user_data_t *VAR_2)
{
    gchar *VAR_3;


    VAR_3 = FUNC_1(FUNC_2(VAR_2->globals, "scan_source"));
    FUNC_3(VAR_2, VAR_3, 0, VAR_1);
    FUNC_0(VAR_3);
    return VAR_0;
}
