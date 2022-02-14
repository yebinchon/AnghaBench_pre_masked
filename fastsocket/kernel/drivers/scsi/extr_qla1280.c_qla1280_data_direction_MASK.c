
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct scsi_cmnd {int sc_data_direction; } ;


 int VAR_0 ;
 int VAR_1 ;





__attribute__((used)) static inline uint16_t
FUNC_0(struct scsi_cmnd *VAR_2)
{
 switch(VAR_2->sc_data_direction) {
 case 130:
  return VAR_0;
 case 128:
  return VAR_1;
 case 131:
  return VAR_0 | VAR_1;





 case 129:
 default:
  return 0;
 }
}
