
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log; } ;
typedef TYPE_1__ YuiWindow ;
typedef int GtkTextIter ;
typedef int GtkTextBuffer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,char const*,int) ;
 int * FUNC_3 (int ) ;

void FUNC_4(YuiWindow * VAR_0, const char * VAR_1) {
 GtkTextBuffer * VAR_2;
 GtkTextIter VAR_3;

 VAR_2 = FUNC_3(FUNC_0(VAR_0->log));
 FUNC_1(VAR_2, &VAR_3);
 FUNC_2(VAR_2, &VAR_3, VAR_1, -1);
}
