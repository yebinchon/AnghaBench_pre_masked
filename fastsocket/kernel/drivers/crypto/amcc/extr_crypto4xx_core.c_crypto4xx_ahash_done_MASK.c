
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pd_uinfo {int async_req; } ;
struct crypto4xx_device {int dummy; } ;
struct crypto4xx_ctx {int dummy; } ;
struct TYPE_2__ {int (* complete ) (TYPE_1__*,int ) ;int tfm; } ;
struct ahash_request {TYPE_1__ base; } ;


 struct ahash_request* FUNC_0 (int ) ;
 int FUNC_1 (struct pd_uinfo*,struct crypto4xx_ctx*) ;
 int FUNC_2 (struct crypto4xx_device*,struct pd_uinfo*) ;
 struct crypto4xx_ctx* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static u32 FUNC_5(struct crypto4xx_device *VAR_0,
    struct pd_uinfo *VAR_1)
{
 struct crypto4xx_ctx *VAR_2;
 struct ahash_request *VAR_3;

 VAR_3 = FUNC_0(VAR_1->async_req);
 VAR_2 = FUNC_3(VAR_3->base.tfm);

 FUNC_1(VAR_1,
         FUNC_3(VAR_3->base.tfm));
 FUNC_2(VAR_0, VAR_1);

 if (VAR_3->base.complete != ((void*)0))
  VAR_3->base.complete(&VAR_3->base, 0);

 return 0;
}
