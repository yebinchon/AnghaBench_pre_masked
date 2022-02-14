
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int bLength; int bIEIdentifier; } ;
struct TYPE_8__ {TYPE_3__ hdr; } ;
struct TYPE_5__ {int bLength; int bIEIdentifier; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;
struct wusbhc {int cack_list; TYPE_4__ cack_ie; int keep_alive_timer; TYPE_2__ keep_alive_ie; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct wusbhc *VAR_3)
{
 VAR_3->keep_alive_ie.hdr.bIEIdentifier = VAR_1;
 VAR_3->keep_alive_ie.hdr.bLength = sizeof(VAR_3->keep_alive_ie.hdr);
 FUNC_0(&VAR_3->keep_alive_timer, VAR_2);

 VAR_3->cack_ie.hdr.bIEIdentifier = VAR_0;
 VAR_3->cack_ie.hdr.bLength = sizeof(VAR_3->cack_ie.hdr);
 FUNC_1(&VAR_3->cack_list);

 return 0;
}
