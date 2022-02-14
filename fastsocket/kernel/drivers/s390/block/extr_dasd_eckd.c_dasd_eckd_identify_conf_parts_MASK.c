
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vd_sneq {int dummy; } ;
struct TYPE_2__ {int identifier; } ;
struct dasd_sneq {int format; int res1; TYPE_1__ flags; } ;
struct dasd_ned {int dummy; } ;
struct dasd_gneq {int dummy; } ;
struct dasd_eckd_private {int conf_len; struct dasd_gneq* gneq; struct vd_sneq* vdsneq; struct dasd_sneq* sneq; struct dasd_ned* ned; scalar_t__ conf_data; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dasd_eckd_private *VAR_1)
{

 struct dasd_sneq *VAR_2;
 int VAR_3, VAR_4;

 VAR_1->ned = ((void*)0);
 VAR_1->sneq = ((void*)0);
 VAR_1->vdsneq = ((void*)0);
 VAR_1->gneq = ((void*)0);
 VAR_4 = VAR_1->conf_len / sizeof(struct dasd_sneq);
 VAR_2 = (struct dasd_sneq *)VAR_1->conf_data;
 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
  if (VAR_2->flags.identifier == 1 && VAR_2->format == 1)
   VAR_1->sneq = VAR_2;
  else if (VAR_2->flags.identifier == 1 && VAR_2->format == 4)
   VAR_1->vdsneq = (struct vd_sneq *)VAR_2;
  else if (VAR_2->flags.identifier == 2)
   VAR_1->gneq = (struct dasd_gneq *)VAR_2;
  else if (VAR_2->flags.identifier == 3 && VAR_2->res1 == 1)
   VAR_1->ned = (struct dasd_ned *)VAR_2;
  VAR_2++;
 }
 if (!VAR_1->ned || !VAR_1->gneq) {
  VAR_1->ned = ((void*)0);
  VAR_1->sneq = ((void*)0);
  VAR_1->vdsneq = ((void*)0);
  VAR_1->gneq = ((void*)0);
  return -VAR_0;
 }
 return 0;

}
