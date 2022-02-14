
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_device_t {int clientslock; int clients; } ;
struct smscore_client_t {int entry; int context; int onremove_handler; int onresponse_handler; struct smscore_device_t* coredev; int idlist; } ;
struct smsclient_params_t {int initial_id; int data_type; int context; int onremove_handler; int onresponse_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct smscore_client_t* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (char*,int ,int ,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct smscore_device_t*,int ,int ) ;
 int FUNC_6 (struct smscore_device_t*,struct smscore_client_t*,int ,int ) ;

int FUNC_7(struct smscore_device_t *VAR_3,
       struct smsclient_params_t *VAR_4,
       struct smscore_client_t **VAR_5)
{
 struct smscore_client_t *VAR_6;

 if (FUNC_5(VAR_3, VAR_4->data_type,
    VAR_4->initial_id)) {
  FUNC_4("Client already exist.");
  return -VAR_0;
 }

 VAR_6 = FUNC_1(sizeof(struct smscore_client_t), VAR_2);
 if (!VAR_6) {
  FUNC_4("Failed to allocate memory for client.");
  return -VAR_1;
 }

 FUNC_0(&VAR_6->idlist);
 VAR_6->coredev = VAR_3;
 VAR_6->onresponse_handler = VAR_4->onresponse_handler;
 VAR_6->onremove_handler = VAR_4->onremove_handler;
 VAR_6->context = VAR_4->context;
 FUNC_2(&VAR_6->entry, &VAR_3->clients,
   &VAR_3->clientslock);
 FUNC_6(VAR_3, VAR_6, VAR_4->data_type,
    VAR_4->initial_id);
 *VAR_5 = VAR_6;
 FUNC_3("%p %d %d", VAR_4->context, VAR_4->data_type,
    VAR_4->initial_id);

 return 0;
}
