
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ oper_state; } ;
struct scm_device {int lock; int dev; TYPE_1__ attrs; } ;
struct scm_blk_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,struct scm_device*) ;
 int FUNC_2 (int *,struct scm_blk_dev*) ;
 int FUNC_3 (struct scm_blk_dev*) ;
 struct scm_blk_dev* FUNC_4 (int,int ) ;
 int FUNC_5 (struct scm_blk_dev*,struct scm_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct scm_device *VAR_4)
{
 struct scm_blk_dev *VAR_5;
 int VAR_6;

 FUNC_0(2, "probe");
 FUNC_1(2, VAR_4);

 if (VAR_4->attrs.oper_state != VAR_3)
  return -VAR_0;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 FUNC_6(&VAR_4->lock);
 FUNC_2(&VAR_4->dev, VAR_5);
 FUNC_7(&VAR_4->lock);

 VAR_6 = FUNC_5(VAR_5, VAR_4);
 if (VAR_6) {
  FUNC_6(&VAR_4->lock);
  FUNC_2(&VAR_4->dev, ((void*)0));
  FUNC_7(&VAR_4->lock);
  FUNC_3(VAR_5);
  goto out;
 }

out:
 return VAR_6;
}
