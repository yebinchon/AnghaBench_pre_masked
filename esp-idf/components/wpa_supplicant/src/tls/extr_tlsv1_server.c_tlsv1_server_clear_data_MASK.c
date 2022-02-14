
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlsv1_server {scalar_t__ dh_secret_len; int * dh_secret; scalar_t__ use_session_ticket; scalar_t__ session_ticket_len; int * session_ticket; int * client_rsa_key; int verify; int rl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct tlsv1_server *VAR_1)
{
 FUNC_5(&VAR_1->rl, VAR_0);
 FUNC_4(&VAR_1->rl);
 FUNC_3(&VAR_1->rl);
 FUNC_2(&VAR_1->verify);

 FUNC_0(VAR_1->client_rsa_key);
 VAR_1->client_rsa_key = ((void*)0);

 FUNC_1(VAR_1->session_ticket);
 VAR_1->session_ticket = ((void*)0);
 VAR_1->session_ticket_len = 0;
 VAR_1->use_session_ticket = 0;

 FUNC_1(VAR_1->dh_secret);
 VAR_1->dh_secret = ((void*)0);
 VAR_1->dh_secret_len = 0;
}
