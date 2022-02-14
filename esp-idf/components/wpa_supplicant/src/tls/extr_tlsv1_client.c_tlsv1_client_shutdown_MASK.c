
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_client {scalar_t__ session_resumed; int * server_rsa_key; scalar_t__ certificate_requested; int rl; int verify; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(struct tlsv1_client *VAR_3)
{
 VAR_3->state = VAR_0;

 if (FUNC_1(&VAR_3->verify) < 0) {
  FUNC_5(VAR_1, "TLSv1: Failed to re-initialize verify "
      "hash");
  return -1;
 }

 FUNC_4(&VAR_3->rl, VAR_2);
 FUNC_3(&VAR_3->rl);
 FUNC_2(&VAR_3->rl);

 VAR_3->certificate_requested = 0;
 FUNC_0(VAR_3->server_rsa_key);
 VAR_3->server_rsa_key = ((void*)0);
 VAR_3->session_resumed = 0;

 return 0;
}
