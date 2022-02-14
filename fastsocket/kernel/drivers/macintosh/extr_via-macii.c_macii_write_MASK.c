
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {int nbytes; scalar_t__* data; int complete; struct adb_request* next; scalar_t__ reply_len; scalar_t__ sent; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct adb_request* VAR_2 ;
 scalar_t__ VAR_3 ;
 struct adb_request* VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_1(struct adb_request *VAR_6)
{
 if (VAR_6->nbytes < 2 || VAR_6->data[0] != VAR_0 || VAR_6->nbytes > 15) {
  VAR_6->complete = 1;
  return -VAR_1;
 }

 VAR_6->next = ((void*)0);
 VAR_6->sent = 0;
 VAR_6->complete = 0;
 VAR_6->reply_len = 0;

 if (VAR_2 != ((void*)0)) {
  VAR_4->next = VAR_6;
  VAR_4 = VAR_6;
 } else {
  VAR_2 = VAR_6;
  VAR_4 = VAR_6;
  if (VAR_5 == VAR_3) FUNC_0();
 }
 return 0;
}
