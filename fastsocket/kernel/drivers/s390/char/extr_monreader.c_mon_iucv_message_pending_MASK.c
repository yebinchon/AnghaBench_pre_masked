
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mon_private {size_t write_index; int read_ready; TYPE_1__** msg_array; int msglim_count; } ;
struct iucv_path {struct mon_private* private; } ;
struct iucv_message {int dummy; } ;
struct TYPE_2__ {int msglim_reached; int msg; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct iucv_message*,int) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iucv_path *VAR_2,
         struct iucv_message *VAR_3)
{
 struct mon_private *VAR_4 = VAR_2->private;

 FUNC_2(&VAR_4->msg_array[VAR_4->write_index]->msg,
        VAR_3, sizeof(*VAR_3));
 if (FUNC_1(&VAR_4->msglim_count) == VAR_0) {
  FUNC_3("The read queue for monitor data is full\n");
  VAR_4->msg_array[VAR_4->write_index]->msglim_reached = 1;
 }
 VAR_4->write_index = (VAR_4->write_index + 1) % VAR_0;
 FUNC_0(&VAR_4->read_ready);
 FUNC_4(&VAR_1);
}
