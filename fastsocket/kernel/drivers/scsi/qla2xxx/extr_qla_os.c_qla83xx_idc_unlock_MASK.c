
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct qla_hw_data {scalar_t__ portnum; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*,int,char*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int ,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

void
FUNC_5(scsi_qla_host_t *VAR_5, uint16_t VAR_6)
{
 uint16_t VAR_7 = (VAR_6 << 15) | VAR_0, VAR_8;
 uint32_t VAR_9;
 struct qla_hw_data *VAR_10 = VAR_5->hw;




 VAR_8 = 0;
retry_unlock:
 if (FUNC_2(VAR_5, VAR_1, &VAR_9)
     == VAR_3) {
  if (VAR_9 == VAR_10->portnum) {
   FUNC_2(VAR_5, VAR_2, &VAR_9);

   FUNC_4(VAR_5, VAR_1, 0xff);
  } else if (VAR_8 < 10) {



   FUNC_3();
   VAR_8++;
   FUNC_0(VAR_4, VAR_5, 0xb064,
       "Failed to release IDC lock, retyring=%d\n", VAR_8);
   goto retry_unlock;
  }
 } else if (VAR_8 < 10) {

  FUNC_3();
  VAR_8++;
  FUNC_0(VAR_4, VAR_5, 0xb065,
      "Failed to read drv-lockid, retyring=%d\n", VAR_8);
  goto retry_unlock;
 }

 return;


 VAR_8 = 0;
retry_unlock2:
 if (FUNC_1(VAR_5, VAR_7, 0, 0, ((void*)0))) {
  if (VAR_8 < 10) {

   FUNC_3();
   VAR_8++;
   FUNC_0(VAR_4, VAR_5, 0xb066,
       "Failed to release IDC lock, retyring=%d\n", VAR_8);
   goto retry_unlock2;
  }
 }

 return;
}
