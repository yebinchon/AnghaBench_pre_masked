
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fire; } ;
typedef TYPE_1__ wd_cntrl ;
typedef int u64 ;
typedef int u32 ;
struct uulc {int ull; int* ul; } ;
typedef int s64 ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4(wd_cntrl *VAR_0)
{
 u64 VAR_1;
 s64 VAR_2;
 union uulc {
  u64 ull;
  u32 ul[2];
 } VAR_3;

 VAR_1 = FUNC_1();
 VAR_3.ull = VAR_2 = FUNC_0(VAR_1,VAR_0->fire);



 if(VAR_2<=0) {



  VAR_0->fire = 0;
  FUNC_2(0);
 } else if(VAR_2<0x0000000080000000LL) {



  FUNC_2(VAR_3.ul[1]);
 } else {



  FUNC_2(0x7fffffff);
 }
}
