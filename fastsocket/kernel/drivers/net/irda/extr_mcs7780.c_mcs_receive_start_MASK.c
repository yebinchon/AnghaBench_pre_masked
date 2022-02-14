
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; int in_frame; } ;
struct mcs_cb {TYPE_2__* rx_urb; int in_buf; int ep_in; int usbdev; TYPE_1__ rx_buff; } ;
struct TYPE_5__ {scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ,int,int ,struct mcs_cb*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct mcs_cb *VAR_4)
{
 VAR_4->rx_buff.in_frame = VAR_0;
 VAR_4->rx_buff.state = VAR_2;

 FUNC_0(VAR_4->rx_urb, VAR_4->usbdev,
     FUNC_1(VAR_4->usbdev, VAR_4->ep_in),
     VAR_4->in_buf, 4096, VAR_3, VAR_4);

 VAR_4->rx_urb->status = 0;
 return FUNC_2(VAR_4->rx_urb, VAR_1);
}
