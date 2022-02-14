
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct acm* driver_data; } ;
struct file {int dummy; } ;
struct acm {int ctrlout; int ctrlin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct acm*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_12, struct file *VAR_13)
{
 struct acm *VAR_14 = VAR_12->driver_data;

 if (!FUNC_0(VAR_14))
  return -VAR_5;

 return (VAR_14->ctrlout & VAR_2 ? VAR_9 : 0) |
        (VAR_14->ctrlout & VAR_4 ? VAR_11 : 0) |
        (VAR_14->ctrlin & VAR_1 ? VAR_8 : 0) |
        (VAR_14->ctrlin & VAR_3 ? VAR_10 : 0) |
        (VAR_14->ctrlin & VAR_0 ? VAR_6 : 0) |
        VAR_7;
}
