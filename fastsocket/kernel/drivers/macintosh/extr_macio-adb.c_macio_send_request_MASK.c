
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct adb_request {int nbytes; scalar_t__ complete; struct adb_request* next; scalar_t__ reply_len; scalar_t__ sent; int * data; } ;
struct TYPE_3__ {int r; } ;
struct TYPE_4__ {TYPE_1__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 struct adb_request* VAR_4 ;
 int FUNC_0 (int *) ;
 struct adb_request* VAR_5 ;
 int FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct adb_request *VAR_7, int VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;

 if (VAR_7->data[0] != VAR_0)
  return -VAR_1;

 for (VAR_10 = 0; VAR_10 < VAR_7->nbytes - 1; ++VAR_10)
  VAR_7->data[VAR_10] = VAR_7->data[VAR_10+1];
 --VAR_7->nbytes;

 VAR_7->next = ((void*)0);
 VAR_7->sent = 0;
 VAR_7->complete = 0;
 VAR_7->reply_len = 0;

 FUNC_3(&VAR_6, VAR_9);
 if (VAR_4 != 0) {
  VAR_5->next = VAR_7;
  VAR_5 = VAR_7;
 } else {
  VAR_4 = VAR_5 = VAR_7;
  FUNC_2(&VAR_3->ctrl.r, FUNC_0(&VAR_3->ctrl.r) | VAR_2);
 }
 FUNC_4(&VAR_6, VAR_9);

 if (VAR_8) {
  while (!VAR_7->complete)
   FUNC_1();
 }

 return 0;
}
