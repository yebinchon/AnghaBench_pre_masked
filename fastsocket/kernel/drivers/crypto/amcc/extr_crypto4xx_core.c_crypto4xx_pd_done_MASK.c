
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pd_uinfo {TYPE_1__* async_req; } ;
struct crypto4xx_device {struct pd_uinfo* pdr_uinfo; struct ce_pd* pdr; } ;
struct ce_pd {int dummy; } ;
struct TYPE_2__ {int tfm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct crypto4xx_device*,struct pd_uinfo*,struct ce_pd*) ;
 int FUNC_1 (struct crypto4xx_device*,struct pd_uinfo*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct crypto4xx_device *VAR_1, u32 VAR_2)
{
 struct ce_pd *VAR_3;
 struct pd_uinfo *VAR_4;

 VAR_3 = VAR_1->pdr + sizeof(struct ce_pd)*VAR_2;
 VAR_4 = VAR_1->pdr_uinfo + sizeof(struct pd_uinfo)*VAR_2;
 if (FUNC_2(VAR_4->async_req->tfm) ==
   VAR_0)
  return FUNC_0(VAR_1, VAR_4, VAR_3);
 else
  return FUNC_1(VAR_1, VAR_4);
}
