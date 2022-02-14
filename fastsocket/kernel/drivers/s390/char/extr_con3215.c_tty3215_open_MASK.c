
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; scalar_t__ low_latency; struct raw3215_info* driver_data; } ;
struct raw3215_info {struct tty_struct* tty; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct raw3215_info** VAR_2 ;
 int FUNC_0 (struct raw3215_info*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_3, struct file * VAR_4)
{
 struct raw3215_info *VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = VAR_3->index;
 if ((VAR_7 < 0) || (VAR_7 >= VAR_1))
  return -VAR_0;

 VAR_5 = VAR_2[VAR_7];
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_3->driver_data = VAR_5;
 VAR_5->tty = VAR_3;

 VAR_3->low_latency = 0;



 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6)
  return VAR_6;

 return 0;
}
