
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whcrc {int umc_dev; } ;
struct uwb_rc {struct whcrc* priv; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct uwb_rc *VAR_0)
{
 struct whcrc *VAR_1 = VAR_0->priv;

 return FUNC_0(VAR_1->umc_dev);
}
