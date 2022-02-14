
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;
struct cifs_tcon {scalar_t__ tidStatus; int treeName; int need_reconnect; int retry; struct cifs_ses* ses; } ;
struct cifs_ses {int capabilities; int session_mutex; scalar_t__ need_reconnect; struct TCP_Server_Info* server; } ;
struct TCP_Server_Info {scalar_t__ tcpStatus; int response_q; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cifs_ses*,int ,struct cifs_tcon*,struct nls_table*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;

 int VAR_8 ;

 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,struct cifs_ses*) ;
 int FUNC_4 (int ,struct cifs_ses*,struct nls_table*) ;
 struct nls_table* FUNC_5 () ;
 int FUNC_6 (struct cifs_tcon*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,struct cifs_tcon*,int *,int *) ;
 int VAR_9 ;
 int FUNC_10 (struct nls_table*) ;
 int FUNC_11 (int ,int,int) ;

__attribute__((used)) static int
FUNC_12(struct cifs_tcon *VAR_10, int VAR_11)
{
 int VAR_12 = 0;
 struct cifs_ses *VAR_13;
 struct TCP_Server_Info *VAR_14;
 struct nls_table *VAR_15;






 if (!VAR_10)
  return 0;

 VAR_13 = VAR_10->ses;
 VAR_14 = VAR_13->server;





 if (VAR_10->tidStatus == VAR_1) {
  if (VAR_11 != 128 &&
      VAR_11 != VAR_7 &&
      VAR_11 != VAR_8) {
   FUNC_2(1, "can not send cmd %d while umounting",
    VAR_11);
   return -VAR_5;
  }
 }





 while (VAR_14->tcpStatus == VAR_2) {
  FUNC_11(VAR_14->response_q,
   (VAR_14->tcpStatus != VAR_2), 10 * VAR_6);


  if (VAR_14->tcpStatus != VAR_2)
   break;






  if (!VAR_10->retry) {
   FUNC_2(1, "gave up waiting on reconnect in smb_init");
   return -VAR_4;
  }
 }

 if (!VAR_13->need_reconnect && !VAR_10->need_reconnect)
  return 0;

 VAR_15 = FUNC_5();





 FUNC_7(&VAR_13->session_mutex);
 VAR_12 = FUNC_3(0, VAR_13);
 if (VAR_12 == 0 && VAR_13->need_reconnect)
  VAR_12 = FUNC_4(0, VAR_13, VAR_15);


 if (VAR_12 || !VAR_10->need_reconnect) {
  FUNC_8(&VAR_13->session_mutex);
  goto out;
 }

 FUNC_6(VAR_10);
 VAR_12 = FUNC_0(0, VAR_13, VAR_10->treeName, VAR_10, VAR_15);
 FUNC_8(&VAR_13->session_mutex);
 FUNC_2(1, "reconnect tcon rc = %d", VAR_12);

 if (VAR_12)
  goto out;





 FUNC_1(&VAR_9);


 if (VAR_13->capabilities & VAR_0)
  FUNC_9(0, VAR_10, ((void*)0), ((void*)0));
out:




 switch (VAR_11) {
 case 129:
 case 128:
 case 132:
 case 131:
 case 130:
  VAR_12 = -VAR_3;
 }

 FUNC_10(VAR_15);
 return VAR_12;
}
