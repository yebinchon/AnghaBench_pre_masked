
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hifn_device {scalar_t__ started; int lock; int queue; } ;
struct hifn_context {struct hifn_device* dev; } ;
struct TYPE_2__ {int tfm; } ;
struct ablkcipher_request {int nbytes; TYPE_1__ base; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct ablkcipher_request*) ;
 struct hifn_context* FUNC_2 (int ) ;
 int FUNC_3 (struct ablkcipher_request*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct ablkcipher_request *VAR_3)
{
 struct hifn_context *VAR_4 = FUNC_2(VAR_3->base.tfm);
 struct hifn_device *VAR_5 = VAR_4->dev;
 int VAR_6 = -VAR_0;

 if (VAR_5->started + FUNC_0(VAR_3->nbytes, VAR_2) <= VAR_1)
  VAR_6 = FUNC_3(VAR_3);

 if (VAR_6 == -VAR_0) {
  unsigned long VAR_7;

  FUNC_4(&VAR_5->lock, VAR_7);
  VAR_6 = FUNC_1(&VAR_5->queue, VAR_3);
  FUNC_5(&VAR_5->lock, VAR_7);
 }

 return VAR_6;
}
