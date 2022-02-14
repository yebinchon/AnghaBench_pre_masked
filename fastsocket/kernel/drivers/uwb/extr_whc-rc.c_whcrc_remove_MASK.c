
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whcrc {struct uwb_rc* uwb_rc; } ;
struct uwb_rc {int dummy; } ;
struct umc_dev {int dummy; } ;


 int FUNC_0 (struct whcrc*) ;
 struct whcrc* FUNC_1 (struct umc_dev*) ;
 int FUNC_2 (struct umc_dev*,int *) ;
 int FUNC_3 (struct uwb_rc*) ;
 int FUNC_4 (struct uwb_rc*) ;
 int FUNC_5 (struct whcrc*) ;

__attribute__((used)) static void FUNC_6(struct umc_dev *VAR_0)
{
 struct whcrc *VAR_1 = FUNC_1(VAR_0);
 struct uwb_rc *VAR_2 = VAR_1->uwb_rc;

 FUNC_2(VAR_0, ((void*)0));
 FUNC_4(VAR_2);
 FUNC_5(VAR_1);
 FUNC_0(VAR_1);
 FUNC_3(VAR_2);
}
