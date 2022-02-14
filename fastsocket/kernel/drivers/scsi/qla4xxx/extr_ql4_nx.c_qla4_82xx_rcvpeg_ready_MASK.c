
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct scsi_qla_host {int hw_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct scsi_qla_host*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct scsi_qla_host *VAR_5)
{
 uint32_t VAR_6 = 0;
 int VAR_7 = 0;


 FUNC_3(&VAR_5->hw_lock);
 VAR_6 = FUNC_2(VAR_5, VAR_0);
 FUNC_4(&VAR_5->hw_lock);

 while ((VAR_6 != VAR_2) && (VAR_7 < 30000)) {
  FUNC_5(100);

  FUNC_3(&VAR_5->hw_lock);
  VAR_6 = FUNC_2(VAR_5, VAR_0);
  FUNC_4(&VAR_5->hw_lock);

  VAR_7++;
 }

 if (VAR_7 >= 30000) {
  FUNC_0(FUNC_1(VAR_1, VAR_5,
      "Receive Peg initialization not complete: 0x%x.\n", VAR_6));
  return VAR_3;
 }

 return VAR_4;
}
