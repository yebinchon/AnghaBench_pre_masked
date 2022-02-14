
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {scalar_t__ panic; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,unsigned long*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static inline int FUNC_7(struct bnx2x *VAR_3, int VAR_4,
       unsigned long *VAR_5)
{

 int VAR_6 = 5000;

 if (FUNC_1(VAR_3))
  VAR_6 *= 20;

 FUNC_2(VAR_0, "waiting for state to become %d\n", VAR_4);

 FUNC_4();
 while (VAR_6--) {
  if (!FUNC_5(VAR_4, VAR_5)) {



   return 0;
  }

  FUNC_6(1000, 2000);

  if (VAR_3->panic)
   return -VAR_2;
 }


 FUNC_0("timeout waiting for state %d\n", VAR_4);




 return -VAR_1;
}
