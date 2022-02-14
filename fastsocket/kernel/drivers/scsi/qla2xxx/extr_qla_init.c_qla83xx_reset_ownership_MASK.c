
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int nic_core_reset_owner; } ;
struct qla_hw_data {int portnum; TYPE_1__ flags; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*,int,char*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int*) ;

void
FUNC_2(scsi_qla_host_t *VAR_5)
{
 struct qla_hw_data *VAR_6 = VAR_5->hw;
 uint32_t VAR_7, VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12 = 0x3;
 uint16_t VAR_13 = 0xffff, VAR_14;

 FUNC_1(VAR_5, VAR_3, &VAR_7);

 FUNC_1(VAR_5, VAR_1, &VAR_9);
 FUNC_1(VAR_5, VAR_2, &VAR_10);
 for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
  VAR_11 = ((VAR_9 >> (VAR_14 * 4)) & VAR_12);
  if ((VAR_11 == VAR_0) &&
      (VAR_14 != VAR_6->portnum)) {
   VAR_13 = VAR_14;
   break;
  }
 }
 if (VAR_13 == 0xffff) {
  for (VAR_14 = 0; VAR_14 < 8; VAR_14++) {
   VAR_11 = ((VAR_10 >> (VAR_14 * 4)) &
       VAR_12);
   if ((VAR_11 == VAR_0) &&
       ((VAR_14 + 8) != VAR_6->portnum)) {
    VAR_13 = VAR_14 + 8;
    break;
   }
  }
 }




 VAR_8 = ~((1 << (VAR_6->portnum)) |
   ((VAR_13 == 0xffff) ?
    0 : (1 << (VAR_13))));




 if (!(VAR_7 & VAR_8) &&
   (VAR_6->portnum < VAR_13)) {
  FUNC_0(VAR_4, VAR_5, 0xb07f,
      "This host is Reset owner.\n");
  VAR_6->flags.nic_core_reset_owner = 1;
 }
}
