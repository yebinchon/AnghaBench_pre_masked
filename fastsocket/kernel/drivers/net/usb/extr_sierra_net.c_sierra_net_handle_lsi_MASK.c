
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbnet {int net; } ;
struct sierra_net_data {int link_up; } ;
struct TYPE_3__ {int byte; } ;
struct TYPE_4__ {int word; } ;
struct hip_hdr {int hdrlen; TYPE_1__ msgspecific; TYPE_2__ payload_len; } ;


 int FUNC_0 (int ,char*) ;
 struct sierra_net_data* FUNC_1 (struct usbnet*) ;
 int FUNC_2 (struct usbnet*,char*,int ) ;
 int FUNC_3 (struct sierra_net_data*,int ) ;
 int FUNC_4 (struct usbnet*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct usbnet *VAR_0, char *VAR_1,
  struct hip_hdr *VAR_2)
{
 struct sierra_net_data *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1 + VAR_2->hdrlen,
     VAR_2->payload_len.word);
 if (VAR_4 < 0) {
  FUNC_0(VAR_0->net, "Invalid LSI\n");
  return;
 }
 if (VAR_4) {
  FUNC_3(VAR_3, VAR_2->msgspecific.byte);
  VAR_3->link_up = 1;
 } else {
  VAR_3->link_up = 0;
 }
 FUNC_4(VAR_0, VAR_4, 0);
}
