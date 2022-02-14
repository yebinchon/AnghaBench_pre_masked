
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct scsi_cmnd {TYPE_1__* device; } ;
typedef int srb_t ;
struct TYPE_2__ {int host; } ;


 struct scsi_cmnd* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;






 int VAR_4 ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static inline int
FUNC_4(srb_t *VAR_5, uint16_t *VAR_6)
{
 struct scsi_cmnd *VAR_7 = FUNC_0(VAR_5);
 uint8_t VAR_8 = FUNC_2(VAR_7->device->host);


 *VAR_6 = 0;


 switch (FUNC_1(VAR_7)) {
 case 131:
  *VAR_6 |= VAR_2;
  break;
 case 130:
  *VAR_6 |= VAR_0;
  break;
 case 133:
  *VAR_6 |= VAR_0;
  break;
 case 128:
  *VAR_6 |= VAR_2;
  break;
 case 132:
 case 129:
  if (VAR_8 & VAR_4)
   *VAR_6 |= VAR_3;
  else
   *VAR_6 |= VAR_1;
  break;
 default:
  *VAR_6 |= VAR_1;
  break;
 }

 return FUNC_3(VAR_7);
}
