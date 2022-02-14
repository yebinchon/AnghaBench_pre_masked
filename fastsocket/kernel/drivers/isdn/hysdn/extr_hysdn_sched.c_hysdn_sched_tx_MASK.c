
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {unsigned short len; } ;
struct TYPE_7__ {int net_tx_busy; unsigned short async_len; unsigned short async_channel; scalar_t__ err_log_state; int myid; scalar_t__ async_busy; int async_data; } ;
typedef TYPE_1__ hysdn_card ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_1__*) ;
 struct sk_buff* FUNC_1 (TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_2 (TYPE_1__*) ;
 struct sk_buff* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (unsigned char*,int ,unsigned short) ;
 int FUNC_5 (struct sk_buff*,unsigned char*,unsigned short) ;
 int FUNC_6 (unsigned char*,int ) ;

int
FUNC_7(hysdn_card *VAR_13, unsigned char *VAR_14,
  unsigned short volatile *VAR_15, unsigned short volatile *VAR_16,
  unsigned short VAR_17)
{
 struct sk_buff *VAR_18;

 if (VAR_13->net_tx_busy) {
  VAR_13->net_tx_busy = 0;
  FUNC_2(VAR_13);
 }

 if (VAR_13->async_busy) {
  if (VAR_13->async_len <= VAR_17) {
   FUNC_4(VAR_14, VAR_13->async_data, VAR_13->async_len);
   *VAR_15 = VAR_13->async_len;
   *VAR_16 = VAR_13->async_channel;
   VAR_13->async_busy = 0;
   return (1);
  }
  VAR_13->async_busy = 0;
 }
 if ((VAR_13->err_log_state == VAR_9) &&
     (VAR_17 >= VAR_4)) {
  FUNC_6(VAR_14, VAR_3);
  *VAR_15 = VAR_4;
  *VAR_16 = VAR_1;
  VAR_13->err_log_state = VAR_8;
  return (1);
 }
 if ((VAR_13->err_log_state == VAR_10) &&
     (VAR_17 >= VAR_6)) {
  FUNC_6(VAR_14, VAR_5);
  *VAR_15 = VAR_6;
  *VAR_16 = VAR_1;
  VAR_13->err_log_state = VAR_7;
  return (1);
 }

 if ((VAR_12 & (1 << VAR_13->myid)) &&
     (VAR_18 = FUNC_3(VAR_13)) != ((void*)0))
 {
  if (VAR_18->len <= VAR_17) {

   FUNC_5(VAR_18, VAR_14, VAR_18->len);
   *VAR_15 = VAR_18->len;
   *VAR_16 = VAR_2;
   VAR_13->net_tx_busy = 1;
   return (1);
  } else
   FUNC_2(VAR_13);
 }
 return (0);
}
