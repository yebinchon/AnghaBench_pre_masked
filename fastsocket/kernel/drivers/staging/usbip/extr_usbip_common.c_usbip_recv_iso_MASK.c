
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbip_iso_packet_descriptor {int dummy; } ;
struct usbip_device {scalar_t__ side; int tcp_socket; } ;
struct urb {int number_of_packets; int * iso_frame_desc; TYPE_1__* dev; int pipe; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usbip_device*,int ) ;
 int FUNC_5 (struct usbip_iso_packet_descriptor*,int ) ;
 int FUNC_6 (struct usbip_iso_packet_descriptor*,int *,int ) ;
 int FUNC_7 (int ,int ,void*,int,int ) ;

int FUNC_8(struct usbip_device *VAR_6, struct urb *VAR_7)
{
 void *VAR_8;
 struct usbip_iso_packet_descriptor *VAR_9;
 int VAR_10 = VAR_7->number_of_packets;
 int VAR_11 = VAR_10 * sizeof(*VAR_9);
 int VAR_12;
 int VAR_13;

 if (!FUNC_3(VAR_7->pipe))
  return 0;


 if (VAR_10 == 0) {


  return 0;
 }

 VAR_8 = FUNC_2(VAR_11, VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_13 = FUNC_7(0, VAR_6->tcp_socket, VAR_8, VAR_11, 0);
 if (VAR_13 != VAR_11) {
  FUNC_0(&VAR_7->dev->dev, "recv iso_frame_descriptor, %d\n",
   VAR_13);
  FUNC_1(VAR_8);

  if (VAR_6->side == VAR_4)
   FUNC_4(VAR_6, VAR_3);
  else
   FUNC_4(VAR_6, VAR_5);

  return -VAR_1;
 }

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_9 = VAR_8 + (VAR_12 * sizeof(*VAR_9));

  FUNC_5(VAR_9, 0);
  FUNC_6(VAR_9, &VAR_7->iso_frame_desc[VAR_12], 0);
 }

 FUNC_1(VAR_8);

 return VAR_13;
}
