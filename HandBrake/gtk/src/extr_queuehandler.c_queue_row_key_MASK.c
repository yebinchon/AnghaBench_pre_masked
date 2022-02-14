
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int queue; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef scalar_t__ guint ;
typedef int gint ;
typedef int gboolean ;
typedef int GtkListBoxRow ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static gboolean
FUNC_3(GtkListBoxRow * VAR_3, guint VAR_4, signal_user_data_t * VAR_5)
{
    gint VAR_6;

    if (VAR_4 != VAR_1)
        return VAR_0;

    if (VAR_3 != ((void*)0))
    {
        VAR_6 = FUNC_2(VAR_3);
        FUNC_0(VAR_5, VAR_6);
        FUNC_1(VAR_5->queue);
        return VAR_2;
    }
    return VAR_0;
}
