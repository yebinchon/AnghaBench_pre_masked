
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_transfer {scalar_t__ user_data; } ;
struct frame {scalar_t__ dev; } ;
struct carlu {scalar_t__ tx_stream; int tx_queue_lock; int tx_queue_len; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct carlu*,struct frame*) ;
 int FUNC_4 (struct carlu*) ;
 int FUNC_5 (struct frame*,int) ;

__attribute__((used)) static void FUNC_6(struct libusb_transfer *VAR_0)
{
 struct frame *VAR_1 = (void *) VAR_0->user_data;
 struct carlu *VAR_2 = (void *) VAR_1->dev;

 FUNC_0(FUNC_1(VAR_2->tx_queue_lock) != 0);
 VAR_2->tx_queue_len--;
 FUNC_2(VAR_2->tx_queue_lock);

 if (VAR_2->tx_stream)
  FUNC_5(VAR_1, 4);

 FUNC_3(VAR_2, VAR_1);
 FUNC_4(VAR_2);
}
