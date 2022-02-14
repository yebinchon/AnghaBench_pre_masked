
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct r_port* driver_data; } ;
struct r_port {int slock; int channel; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct r_port*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_1, int VAR_2)
{
 struct r_port *VAR_3 = VAR_1->driver_data;
 unsigned long VAR_4;

 if (FUNC_0(VAR_3, "rp_break"))
  return -VAR_0;

 FUNC_3(&VAR_3->slock, VAR_4);
 if (VAR_2 == -1)
  FUNC_2(&VAR_3->channel);
 else
  FUNC_1(&VAR_3->channel);
 FUNC_4(&VAR_3->slock, VAR_4);
 return 0;
}
