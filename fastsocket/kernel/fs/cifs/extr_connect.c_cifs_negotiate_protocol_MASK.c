
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_ses {struct TCP_Server_Info* server; } ;
struct TCP_Server_Info {scalar_t__ maxBuf; scalar_t__ tcpStatus; } ;


 int FUNC_0 (unsigned int,struct cifs_ses*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct TCP_Server_Info*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(unsigned int VAR_5, struct cifs_ses *VAR_6)
{
 int VAR_7 = 0;
 struct TCP_Server_Info *VAR_8 = VAR_6->server;


 if (VAR_8->maxBuf != 0)
  return 0;

 FUNC_1(VAR_8, 1);
 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 == -VAR_2) {

  FUNC_1(VAR_8, 1);
  VAR_7 = FUNC_0(VAR_5, VAR_6);
  if (VAR_7 == -VAR_2)
   VAR_7 = -VAR_3;
 }
 if (VAR_7 == 0) {
  FUNC_2(&VAR_4);
  if (VAR_8->tcpStatus == VAR_1)
   VAR_8->tcpStatus = VAR_0;
  else
   VAR_7 = -VAR_3;
  FUNC_3(&VAR_4);

 }

 return VAR_7;
}
