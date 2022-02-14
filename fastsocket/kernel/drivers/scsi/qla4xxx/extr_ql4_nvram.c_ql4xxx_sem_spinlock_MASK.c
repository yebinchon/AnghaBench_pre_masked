
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct scsi_qla_host {int host_no; int hardware_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (char*,int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;

int FUNC_8(struct scsi_qla_host * VAR_2, u32 VAR_3, u32 VAR_4)
{
 uint32_t VAR_5;
 unsigned long VAR_6;
 unsigned int VAR_7 = 30;

 FUNC_0(FUNC_2("scsi%ld : Trying to get SEM lock - mask= 0x%x, code = "
        "0x%x\n", VAR_2->host_no, VAR_3, VAR_4));
 do {
  FUNC_4(&VAR_2->hardware_lock, VAR_6);
  FUNC_7((VAR_3 | VAR_4), FUNC_1(VAR_2));
  VAR_5 = FUNC_3(FUNC_1(VAR_2));
  FUNC_5(&VAR_2->hardware_lock, VAR_6);
  if ((VAR_5 & (VAR_3 >> 16)) == VAR_4) {
   FUNC_0(FUNC_2("scsi%ld : Got SEM LOCK - mask= 0x%x, "
          "code = 0x%x\n", VAR_2->host_no,
          VAR_3, VAR_4));
   return VAR_1;
  }
  FUNC_6(1);
 } while (--VAR_7);
 return VAR_0;
}
