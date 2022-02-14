
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_3__ {int store; } ;
typedef TYPE_1__ YuiVdp2 ;
typedef int GtkTreeIter ;
typedef int GtkAction ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,char*) ;
 int FUNC_6 (char*,int const*) ;

__attribute__((used)) static void FUNC_7(GtkAction * VAR_0, YuiVdp2 * VAR_1) {
 GtkTreeIter VAR_2;
    const gchar * VAR_3;

    VAR_3 = FUNC_2(VAR_0) + 7;

    if (!FUNC_6("nbg0", VAR_3))
     FUNC_5(FUNC_1(VAR_1->store), &VAR_2, "1");
    else if (!FUNC_6("nbg1", VAR_3))
     FUNC_5(FUNC_1(VAR_1->store), &VAR_2, "2");
    else if (!FUNC_6("nbg2", VAR_3))
     FUNC_5(FUNC_1(VAR_1->store), &VAR_2, "3");
    else if (!FUNC_6("nbg3", VAR_3))
     FUNC_5(FUNC_1(VAR_1->store), &VAR_2, "4");
    else if (!FUNC_6("rbg0", VAR_3))
     FUNC_5(FUNC_1(VAR_1->store), &VAR_2, "5");

 FUNC_3(VAR_1->store, &VAR_2, 1, FUNC_4(FUNC_0(VAR_0)), -1);
}
