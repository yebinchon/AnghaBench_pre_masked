
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;
struct bsg_device {int dummy; } ;
struct bsg_class_device {int ref; int queue; } ;


 int VAR_0 ;
 struct bsg_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bsg_device*) ;
 struct bsg_device* FUNC_2 (int ,int ) ;
 struct bsg_device* FUNC_3 (struct inode*,int ,struct file*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bsg_class_device* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct bsg_device *FUNC_10(struct inode *VAR_4, struct file *VAR_5)
{
 struct bsg_device *VAR_6;
 struct bsg_class_device *VAR_7;




 FUNC_8(&VAR_3);
 VAR_7 = FUNC_4(&VAR_2, FUNC_5(VAR_4));
 if (VAR_7)
  FUNC_6(&VAR_7->ref);
 FUNC_9(&VAR_3);

 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_2(FUNC_5(VAR_4), VAR_7->queue);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_4, VAR_7->queue, VAR_5);
 if (FUNC_1(VAR_6))
  FUNC_7(&VAR_7->ref, VAR_1);

 return VAR_6;
}
