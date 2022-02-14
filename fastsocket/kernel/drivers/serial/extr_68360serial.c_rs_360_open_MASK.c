
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tty_struct {int index; int name; TYPE_3__* driver_data; } ;
struct file {int dummy; } ;
struct TYPE_9__ {struct tty_struct* tty; } ;
struct TYPE_10__ {TYPE_2__ port; TYPE_1__* state; } ;
typedef TYPE_3__ ser_info_t ;
struct TYPE_8__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty_struct*,struct file*,TYPE_3__*) ;
 int FUNC_1 (int,TYPE_3__**) ;
 int FUNC_2 (char*,int,...) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int,char*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_2, struct file * VAR_3)
{
 ser_info_t *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = VAR_2->index;
 if ((VAR_6 < 0) || (VAR_6 >= VAR_1))
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_6, &VAR_4);
 if (VAR_5)
  return VAR_5;
 if (FUNC_3(VAR_4, VAR_2->name, "rs_open"))
  return -VAR_0;




 VAR_2->driver_data = VAR_4;
 VAR_4->port.tty = VAR_2;




 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_5) {




  return VAR_5;
 }




 return 0;
}
