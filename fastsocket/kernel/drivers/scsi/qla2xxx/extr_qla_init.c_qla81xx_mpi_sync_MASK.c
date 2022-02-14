
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {TYPE_6__* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;
struct TYPE_8__ {int pdev; } ;


 int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int*) ;
 int FUNC_2 (int ,TYPE_1__*,int,char*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int,int*) ;
 int FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static int
FUNC_5(scsi_qla_host_t *VAR_3)
{

 int VAR_4;
 uint16_t VAR_5;
 uint32_t VAR_6;

 if (!FUNC_0(VAR_3->hw))
  return VAR_1;

 VAR_4 = FUNC_4(VAR_3, 0x7c00, 1);
 if (VAR_4 != VAR_1) {
  FUNC_2(VAR_2, VAR_3, 0x0105,
      "Unable to acquire semaphore.\n");
  goto done;
 }

 FUNC_1(VAR_3->hw->pdev, 0x54, &VAR_5);
 VAR_4 = FUNC_3(VAR_3, 0x7a15, &VAR_6);
 if (VAR_4 != VAR_1) {
  FUNC_2(VAR_2, VAR_3, 0x0067, "Unable to read sync.\n");
  goto done_release;
 }

 VAR_5 &= 0xe0;
 if (VAR_5 == (VAR_6 & 0xe0))
  goto done_release;

 VAR_6 &= ~0xe0;
 VAR_6 |= VAR_5;
 VAR_4 = FUNC_4(VAR_3, 0x7a15, VAR_6);
 if (VAR_4 != VAR_1) {
  FUNC_2(VAR_2, VAR_3, 0x0114, "Unable to gain sync.\n");
 }

done_release:
 VAR_4 = FUNC_4(VAR_3, 0x7c00, 0);
 if (VAR_4 != VAR_1) {
  FUNC_2(VAR_2, VAR_3, 0x006d,
      "Unable to release semaphore.\n");
 }

done:
 return VAR_4;
}
