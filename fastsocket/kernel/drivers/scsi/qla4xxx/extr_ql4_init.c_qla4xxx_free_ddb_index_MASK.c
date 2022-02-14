
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (int ,struct scsi_qla_host*,char*,int) ;
 int FUNC_3 (struct scsi_qla_host*,int) ;
 int FUNC_4 (struct scsi_qla_host*,int,int *,int ,int *,int*,int*,int*,int *,int *) ;

void FUNC_5(struct scsi_qla_host *VAR_7)
{
 int VAR_8;
 int VAR_9;
 uint32_t VAR_10 = 0, VAR_11 = 0;
 uint32_t VAR_12 = 0, VAR_13 = 0;

 VAR_8 = FUNC_1(VAR_7) ? VAR_5 :
         VAR_4;

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10 = VAR_11) {
  VAR_9 = FUNC_4(VAR_7, VAR_10, ((void*)0), 0, ((void*)0),
           &VAR_11, &VAR_12, &VAR_13,
      ((void*)0), ((void*)0));
  if (VAR_9 == VAR_6) {
   VAR_11++;
   continue;
  }
  if (VAR_12 == VAR_0 ||
      VAR_12 == VAR_1) {
   FUNC_0(FUNC_2(VAR_3, VAR_7,
       "Freeing DDB index = 0x%x\n", VAR_10));
   VAR_9 = FUNC_3(VAR_7, VAR_10);
   if (VAR_9 == VAR_6)
    FUNC_2(VAR_2, VAR_7,
        "Unable to clear DDB index = "
        "0x%x\n", VAR_10);
  }
  if (VAR_11 == 0)
   break;
 }
}
