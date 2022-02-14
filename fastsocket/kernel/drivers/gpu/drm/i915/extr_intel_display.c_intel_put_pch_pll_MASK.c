
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pch_pll {scalar_t__ refcount; } ;
struct intel_crtc {struct intel_pch_pll* pch_pll; } ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static void FUNC_1(struct intel_crtc *VAR_0)
{
 struct intel_pch_pll *VAR_1 = VAR_0->pch_pll;

 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->refcount == 0) {
  FUNC_0(1, "bad PCH PLL refcount\n");
  return;
 }

 --VAR_1->refcount;
 VAR_0->pch_pll = ((void*)0);
}
