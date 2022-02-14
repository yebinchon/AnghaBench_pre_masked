
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wwnn ;
typedef unsigned int u8 ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int brd_no; TYPE_1__* pcidev; int cfg_soft_wwnn; int soft_wwn_enable; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int *,char*,int ) ;
 int FUNC_2 (unsigned int*,int ,int) ;
 int FUNC_3 (unsigned int*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_2);
 struct lpfc_hba *VAR_7 = ((struct lpfc_vport *)VAR_6->hostdata)->phba;
 unsigned int VAR_8, VAR_9, VAR_10=VAR_5;
 u8 VAR_11[8];


 if (VAR_4[VAR_10-1] == '\n')
  VAR_10--;

 if (!VAR_7->soft_wwn_enable || (VAR_10 < 16) || (VAR_10 > 18) ||
     ((VAR_10 == 17) && (*VAR_4++ != 'x')) ||
     ((VAR_10 == 18) && ((*VAR_4++ != '0') || (*VAR_4++ != 'x'))))
  return -VAR_0;






 FUNC_2(VAR_11, 0, sizeof(VAR_11));


 for (VAR_8=0, VAR_9=0; VAR_8 < 16; VAR_8++) {
  if ((*VAR_4 >= 'a') && (*VAR_4 <= 'f'))
   VAR_9 = ((VAR_9 << 4) | ((*VAR_4++ -'a') + 10));
  else if ((*VAR_4 >= 'A') && (*VAR_4 <= 'F'))
   VAR_9 = ((VAR_9 << 4) | ((*VAR_4++ -'A') + 10));
  else if ((*VAR_4 >= '0') && (*VAR_4 <= '9'))
   VAR_9 = ((VAR_9 << 4) | (*VAR_4++ -'0'));
  else
   return -VAR_0;
  if (VAR_8 % 2) {
   VAR_11[VAR_8/2] = VAR_9 & 0xff;
   VAR_9 = 0;
  }
 }
 VAR_7->cfg_soft_wwnn = FUNC_3(VAR_11);

 FUNC_1(VAR_1, &VAR_7->pcidev->dev,
     "lpfc%d: soft_wwnn set. Value will take effect upon "
     "setting of the soft_wwpn\n", VAR_7->brd_no);

 return VAR_5;
}
