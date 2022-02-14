
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_line6 {int ifcdev; TYPE_1__* properties; struct snd_card* card; } ;
struct snd_card {int longname; int shortname; int driver; } ;
struct TYPE_2__ {char* name; } ;


 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,struct snd_card**) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct usb_line6 *VAR_4)
{
 static int VAR_5;
 struct snd_card *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3[VAR_5], VAR_2[VAR_5], VAR_1, 0,
         &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_4->card = VAR_6;

 FUNC_3(VAR_6->driver, VAR_0);
 FUNC_3(VAR_6->shortname, "Line6-USB");
 FUNC_2(VAR_6->longname, "Line6 %s at USB %s", VAR_4->properties->name,
  FUNC_0(VAR_4->ifcdev));
 return 0;
}
