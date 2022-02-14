
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lirc_driver {size_t minor; int owner; int * fops; } ;
struct irctl {struct lirc_driver d; } ;
struct cdev {int kobj; int owner; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t) ;
 int VAR_0 ;
 int FUNC_2 (struct cdev*,int ,int) ;
 int FUNC_3 (struct cdev*,int *) ;
 struct cdev* VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,size_t) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct irctl *VAR_4)
{
 int VAR_5;
 struct lirc_driver *VAR_6 = &VAR_4->d;
 struct cdev *VAR_7 = &VAR_1[VAR_6->minor];

 if (VAR_6->fops) {
  FUNC_3(VAR_7, VAR_6->fops);
  VAR_7->owner = VAR_6->owner;
 } else {
  FUNC_3(VAR_7, &VAR_3);
  VAR_7->owner = VAR_0;
 }
 VAR_5 = FUNC_5(&VAR_7->kobj, "lirc%d", VAR_6->minor);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_7, FUNC_1(FUNC_0(VAR_2), VAR_6->minor), 1);
 if (VAR_5)
  FUNC_4(&VAR_7->kobj);

 return VAR_5;
}
