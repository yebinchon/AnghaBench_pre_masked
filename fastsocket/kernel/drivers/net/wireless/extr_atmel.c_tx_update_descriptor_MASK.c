
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int tx_desc_count; } ;
struct atmel_private {scalar_t__ tx_desc_tail; int tx_rate; int group_cipher_suite; int pairwise_cipher_suite; scalar_t__ tx_desc_previous; int tx_free_mem; int tx_desc_free; TYPE_1__ host_info; scalar_t__ use_wpa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct atmel_private*,int ,scalar_t__) ;
 int FUNC_1 (struct atmel_private*,int ,scalar_t__) ;
 int FUNC_2 (struct atmel_private*,int ,int) ;
 int FUNC_3 (struct atmel_private*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct atmel_private *VAR_15, int VAR_16,
     u16 VAR_17, u16 VAR_18, u8 VAR_19)
{
 FUNC_1(VAR_15, FUNC_0(VAR_15, VAR_10, VAR_15->tx_desc_tail), VAR_18);
 FUNC_1(VAR_15, FUNC_0(VAR_15, VAR_13, VAR_15->tx_desc_tail), VAR_17);
 if (!VAR_15->use_wpa)
  FUNC_1(VAR_15, FUNC_0(VAR_15, VAR_7, VAR_15->tx_desc_tail), VAR_17);
 FUNC_3(VAR_15, FUNC_0(VAR_15, VAR_9, VAR_15->tx_desc_tail), VAR_19);
 FUNC_3(VAR_15, FUNC_0(VAR_15, VAR_11, VAR_15->tx_desc_tail), VAR_15->tx_rate);
 FUNC_3(VAR_15, FUNC_0(VAR_15, VAR_12, VAR_15->tx_desc_tail), 0);
 if (VAR_15->use_wpa) {
  int VAR_20, VAR_21;
  if (VAR_16) {
   VAR_20 = VAR_15->group_cipher_suite;
   if (VAR_20 == VAR_3 ||
       VAR_20 == VAR_2)
    VAR_21 = 8;
   else if (VAR_20 == VAR_1)
    VAR_21 = 12;
   else if (VAR_15->pairwise_cipher_suite == VAR_3 ||
     VAR_15->pairwise_cipher_suite == VAR_2) {
    VAR_20 = VAR_15->pairwise_cipher_suite;
    VAR_21 = 8;
   } else {
    VAR_20 = VAR_0;
    VAR_21 = 0;
   }
  } else {
   VAR_20 = VAR_15->pairwise_cipher_suite;
   if (VAR_20 == VAR_3 ||
       VAR_20 == VAR_2)
    VAR_21 = 8;
   else if (VAR_20 == VAR_1)
    VAR_21 = 12;
   else if (VAR_15->group_cipher_suite == VAR_3 ||
     VAR_15->group_cipher_suite == VAR_2) {
    VAR_20 = VAR_15->group_cipher_suite;
    VAR_21 = 8;
   } else {
    VAR_20 = VAR_0;
    VAR_21 = 0;
   }
  }

  FUNC_3(VAR_15, FUNC_0(VAR_15, VAR_5, VAR_15->tx_desc_tail),
       VAR_20);
  FUNC_3(VAR_15, FUNC_0(VAR_15, VAR_4, VAR_15->tx_desc_tail),
       VAR_21);
 }
 FUNC_2(VAR_15, FUNC_0(VAR_15, VAR_8, VAR_15->tx_desc_tail), 0x80000000L);
 FUNC_3(VAR_15, FUNC_0(VAR_15, VAR_6, VAR_15->tx_desc_tail), VAR_14);
 if (VAR_15->tx_desc_previous != VAR_15->tx_desc_tail)
  FUNC_2(VAR_15, FUNC_0(VAR_15, VAR_8, VAR_15->tx_desc_previous), 0);
 VAR_15->tx_desc_previous = VAR_15->tx_desc_tail;
 if (VAR_15->tx_desc_tail < (VAR_15->host_info.tx_desc_count - 1))
  VAR_15->tx_desc_tail++;
 else
  VAR_15->tx_desc_tail = 0;
 VAR_15->tx_desc_free--;
 VAR_15->tx_free_mem -= VAR_17;
}
