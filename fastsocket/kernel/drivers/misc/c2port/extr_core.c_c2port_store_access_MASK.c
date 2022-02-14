
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct c2port_ops {int (* c2d_dir ) (struct c2port_device*,int) ;int (* access ) (struct c2port_device*,int) ;int (* c2ck_set ) (struct c2port_device*,int) ;} ;
struct c2port_device {int access; int mutex; struct c2port_ops* ops; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct c2port_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char*,int*) ;
 int FUNC_4 (struct c2port_device*,int) ;
 int FUNC_5 (struct c2port_device*,int) ;
 int FUNC_6 (struct c2port_device*,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
    struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct c2port_device *VAR_5 = FUNC_0(VAR_1);
 struct c2port_ops *VAR_6 = VAR_5->ops;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_3(VAR_3, "%d", &VAR_7);
 if (VAR_8 != 1)
  return -VAR_0;

 FUNC_1(&VAR_5->mutex);

 VAR_5->access = !!VAR_7;



 if (VAR_5->access)
  VAR_6->c2ck_set(VAR_5, 1);
 VAR_6->access(VAR_5, VAR_5->access);
 if (VAR_5->access)
  VAR_6->c2d_dir(VAR_5, 1);

 FUNC_2(&VAR_5->mutex);

 return VAR_4;
}
