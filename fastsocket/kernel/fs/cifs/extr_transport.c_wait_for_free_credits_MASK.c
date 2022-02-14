
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {scalar_t__ tcpStatus; int req_lock; int in_flight; int request_q; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct TCP_Server_Info*) ;
 int FUNC_1 (struct TCP_Server_Info*) ;
 int FUNC_2 (struct TCP_Server_Info*,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct TCP_Server_Info *VAR_4, const int VAR_5,
        int *VAR_6)
{
 int VAR_7;

 FUNC_3(&VAR_4->req_lock);
 if (VAR_5 == VAR_0) {

  VAR_4->in_flight++;
  *VAR_6 -= 1;
  FUNC_4(&VAR_4->req_lock);
  return 0;
 }

 while (1) {
  if (*VAR_6 <= 0) {
   FUNC_4(&VAR_4->req_lock);
   FUNC_1(VAR_4);
   VAR_7 = FUNC_5(VAR_4->request_q,
       FUNC_2(VAR_4, VAR_6));
   FUNC_0(VAR_4);
   if (VAR_7)
    return VAR_7;
   FUNC_3(&VAR_4->req_lock);
  } else {
   if (VAR_4->tcpStatus == VAR_2) {
    FUNC_4(&VAR_4->req_lock);
    return -VAR_3;
   }







   if (VAR_5 != VAR_1) {
    *VAR_6 -= 1;
    VAR_4->in_flight++;
   }
   FUNC_4(&VAR_4->req_lock);
   break;
  }
 }
 return 0;
}
