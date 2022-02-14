
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next; } ;
struct smscore_idlist_t {int entry; int context; TYPE_1__ idlist; struct smscore_device_t* coredev; } ;
struct smscore_device_t {int clientslock; } ;
struct smscore_client_t {int entry; int context; TYPE_1__ idlist; struct smscore_device_t* coredev; } ;


 int FUNC_0 (struct smscore_idlist_t*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct smscore_client_t *VAR_0)
{
 struct smscore_device_t *VAR_1 = VAR_0->coredev;
 unsigned long VAR_2;

 FUNC_4(&VAR_1->clientslock, VAR_2);


 while (!FUNC_2(&VAR_0->idlist)) {
  struct smscore_idlist_t *VAR_3 =
   (struct smscore_idlist_t *) VAR_0->idlist.next;
  FUNC_1(&VAR_3->entry);
  FUNC_0(VAR_3);
 }

 FUNC_3("%p", VAR_0->context);

 FUNC_1(&VAR_0->entry);
 FUNC_0(VAR_0);

 FUNC_5(&VAR_1->clientslock, VAR_2);
}
