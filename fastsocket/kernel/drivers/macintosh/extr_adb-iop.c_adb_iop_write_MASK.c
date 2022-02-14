
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int nbytes; scalar_t__* data; int complete; struct adb_request* next; scalar_t__ reply_len; scalar_t__ sent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 struct adb_request* VAR_3 ;
 scalar_t__ VAR_4 ;
 struct adb_request* VAR_5 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct adb_request *VAR_6)
{
 unsigned long VAR_7;

 if ((VAR_6->nbytes < 2) || (VAR_6->data[0] != VAR_0)) {
  VAR_6->complete = 1;
  return -VAR_1;
 }

 FUNC_2(VAR_7);

 VAR_6->next = ((void*)0);
 VAR_6->sent = 0;
 VAR_6->complete = 0;
 VAR_6->reply_len = 0;

 if (VAR_3 != 0) {
  VAR_5->next = VAR_6;
  VAR_5 = VAR_6;
 } else {
  VAR_3 = VAR_6;
  VAR_5 = VAR_6;
 }

 FUNC_1(VAR_7);
 if (VAR_2 == VAR_4) FUNC_0();
 return 0;
}
