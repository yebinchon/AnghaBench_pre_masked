
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int address; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long,long) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_13 ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(void)
{
 int VAR_15;





 long VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18;

 FUNC_8(&VAR_8, VAR_18);
 if (--VAR_14) {
  FUNC_9(&VAR_8, VAR_18);
  return;
 }
 FUNC_9(&VAR_8, VAR_18);
 if (VAR_10) {
  FUNC_0();
  FUNC_2();
  FUNC_3();
  VAR_10 = 0;
 }
 FUNC_7(0, ~0, 8);



 FUNC_4();

 if (VAR_7 && VAR_11) {
  VAR_16 = VAR_11 * 1024;
  VAR_17 = (unsigned long)VAR_7;
  VAR_7 = ((void*)0);
  VAR_11 = 0;
  VAR_3 = VAR_2 = -1;
  FUNC_1(VAR_17, VAR_16);
 }
 VAR_15 = VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  if (VAR_0->address != -1)
   FUNC_5(VAR_6);
 VAR_6 = VAR_15;
}
