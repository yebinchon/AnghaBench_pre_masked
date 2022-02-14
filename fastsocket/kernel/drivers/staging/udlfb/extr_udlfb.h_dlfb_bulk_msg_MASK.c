
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dlfb_data {TYPE_1__* tx_urb; int done; } ;
struct TYPE_3__ {int actual_length; int transfer_buffer_length; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(struct dlfb_data *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1->done);

 VAR_1->tx_urb->actual_length = 0;
 VAR_1->tx_urb->transfer_buffer_length = VAR_2;

 VAR_3 = FUNC_3(VAR_1->tx_urb, VAR_0);
 if (!FUNC_4(&VAR_1->done, 1000)) {
  FUNC_2(VAR_1->tx_urb);
  FUNC_1("usb timeout !!!\n");
 }

 return VAR_1->tx_urb->actual_length;
}
