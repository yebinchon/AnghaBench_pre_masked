
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adb_request {int* data; int nbytes; int complete; int reply_len; int * reply; } ;
struct TYPE_2__ {int handler_id; int original_address; } ;



 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adb_request*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct adb_request *VAR_3)
{
 int VAR_4 = -VAR_0;

 switch(VAR_3->data[1])
 {
 case 128:
  if (VAR_3->nbytes < 3)
   break;
  FUNC_1(&VAR_2);
  VAR_3->reply[0] = VAR_1[VAR_3->data[2]].original_address;
  VAR_3->reply[1] = VAR_1[VAR_3->data[2]].handler_id;
  FUNC_2(&VAR_2);
  VAR_3->complete = 1;
  VAR_3->reply_len = 2;
  FUNC_0(VAR_3);
  VAR_4 = 0;
  break;
 }
 return VAR_4;
}
