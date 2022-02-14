
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ qlen; } ;
struct hifn_device {scalar_t__ started; TYPE_2__ queue; } ;
struct hifn_context {struct hifn_device* dev; } ;
struct TYPE_3__ {int tfm; } ;
struct ablkcipher_request {TYPE_1__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hifn_context* FUNC_0 (int ) ;
 int FUNC_1 (struct hifn_device*) ;
 int FUNC_2 (struct ablkcipher_request*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ablkcipher_request *VAR_2, u8 VAR_3,
  u8 VAR_4, u8 VAR_5)
{
 int VAR_6;
 struct hifn_context *VAR_7 = FUNC_0(VAR_2->base.tfm);
 struct hifn_device *VAR_8 = VAR_7->dev;

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_8->started < VAR_1 && VAR_8->queue.qlen)
  FUNC_1(VAR_8);

 return -VAR_0;
}
