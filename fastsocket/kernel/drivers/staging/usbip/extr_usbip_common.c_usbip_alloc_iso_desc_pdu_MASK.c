
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_iso_packet_descriptor {int dummy; } ;
struct urb {int number_of_packets; int * iso_frame_desc; } ;
typedef int ssize_t ;


 int VAR_0 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (struct usbip_iso_packet_descriptor*,int) ;
 int FUNC_2 (struct usbip_iso_packet_descriptor*,int *,int) ;

void *FUNC_3(struct urb *VAR_1, ssize_t *VAR_2)
{
 void *VAR_3;
 struct usbip_iso_packet_descriptor *VAR_4;
 int VAR_5 = VAR_1->number_of_packets;
 ssize_t VAR_6 = VAR_5 * sizeof(*VAR_4);
 int VAR_7;

 VAR_3 = FUNC_0(VAR_6, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_4 = VAR_3 + (VAR_7 * sizeof(*VAR_4));

  FUNC_2(VAR_4, &VAR_1->iso_frame_desc[VAR_7], 1);
  FUNC_1(VAR_4, 1);
 }

 *VAR_2 = VAR_6;

 return VAR_3;
}
