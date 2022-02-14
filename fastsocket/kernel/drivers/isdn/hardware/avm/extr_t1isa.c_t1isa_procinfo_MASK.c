
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct capi_ctr {scalar_t__ driverdata; } ;
struct TYPE_4__ {char* infobuf; char* cardname; char** version; TYPE_1__* card; } ;
typedef TYPE_2__ avmctrl_info ;
struct TYPE_3__ {int port; int irq; int cardnr; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,char*,char*,char*,int,int,int) ;

__attribute__((used)) static char *FUNC_1(struct capi_ctr *VAR_1)
{
 avmctrl_info *VAR_2 = (avmctrl_info *)(VAR_1->driverdata);

 if (!VAR_2)
  return "";
 FUNC_0(VAR_2->infobuf, "%s %s 0x%x %d %d",
  VAR_2->cardname[0] ? VAR_2->cardname : "-",
  VAR_2->version[VAR_0] ? VAR_2->version[VAR_0] : "-",
  VAR_2->card ? VAR_2->card->port : 0x0,
  VAR_2->card ? VAR_2->card->irq : 0,
  VAR_2->card ? VAR_2->card->cardnr : 0
  );
 return VAR_2->infobuf;
}
