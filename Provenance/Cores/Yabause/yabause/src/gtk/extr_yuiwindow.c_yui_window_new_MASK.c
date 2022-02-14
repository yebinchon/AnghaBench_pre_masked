
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gpointer ;
struct TYPE_3__ {void* reset_func; int run_func; int init_data; void* init_func; int * actions; } ;
typedef TYPE_1__ YuiWindow ;
typedef int YuiAction ;
typedef int GtkWidget ;
typedef int GSourceFunc ;
typedef void* GCallback ;


 int * FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;

GtkWidget * FUNC_4(YuiAction * VAR_0, GCallback VAR_1, gpointer VAR_2,
  GSourceFunc VAR_3, GCallback VAR_4) {
 GtkWidget * VAR_5;
 YuiWindow * VAR_6;

 VAR_5 = FUNC_0(FUNC_2(FUNC_3(), ((void*)0)));
 VAR_6 = FUNC_1(VAR_5);

 VAR_6->actions = VAR_0;
 VAR_6->init_func = VAR_1;
 VAR_6->init_data = VAR_2;
 VAR_6->run_func = VAR_3;
 VAR_6->reset_func = VAR_4;

 return VAR_5;
}
