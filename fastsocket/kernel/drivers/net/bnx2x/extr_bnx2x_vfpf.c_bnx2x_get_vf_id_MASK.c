
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int doorbells; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_3, u32 *VAR_4)
{
 u32 VAR_5;
 int VAR_6 = 10, VAR_7 = 100;

 do {

  VAR_5 = FUNC_3(VAR_3->doorbells);
  if (FUNC_1(VAR_5))
   break;

  FUNC_2(VAR_7);

  FUNC_0("Invalid ME register value: 0x%08x\n. Is pf driver up?",
     VAR_5);
 } while (VAR_6-- > 0);

 if (!FUNC_1(VAR_5)) {
  FUNC_0("Invalid ME register value: 0x%08x\n", VAR_5);
  return -VAR_0;
 }

 FUNC_0("valid ME register value: 0x%08x\n", VAR_5);

 *VAR_4 = (VAR_5 & VAR_1) >> VAR_2;

 return 0;
}
