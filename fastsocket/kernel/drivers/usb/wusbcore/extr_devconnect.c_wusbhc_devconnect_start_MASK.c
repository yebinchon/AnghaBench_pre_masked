
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wusbhc {int trust_timeout; int keep_alive_timer; struct wuie_host_info* wuie_host_info; int chid; TYPE_1__* rsv; struct device* dev; } ;
struct TYPE_4__ {int bLength; int bIEIdentifier; } ;
struct wuie_host_info {TYPE_2__ hdr; int CHID; int attributes; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct wuie_host_info*) ;
 struct wuie_host_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int *,int) ;
 int VAR_5 ;
 int FUNC_5 (struct wusbhc*,int ,int ,TYPE_2__*) ;

int FUNC_6(struct wusbhc *VAR_6)
{
 struct device *VAR_7 = VAR_6->dev;
 struct wuie_host_info *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_8->hdr.bLength = sizeof(*VAR_8);
 VAR_8->hdr.bIEIdentifier = VAR_4;
 VAR_8->attributes = FUNC_0((VAR_6->rsv->stream << 3) | VAR_3);
 VAR_8->CHID = VAR_6->chid;
 VAR_9 = FUNC_5(VAR_6, 0, 0, &VAR_8->hdr);
 if (VAR_9 < 0) {
  FUNC_1(VAR_7, "Cannot add Host Info MMCIE: %d\n", VAR_9);
  goto error_mmcie_set;
 }
 VAR_6->wuie_host_info = VAR_8;

 FUNC_4(VAR_5, &VAR_6->keep_alive_timer,
      (VAR_6->trust_timeout*VAR_0)/1000/2);

 return 0;

error_mmcie_set:
 FUNC_2(VAR_8);
 return VAR_9;
}
