
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6 {struct snd_card* card; } ;
struct snd_card {int dummy; } ;


 int FUNC_0 (struct snd_card*) ;
 int FUNC_1 (struct snd_card*) ;

void FUNC_2(struct usb_line6 *VAR_0)
{
 struct snd_card *VAR_1 = VAR_0->card;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 VAR_0->card = ((void*)0);
}
