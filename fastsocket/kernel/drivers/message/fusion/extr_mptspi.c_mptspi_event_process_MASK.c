
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct _MPT_SCSI_HOST {int dummy; } ;
struct TYPE_8__ {int * Data; int Event; } ;
struct TYPE_7__ {scalar_t__ bus_type; int sh; } ;
typedef TYPE_1__ MPT_ADAPTER ;
typedef TYPE_2__ EventNotificationReply_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct _MPT_SCSI_HOST*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 struct _MPT_SCSI_HOST* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(MPT_ADAPTER *VAR_3, EventNotificationReply_t *VAR_4)
{
 u8 VAR_5 = FUNC_0(VAR_4->Event) & 0xFF;
 struct _MPT_SCSI_HOST *VAR_6 = FUNC_3(VAR_3->sh);

 if (VAR_3->bus_type != VAR_2)
  return 0;

 if (VAR_6 && VAR_5 == VAR_0) {
  int VAR_7
   = (FUNC_0(VAR_4->Data[0]) & 0x00FF0000) >> 16;

  if (VAR_7 == VAR_1) {
   int VAR_8 = (FUNC_0(VAR_4->Data[0]) & 0xFF000000) >> 24;
   FUNC_1(VAR_6, VAR_8);
  }
 }
 return FUNC_2(VAR_3, VAR_4);
}
