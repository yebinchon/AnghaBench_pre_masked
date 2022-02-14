
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ sli_rev; int cfg_fcp_io_channel; scalar_t__ cfg_fcp_imax; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (struct lpfc_hba*,int) ;
 int FUNC_3 (char const*,char*,int*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_5, struct device_attribute *VAR_6,
    const char *VAR_7, size_t VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_0(VAR_5);
 struct lpfc_vport *VAR_10 = (struct lpfc_vport *)VAR_9->hostdata;
 struct lpfc_hba *VAR_11 = VAR_10->phba;
 int VAR_12 = 0, VAR_13;


 if (VAR_11->sli_rev != VAR_4)
  return -VAR_0;


 if (!FUNC_1(VAR_7[0]))
  return -VAR_0;
 if (FUNC_3(VAR_7, "%i", &VAR_12) != 1)
  return -VAR_0;





 if (VAR_12 < VAR_3 || VAR_12 > VAR_2)
  return -VAR_0;

 VAR_11->cfg_fcp_imax = (uint32_t)VAR_12;
 for (VAR_13 = 0; VAR_13 < VAR_11->cfg_fcp_io_channel; VAR_13 += VAR_1)
  FUNC_2(VAR_11, VAR_13);

 return FUNC_4(VAR_7);
}
