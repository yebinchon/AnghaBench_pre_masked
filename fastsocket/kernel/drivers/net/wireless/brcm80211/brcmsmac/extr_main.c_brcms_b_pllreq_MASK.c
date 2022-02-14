
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcms_hardware {scalar_t__ sbclk; int pllreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcms_hardware*,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct brcms_hardware *VAR_3, bool VAR_4, u32 VAR_5)
{
 if (VAR_4) {
  if (FUNC_2(VAR_3->pllreq, VAR_5))
   return;

  FUNC_3(VAR_3->pllreq, VAR_5);

  if (FUNC_2(VAR_3->pllreq, VAR_0)) {
   if (!VAR_3->sbclk)
    FUNC_0(VAR_3, VAR_2);
  }
 } else {
  if (!FUNC_2(VAR_3->pllreq, VAR_5))
   return;

  FUNC_1(VAR_3->pllreq, VAR_5);

  if (FUNC_2(VAR_3->pllreq, VAR_0)) {
   if (VAR_3->sbclk)
    FUNC_0(VAR_3, VAR_1);
  }
 }
}
