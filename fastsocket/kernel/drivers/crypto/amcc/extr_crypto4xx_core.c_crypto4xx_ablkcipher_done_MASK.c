
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int length; int offset; } ;
struct pd_uinfo {struct scatterlist* dest_va; scalar_t__ using_sd; int async_req; } ;
struct crypto4xx_device {TYPE_1__* core_dev; } ;
struct crypto4xx_ctx {int dummy; } ;
struct ce_pd {int dummy; } ;
struct TYPE_4__ {int (* complete ) (TYPE_2__*,int ) ;int tfm; } ;
struct ablkcipher_request {TYPE_2__ base; int dst; int nbytes; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 struct ablkcipher_request* FUNC_0 (int ) ;
 int FUNC_1 (struct crypto4xx_device*,struct ce_pd*,struct pd_uinfo*,int ,int ) ;
 int FUNC_2 (struct crypto4xx_device*,struct pd_uinfo*) ;
 struct crypto4xx_ctx* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct scatterlist*) ;
 int FUNC_6 (TYPE_2__*,int ) ;

__attribute__((used)) static u32 FUNC_7(struct crypto4xx_device *VAR_1,
         struct pd_uinfo *VAR_2,
         struct ce_pd *VAR_3)
{
 struct crypto4xx_ctx *VAR_4;
 struct ablkcipher_request *VAR_5;
 struct scatterlist *VAR_6;
 dma_addr_t VAR_7;

 VAR_5 = FUNC_0(VAR_2->async_req);
 VAR_4 = FUNC_3(VAR_5->base.tfm);

 if (VAR_2->using_sd) {
  FUNC_1(VAR_1, VAR_3, VAR_2, VAR_5->nbytes,
       VAR_5->dst);
 } else {
  VAR_6 = VAR_2->dest_va;
  VAR_7 = FUNC_4(VAR_1->core_dev->device, FUNC_5(VAR_6),
        VAR_6->offset, VAR_6->length, VAR_0);
 }
 FUNC_2(VAR_1, VAR_2);
 if (VAR_5->base.complete != ((void*)0))
  VAR_5->base.complete(&VAR_5->base, 0);

 return 0;
}
