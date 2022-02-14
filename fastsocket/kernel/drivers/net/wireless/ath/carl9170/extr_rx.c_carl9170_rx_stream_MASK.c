
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ar9170_stream {scalar_t__ tag; int * payload; int length; } ;
struct ar9170 {unsigned int rx_failover_missing; TYPE_2__* rx_failover; TYPE_1__* hw; } ;
struct TYPE_6__ {void* data; unsigned int len; } ;
struct TYPE_5__ {int wiphy; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ar9170*,int *,unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,unsigned int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (char*,int ,void*,unsigned int) ;
 int FUNC_7 (TYPE_2__*,unsigned int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (int ,char*,...) ;

__attribute__((used)) static void FUNC_11(struct ar9170 *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6 = 0, VAR_7 = 0;
 struct ar9170_stream *VAR_8;
 u8 *VAR_9;

 VAR_9 = VAR_3;
 VAR_5 = VAR_4;

 while (VAR_5 >= 4) {
  VAR_8 = (void *) VAR_9;
  VAR_7 = FUNC_3(VAR_8->length);
  VAR_6 = FUNC_0(VAR_7, 4);


  if (VAR_8->tag != FUNC_2(VAR_0)) {






   if (!VAR_2->rx_failover_missing) {


    if (FUNC_5()) {
     FUNC_10(VAR_2->hw->wiphy,
      "missing tag!\n");
    }

    FUNC_1(VAR_2, VAR_9, VAR_5);
    return;
   }

   if (VAR_2->rx_failover_missing > VAR_5) {
    if (FUNC_5()) {
     FUNC_10(VAR_2->hw->wiphy,
      "possible multi "
      "stream corruption!\n");
     goto err_telluser;
    } else {
     goto err_silent;
    }
   }

   FUNC_4(FUNC_7(VAR_2->rx_failover, VAR_5), VAR_9, VAR_5);
   VAR_2->rx_failover_missing -= VAR_5;

   if (VAR_2->rx_failover_missing <= 0) {
    VAR_2->rx_failover_missing = 0;
    FUNC_11(VAR_2, VAR_2->rx_failover->data,
         VAR_2->rx_failover->len);

    FUNC_8(VAR_2->rx_failover);
    FUNC_9(VAR_2->rx_failover, 0);
   }

   return;
  }


  if (VAR_6 > VAR_5 - 4) {
   if (VAR_2->rx_failover_missing) {

    if (FUNC_5()) {
     FUNC_10(VAR_2->hw->wiphy, "double rx "
      "stream corruption!\n");
     goto err_telluser;
    } else {
     goto err_silent;
    }
   }







   FUNC_4(FUNC_7(VAR_2->rx_failover, VAR_5), VAR_9, VAR_5);
   VAR_2->rx_failover_missing = VAR_7 - VAR_5;
   return;
  }
  FUNC_1(VAR_2, VAR_8->payload, VAR_7);

  VAR_9 += VAR_6 + 4;
  VAR_5 -= VAR_6 + 4;
 }

 if (VAR_5) {
  if (FUNC_5()) {
   FUNC_10(VAR_2->hw->wiphy, "%d bytes of unprocessed "
    "data left in rx stream!\n", VAR_5);
  }

  goto err_telluser;
 }

 return;

err_telluser:
 FUNC_10(VAR_2->hw->wiphy, "damaged RX stream data [want:%d, "
  "data:%d, rx:%d, pending:%d ]\n", VAR_7, VAR_6, VAR_5,
  VAR_2->rx_failover_missing);

 if (VAR_2->rx_failover_missing)
  FUNC_6("rxbuf:", VAR_1,
         VAR_2->rx_failover->data,
         VAR_2->rx_failover->len);

 FUNC_6("stream:", VAR_1,
        VAR_3, VAR_4);

 FUNC_10(VAR_2->hw->wiphy, "please check your hardware and cables, if "
  "you see this message frequently.\n");

err_silent:
 if (VAR_2->rx_failover_missing) {
  FUNC_8(VAR_2->rx_failover);
  FUNC_9(VAR_2->rx_failover, 0);
  VAR_2->rx_failover_missing = 0;
 }
}
