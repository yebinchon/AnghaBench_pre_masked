
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_idlist_t {int id; int data_type; int entry; } ;
struct smscore_device_t {int clientslock; } ;
struct smscore_client_t {int idlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct smscore_idlist_t* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (char*) ;
 struct smscore_client_t* FUNC_3 (struct smscore_device_t*,int,int) ;

__attribute__((used)) static int FUNC_4(struct smscore_device_t *VAR_4,
       struct smscore_client_t *VAR_5,
       int VAR_6, int VAR_7)
{
 struct smscore_idlist_t *VAR_8;
 struct smscore_client_t *VAR_9;

 if (!VAR_5) {
  FUNC_2("bad parameter.");
  return -VAR_1;
 }
 VAR_9 = FUNC_3(VAR_4, VAR_6, VAR_7);
 if (VAR_9 == VAR_5)
  return 0;

 if (VAR_9) {
  FUNC_2("The msg ID already registered to another client.");
  return -VAR_0;
 }
 VAR_8 = FUNC_0(sizeof(struct smscore_idlist_t), VAR_3);
 if (!VAR_8) {
  FUNC_2("Can't allocate memory for client id.");
  return -VAR_2;
 }
 VAR_8->id = VAR_7;
 VAR_8->data_type = VAR_6;
 FUNC_1(&VAR_8->entry, &VAR_5->idlist,
   &VAR_4->clientslock);
 return 0;
}
