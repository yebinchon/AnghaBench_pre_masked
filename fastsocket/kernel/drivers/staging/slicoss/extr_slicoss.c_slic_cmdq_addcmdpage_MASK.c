
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ushort ;
typedef int ulong ;
typedef void* u32 ;
struct TYPE_4__ {int hosthandle; } ;
struct slic_hostcmd {int busy; struct slic_hostcmd* next; struct slic_hostcmd* next_all; void* paddrh; void* paddrl; TYPE_1__ cmd64; struct slic_handle* pslic_handle; } ;
struct TYPE_5__ {size_t handle_index; int handle_token; } ;
struct slic_handle {TYPE_2__ token; int * next; int * other_handle; scalar_t__ offset; void* address; int type; } ;
struct TYPE_6__ {int flags; int lock; } ;
struct slic_cmdqueue {int count; TYPE_3__ lock; struct slic_hostcmd* head; } ;
struct adapter {int slic_handle_ix; struct slic_cmdqueue cmdq_free; struct slic_cmdqueue cmdq_all; struct slic_handle* slic_handles; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*,struct slic_handle*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static void FUNC_7(struct adapter *VAR_3, u32 *VAR_4)
{
 struct slic_hostcmd *VAR_5;
 struct slic_hostcmd *VAR_6;
 struct slic_hostcmd *VAR_7;
 struct slic_cmdqueue *VAR_8;
 int VAR_9;
 void *VAR_10;
 ulong VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 struct slic_handle *VAR_14;

 VAR_10 = VAR_4;
 VAR_5 = (struct slic_hostcmd *)VAR_10;
 VAR_9 = 0;

 VAR_11 = FUNC_6((void *)VAR_4);
 VAR_12 = FUNC_2(VAR_11);
 VAR_13 = FUNC_1(VAR_11);

 VAR_6 = ((void*)0);
 VAR_7 = VAR_5;
 while ((VAR_9 < VAR_0) &&
        (VAR_3->slic_handle_ix < 256)) {

  FUNC_3(VAR_3, VAR_14);
  if (VAR_14 == ((void*)0))
   FUNC_0(0);
  FUNC_0(VAR_14 ==
         &VAR_3->slic_handles[VAR_14->token.
           handle_index]);
  VAR_14->type = VAR_1;
  VAR_14->address = (void *) VAR_5;
  VAR_14->offset = (ushort) VAR_3->slic_handle_ix++;
  VAR_14->other_handle = ((void*)0);
  VAR_14->next = ((void*)0);

  VAR_5->pslic_handle = VAR_14;
  VAR_5->cmd64.hosthandle = VAR_14->token.handle_token;
  VAR_5->busy = 0;
  VAR_5->paddrl = VAR_12;
  VAR_5->paddrh = VAR_13;
  VAR_5->next_all = VAR_6;
  VAR_5->next = VAR_6;
  VAR_6 = VAR_5;
  VAR_12 += VAR_2;
  VAR_10 += VAR_2;

  VAR_5 = (struct slic_hostcmd *)VAR_10;
  VAR_9++;
 }

 VAR_8 = &VAR_3->cmdq_all;
 VAR_8->count += VAR_9;
 VAR_7->next_all = VAR_8->head;
 VAR_8->head = VAR_6;
 VAR_8 = &VAR_3->cmdq_free;
 FUNC_4(&VAR_8->lock.lock, VAR_8->lock.flags);
 VAR_8->count += VAR_9;
 VAR_7->next = VAR_8->head;
 VAR_8->head = VAR_6;
 FUNC_5(&VAR_8->lock.lock, VAR_8->lock.flags);
}
