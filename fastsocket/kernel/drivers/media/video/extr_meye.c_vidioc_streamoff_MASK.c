
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_4__ {int lock; TYPE_1__* grab_buffer; int doneq; int grabq; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4, enum v4l2_buf_type VAR_5)
{
 FUNC_2(&VAR_2.lock);
 FUNC_1();
 FUNC_0(VAR_2.grabq);
 FUNC_0(VAR_2.doneq);

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_2.grab_buffer[VAR_5].state = VAR_0;

 FUNC_3(&VAR_2.lock);
 return 0;
}
