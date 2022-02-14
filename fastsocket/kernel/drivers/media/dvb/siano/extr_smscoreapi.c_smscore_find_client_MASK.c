
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_idlist_t {int id; int data_type; } ;
struct list_head {struct list_head* next; } ;
struct smscore_device_t {int clientslock; struct list_head clients; } ;
struct smscore_client_t {struct list_head idlist; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct
smscore_client_t *FUNC_2(struct smscore_device_t *VAR_0,
          int VAR_1, int VAR_2)
{
 struct smscore_client_t *VAR_3 = ((void*)0);
 struct list_head *VAR_4, *VAR_5;
 unsigned long VAR_6;
 struct list_head *VAR_7, *VAR_8;


 FUNC_0(&VAR_0->clientslock, VAR_6);
 VAR_5 = &VAR_0->clients;
 for (VAR_4 = VAR_5->next;
      (VAR_4 != VAR_5) && !VAR_3;
      VAR_4 = VAR_4->next) {
  VAR_7 = &((struct smscore_client_t *)VAR_4)->idlist;
  for (VAR_8 = VAR_7->next;
       VAR_8 != VAR_7;
       VAR_8 = VAR_8->next) {
   if ((((struct smscore_idlist_t *)VAR_8)->id == VAR_2) &&
       (((struct smscore_idlist_t *)VAR_8)->data_type == VAR_1 ||
       (((struct smscore_idlist_t *)VAR_8)->data_type == 0))) {
    VAR_3 = (struct smscore_client_t *) VAR_4;
    break;
   }
  }
 }
 FUNC_1(&VAR_0->clientslock, VAR_6);
 return VAR_3;
}
