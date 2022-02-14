
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct moxa_port* driver_data; } ;
struct moxa_port {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct moxa_port*,int*,int*) ;
 int FUNC_1 (struct moxa_port*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_7, struct file *VAR_8)
{
 struct moxa_port *VAR_9;
 int VAR_10 = 0, VAR_11, VAR_12;

 FUNC_2(&VAR_6);
 VAR_9 = VAR_7->driver_data;
 if (!VAR_9) {
  FUNC_3(&VAR_6);
  return -VAR_0;
 }

 FUNC_0(VAR_9, &VAR_11, &VAR_12);
 if (VAR_11)
  VAR_10 |= VAR_4;
 if (VAR_12)
  VAR_10 |= VAR_5;
 VAR_11 = FUNC_1(VAR_9);
 if (VAR_11 & 1)
  VAR_10 |= VAR_2;
 if (VAR_11 & 2)
  VAR_10 |= VAR_3;
 if (VAR_11 & 4)
  VAR_10 |= VAR_1;
 FUNC_3(&VAR_6);
 return VAR_10;
}
