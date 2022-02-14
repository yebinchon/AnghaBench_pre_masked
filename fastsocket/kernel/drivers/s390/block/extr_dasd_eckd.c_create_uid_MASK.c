
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dasd_uid {scalar_t__ type; scalar_t__ vduit; int base_unit_addr; int real_unit_addr; int ssid; int serial; int vendor; } ;
struct dasd_eckd_private {TYPE_4__* vdsneq; TYPE_3__* sneq; TYPE_2__* ned; TYPE_1__* gneq; struct dasd_uid uid; } ;
struct TYPE_8__ {int* uit; } ;
struct TYPE_7__ {scalar_t__ sua_flags; int base_unit_addr; } ;
struct TYPE_6__ {int unit_addr; int HDA_location; int HDA_manufacturer; } ;
struct TYPE_5__ {int subsystemID; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct dasd_uid*,int ,int) ;
 int FUNC_3 (scalar_t__,char*,int) ;

__attribute__((used)) static void FUNC_4(struct dasd_eckd_private *VAR_2)
{
 int VAR_3;
 struct dasd_uid *VAR_4;

 VAR_4 = &VAR_2->uid;
 FUNC_2(VAR_4, 0, sizeof(struct dasd_uid));
 FUNC_1(VAR_4->vendor, VAR_2->ned->HDA_manufacturer,
        sizeof(VAR_4->vendor) - 1);
 FUNC_0(VAR_4->vendor, sizeof(VAR_4->vendor) - 1);
 FUNC_1(VAR_4->serial, VAR_2->ned->HDA_location,
        sizeof(VAR_4->serial) - 1);
 FUNC_0(VAR_4->serial, sizeof(VAR_4->serial) - 1);
 VAR_4->ssid = VAR_2->gneq->subsystemID;
 VAR_4->real_unit_addr = VAR_2->ned->unit_addr;
 if (VAR_2->sneq) {
  VAR_4->type = VAR_2->sneq->sua_flags;
  if (VAR_4->type == VAR_1)
   VAR_4->base_unit_addr = VAR_2->sneq->base_unit_addr;
 } else {
  VAR_4->type = VAR_0;
 }
 if (VAR_2->vdsneq) {
  for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
   FUNC_3(VAR_4->vduit+2*VAR_3, "%02x",
    VAR_2->vdsneq->uit[VAR_3]);
  }
 }
}
