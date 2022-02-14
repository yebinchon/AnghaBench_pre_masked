
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int nbytes; int complete; size_t* data; struct adb_request* next; scalar_t__ sent; } ;


 int VAR_0 ;
 struct adb_request* VAR_1 ;
 scalar_t__ VAR_2 ;
 struct adb_request* VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int** VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ VAR_5 ;

int
FUNC_3(struct adb_request *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 if (VAR_6->nbytes <= 0) {
  VAR_6->complete = 1;
  return 0;
 }
 VAR_8 = VAR_4[VAR_6->data[0]][0];
 if (VAR_8 >= 0 && VAR_6->nbytes != VAR_8 + 1) {
  VAR_6->complete = 1;
  return -VAR_0;
 }

 VAR_6->next = ((void*)0);
 VAR_6->sent = 0;
 VAR_6->complete = 0;
 FUNC_1(VAR_7);

 if (VAR_1 != 0) {
  VAR_3->next = VAR_6;
  VAR_3 = VAR_6;
 } else {
  VAR_1 = VAR_6;
  VAR_3 = VAR_6;
  if (VAR_5 == VAR_2)
   FUNC_2();
 }

 FUNC_0(VAR_7);
 return 0;
}
