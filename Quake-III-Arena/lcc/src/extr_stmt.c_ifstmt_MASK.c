
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ref; } ;
typedef int Swtch ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char) ;
 TYPE_1__* FUNC_5 (int) ;
 scalar_t__ FUNC_6 () ;
 double VAR_1 ;
 int FUNC_7 (int,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static void FUNC_9(int VAR_3, int VAR_4, Swtch VAR_5, int VAR_6) {
 VAR_2 = FUNC_6();
 FUNC_4('(');
 FUNC_3(((void*)0));
 FUNC_8(FUNC_1(')'), 0, VAR_3);
 VAR_1 /= 2.0;
 FUNC_7(VAR_4, VAR_5, VAR_6);
 if (VAR_2 == VAR_0) {
  FUNC_0(VAR_3 + 1);
  VAR_2 = FUNC_6();
  FUNC_2(VAR_3);
  FUNC_7(VAR_4, VAR_5, VAR_6);
  if (FUNC_5(VAR_3 + 1)->ref)
   FUNC_2(VAR_3 + 1);
 } else
  FUNC_2(VAR_3);
}
