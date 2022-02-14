
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct qla_hw_data {int portnum; } ;
struct TYPE_9__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*,int,char*,...) ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_1__*,int,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int ,int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,scalar_t__*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;

void
FUNC_7(scsi_qla_host_t *VAR_6, uint16_t VAR_7)
{
 uint16_t VAR_8 = (VAR_7 << 15) | VAR_0;
 uint32_t VAR_9;
 uint32_t VAR_10;
 struct qla_hw_data *VAR_11 = VAR_6->hw;


retry_lock:
 if (FUNC_4(VAR_6, VAR_1, &VAR_9)
     == VAR_3) {
  if (VAR_9) {

   FUNC_6(VAR_6, VAR_2,
       VAR_11->portnum);
  } else {
   FUNC_4(VAR_6, VAR_2,
       &VAR_10);
   FUNC_0(VAR_4, VAR_6, 0xb063,
       "Failed to acquire IDC lock, acquired by %d, "
       "retrying...\n", VAR_10);


   if (FUNC_3(VAR_6)
       == VAR_3) {
    FUNC_5();
    goto retry_lock;
   } else
    FUNC_1(VAR_5, VAR_6, 0xb075,
        "IDC Lock recovery FAILED.\n");
  }

 }

 return;


retry_lock2:
 if (FUNC_2(VAR_6, VAR_8, 0, 0, ((void*)0))) {
  FUNC_0(VAR_4, VAR_6, 0xb072,
      "Failed to acquire IDC lock. retrying...\n");

  if (FUNC_3(VAR_6) == VAR_3) {
   FUNC_5();
   goto retry_lock2;
  } else
   FUNC_1(VAR_5, VAR_6, 0xb076,
       "IDC Lock recovery FAILED.\n");
 }

 return;
}
