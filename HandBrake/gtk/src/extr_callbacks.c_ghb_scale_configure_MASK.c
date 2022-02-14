
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gboolean ;
typedef int GtkScale ;
typedef int GtkAdjustment ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,double,double,double,double,double,double) ;
 double FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;

void
FUNC_9(
    signal_user_data_t *VAR_2,
    char *VAR_3,
    double VAR_4, double VAR_5, double VAR_6,
    double VAR_7, double VAR_8,
    int VAR_9, gboolean VAR_10)
{
    GtkScale *VAR_11;
    GtkAdjustment *VAR_12;
    double VAR_13;

    VAR_11 = FUNC_2(FUNC_0(VAR_2->builder, VAR_3));

    FUNC_8(VAR_11, VAR_0);
    VAR_12 = FUNC_5(FUNC_1(VAR_11));
    VAR_13 = FUNC_4(VAR_12);

    FUNC_3(VAR_12, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_13);

    FUNC_7(VAR_11, VAR_9);
    FUNC_6(FUNC_1(VAR_11), VAR_10);
    FUNC_8(VAR_11, VAR_1);
}
