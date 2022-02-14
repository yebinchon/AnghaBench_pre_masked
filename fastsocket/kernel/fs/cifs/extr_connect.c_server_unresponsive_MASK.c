
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {scalar_t__ tcpStatus; int response_q; int hostname; scalar_t__ lstrp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (struct TCP_Server_Info*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool
FUNC_4(struct TCP_Server_Info *VAR_4)
{
 if (VAR_4->tcpStatus == VAR_0 &&
     FUNC_2(VAR_3, VAR_4->lstrp + 2 * VAR_2)) {
  FUNC_0(1, "Server %s has not responded in %d seconds. "
     "Reconnecting...", VAR_4->hostname,
     (2 * VAR_2) / VAR_1);
  FUNC_1(VAR_4);
  FUNC_3(&VAR_4->response_q);
  return 1;
 }

 return 0;
}
