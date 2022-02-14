
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int f_flags; } ;
struct TYPE_4__ {int lock; TYPE_1__* grab_buffer; int doneq; int proc_list; } ;
struct TYPE_3__ {int state; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, void *VAR_7, int *VAR_8)
{
 int VAR_9;

 if (*VAR_8 < 0 || *VAR_8 >= VAR_4)
  return -VAR_2;

 FUNC_1(&VAR_5.lock);
 switch (VAR_5.grab_buffer[*VAR_8].state) {

 case 129:
  FUNC_2(&VAR_5.lock);
  return -VAR_2;
 case 128:
  if (VAR_6->f_flags & VAR_3) {
   FUNC_2(&VAR_5.lock);
   return -VAR_0;
  }
  if (FUNC_3(VAR_5.proc_list,
   (VAR_5.grab_buffer[*VAR_8].state != 128))) {
   FUNC_2(&VAR_5.lock);
   return -VAR_1;
  }

 case 130:
  VAR_5.grab_buffer[*VAR_8].state = 129;
  FUNC_0(VAR_5.doneq, (unsigned char *)&VAR_9, sizeof(int));
 }
 *VAR_8 = VAR_5.grab_buffer[*VAR_8].size;
 FUNC_2(&VAR_5.lock);
 return 0;
}
