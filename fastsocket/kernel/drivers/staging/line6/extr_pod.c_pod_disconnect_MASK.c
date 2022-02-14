
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* properties; struct snd_line6_pcm* line6pcm; } ;
struct usb_line6_pod {TYPE_2__ line6; int firmware_version; scalar_t__ versionreq_ok; } ;
struct device {int dummy; } ;
struct usb_interface {struct device dev; } ;
struct snd_line6_pcm {int dummy; } ;
struct TYPE_3__ {int device_bit; } ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int ,int ,struct device*) ;
 int FUNC_3 (struct snd_line6_pcm*) ;
 int FUNC_4 (struct snd_line6_pcm*) ;
 struct usb_line6_pod* FUNC_5 (struct usb_interface*) ;

void FUNC_6(struct usb_interface *VAR_25)
{
 struct usb_line6_pod *VAR_26;

 if (VAR_25 == ((void*)0))
  return;
 VAR_26 = FUNC_5(VAR_25);

 if (VAR_26 != ((void*)0)) {
  struct snd_line6_pcm *VAR_27 = VAR_26->line6.line6pcm;
  struct device *VAR_28 = &VAR_25->dev;

  if (VAR_27 != ((void*)0)) {
   FUNC_4(VAR_27);
   FUNC_3(VAR_27);
  }

  if (VAR_28 != ((void*)0)) {

   if (VAR_26->versionreq_ok)
    FUNC_2(VAR_26->firmware_version, VAR_26->line6.properties->device_bit, VAR_28);

   FUNC_0(VAR_28, &VAR_0);
   FUNC_0(VAR_28, &VAR_1);
   FUNC_0(VAR_28, &VAR_2);
   FUNC_0(VAR_28, &VAR_3);
   FUNC_0(VAR_28, &VAR_4);
   FUNC_0(VAR_28, &VAR_5);
   FUNC_0(VAR_28, &VAR_6);
   FUNC_0(VAR_28, &VAR_7);
   FUNC_0(VAR_28, &VAR_8);
   FUNC_0(VAR_28, &VAR_9);
   FUNC_0(VAR_28, &VAR_10);
   FUNC_0(VAR_28, &VAR_11);
   FUNC_0(VAR_28, &VAR_13);
   FUNC_0(VAR_28, &VAR_14);
   FUNC_0(VAR_28, &VAR_15);
   FUNC_0(VAR_28, &VAR_16);
   FUNC_0(VAR_28, &VAR_17);
   FUNC_0(VAR_28, &VAR_18);
   FUNC_0(VAR_28, &VAR_19);
   FUNC_0(VAR_28, &VAR_20);
   FUNC_0(VAR_28, &VAR_21);
   FUNC_0(VAR_28, &VAR_22);
   FUNC_0(VAR_28, &VAR_23);
   FUNC_0(VAR_28, &VAR_24);




  }
 }

 FUNC_1(VAR_25);
}
