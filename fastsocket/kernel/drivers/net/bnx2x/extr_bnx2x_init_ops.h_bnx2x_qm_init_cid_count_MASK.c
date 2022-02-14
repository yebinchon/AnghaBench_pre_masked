
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;



 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct bnx2x*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_1, int VAR_2,
        u8 VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_2)) {
  switch (VAR_3) {
  case 129:

  case 128:
   FUNC_2(VAR_1, VAR_0 + VAR_4*4,
          VAR_2/16 - 1);
   break;
  case 130:
   break;
  }
 }
}
