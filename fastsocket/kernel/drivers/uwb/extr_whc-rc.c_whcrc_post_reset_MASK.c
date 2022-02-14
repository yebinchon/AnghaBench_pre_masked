
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whcrc {struct uwb_rc* uwb_rc; } ;
struct uwb_rc {int dummy; } ;
struct umc_dev {int dummy; } ;


 struct whcrc* FUNC_0 (struct umc_dev*) ;
 int FUNC_1 (struct uwb_rc*) ;

__attribute__((used)) static int FUNC_2(struct umc_dev *VAR_0)
{
 struct whcrc *VAR_1 = FUNC_0(VAR_0);
 struct uwb_rc *VAR_2 = VAR_1->uwb_rc;

 return FUNC_1(VAR_2);
}
