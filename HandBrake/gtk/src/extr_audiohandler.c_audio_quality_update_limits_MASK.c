
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float gdouble ;
typedef scalar_t__ gboolean ;
typedef int GtkWidget ;
typedef int GtkScaleButton ;
typedef int GtkAdjustment ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,float,float,float,float,float,int ) ;
 int * FUNC_2 (int *) ;
 float FUNC_3 (int) ;
 int FUNC_4 (int,float*,float*,float*,int*) ;

__attribute__((used)) static void FUNC_5(
    GtkWidget *VAR_0,
    int VAR_1,
    gboolean VAR_2,
    gdouble VAR_3)
{
    float VAR_4, VAR_5, VAR_6;
    int VAR_7;

    FUNC_4(VAR_1, &VAR_4, &VAR_5, &VAR_6, &VAR_7);
    if (VAR_2)
    {
        VAR_3 = FUNC_3(VAR_1);
    }
    if (VAR_7)
    {

        VAR_3 = VAR_5 - VAR_3 + VAR_4;
    }
    GtkScaleButton *VAR_8;
    GtkAdjustment *VAR_9;
    VAR_8 = FUNC_0(VAR_0);
    VAR_9 = FUNC_2(VAR_8);
    FUNC_1 (VAR_9, VAR_3, VAR_4, VAR_5, VAR_6, VAR_6, 0);
}
