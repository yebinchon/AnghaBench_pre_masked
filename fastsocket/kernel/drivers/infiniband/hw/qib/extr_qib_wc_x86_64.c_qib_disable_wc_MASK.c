
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {scalar_t__ wc_cookie; int wc_len; int wc_base; int pcidev; } ;


 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int ,char*,scalar_t__,int ,int ,int) ;

void FUNC_2(struct qib_devdata *VAR_0)
{
 if (VAR_0->wc_cookie) {
  int VAR_1;

  VAR_1 = FUNC_0(VAR_0->wc_cookie, VAR_0->wc_base,
        VAR_0->wc_len);
  if (VAR_1 < 0)
   FUNC_1(VAR_0->pcidev,
     "mtrr_del(%lx, %lx, %lx) failed: %d\n",
     VAR_0->wc_cookie, VAR_0->wc_base,
     VAR_0->wc_len, VAR_1);
  VAR_0->wc_cookie = 0;
 }
}
