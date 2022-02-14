
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ok; } ;
struct usb_line6_pod {TYPE_1__ dumpreq; int line6; int startup_count; scalar_t__ versionreq_ok; } ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int,void (*) (unsigned long),struct usb_line6_pod*) ;
 int FUNC_2 (struct usb_line6_pod*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 enum {
  REQUEST_NONE,
  REQUEST_DUMP,
  REQUEST_VERSION
 };

 int VAR_1 = REQUEST_NONE;
 struct usb_line6_pod *VAR_2 = (struct usb_line6_pod *)VAR_0;

 if (VAR_2->dumpreq.ok) {
  if (!VAR_2->versionreq_ok)
   VAR_1 = REQUEST_VERSION;
 } else {
  if (VAR_2->versionreq_ok)
   VAR_1 = REQUEST_DUMP;
  else if (VAR_2->startup_count++ & 1)
   VAR_1 = REQUEST_DUMP;
  else
   VAR_1 = REQUEST_VERSION;
 }

 switch (VAR_1) {
 case REQUEST_DUMP:
  FUNC_0(&VAR_2->dumpreq, &VAR_2->line6, 0);
  break;

 case REQUEST_VERSION:
  FUNC_2(VAR_2);
  break;

 default:
  return;
 }

 FUNC_1(&VAR_2->dumpreq, 1, FUNC_3, VAR_2);
}
