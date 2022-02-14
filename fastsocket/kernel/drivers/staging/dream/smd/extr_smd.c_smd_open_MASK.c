
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smd_channel {void (* notify ) (void*,unsigned int) ;TYPE_2__* send; TYPE_1__* recv; int ch_list; void* priv; int last_state; scalar_t__ current_packet; } ;
typedef struct smd_channel smd_channel_t ;
struct TYPE_4__ {scalar_t__ head; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void FUNC_0 (void*,unsigned int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 struct smd_channel* FUNC_4 (char const*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct smd_channel*) ;
 int VAR_7 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(const char *VAR_8, smd_channel_t **VAR_9,
      void *VAR_10, void (*VAR_11)(void *, unsigned))
{
 struct smd_channel *VAR_12;
 unsigned long VAR_13;

 if (VAR_6 == 0) {
  FUNC_3("smd_open() before smd_init()\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_4(VAR_8);
 if (!VAR_12)
  return -VAR_0;

 if (VAR_11 == 0)
  VAR_11 = FUNC_0;

 VAR_12->notify = VAR_11;
 VAR_12->current_packet = 0;
 VAR_12->last_state = VAR_1;
 VAR_12->priv = VAR_10;

 *VAR_9 = VAR_12;

 FUNC_6(&VAR_7, VAR_13);
 FUNC_2(&VAR_12->ch_list, &VAR_5);
 if (VAR_12->recv->state == VAR_2) {
  VAR_12->send->head = 0;
  FUNC_1(VAR_12->send, VAR_4);
 } else {
  FUNC_1(VAR_12->send, VAR_3);
 }
 FUNC_7(&VAR_7, VAR_13);
 FUNC_5(VAR_12);

 return 0;
}
