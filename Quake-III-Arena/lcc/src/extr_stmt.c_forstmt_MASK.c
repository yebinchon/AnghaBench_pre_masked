
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * Tree ;
struct TYPE_2__ {scalar_t__ ref; } ;
typedef int Swtch ;
typedef int Coordinate ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char) ;
 int VAR_2 ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 size_t FUNC_6 () ;
 scalar_t__* VAR_3 ;
 double VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int,int ,int) ;
 size_t VAR_6 ;
 int FUNC_8 (char,char*) ;
 int * FUNC_9 (int ,char,int ) ;
 int FUNC_10 (int *,int,int ) ;

__attribute__((used)) static void FUNC_11(int VAR_7, Swtch VAR_8, int VAR_9) {
 int VAR_10 = 0;
 Tree VAR_11 = ((void*)0), VAR_12 = ((void*)0), VAR_13 = ((void*)0);
 Coordinate VAR_14, VAR_15;

 VAR_6 = FUNC_6();
 FUNC_3('(');
 FUNC_2(((void*)0));
 if (VAR_3[VAR_6] == 129)
  VAR_11 = FUNC_9(VAR_2, ';', VAR_0);
 else
  FUNC_3(';');
 FUNC_10(VAR_11, 0, 0);
 VAR_14 = VAR_5;
 VAR_4 *= 10.0;
 if (VAR_3[VAR_6] == 129)
  VAR_12 = FUNC_9(VAR_1, ';', VAR_0);
 else
  FUNC_3(';');
 VAR_15 = VAR_5;
 if (VAR_3[VAR_6] == 129)
  VAR_13 = FUNC_9(VAR_2, ')', VAR_0);
 else {
  static char VAR_16[] = { 128, 129, '}', 0 };
  FUNC_8(')', VAR_16);
 }
 if (VAR_12) {
  VAR_10 = FUNC_5(VAR_11, VAR_12);
  if (!VAR_10)
   FUNC_0(VAR_7 + 3);
 }
 FUNC_1(VAR_7);
 FUNC_7(VAR_7, VAR_8, VAR_9);
 FUNC_1(VAR_7 + 1);
 FUNC_2(&VAR_15);
 if (VAR_13)
  FUNC_10(VAR_13, 0, 0);
 if (VAR_12) {
  if (!VAR_10)
   FUNC_1(VAR_7 + 3);
  FUNC_2(&VAR_14);
  FUNC_10(VAR_12, VAR_7, 0);
 } else {
  FUNC_2(&VAR_14);
  FUNC_0(VAR_7);
 }
 if (FUNC_4(VAR_7 + 2)->ref)
  FUNC_1(VAR_7 + 2);
}
