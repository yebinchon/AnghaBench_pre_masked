
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hpsa_scsi_dev_t {int dummy; } ;
struct ctlr_info {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (struct hpsa_scsi_dev_t*,int,int,int) ;
 scalar_t__ FUNC_1 (struct ctlr_info*,struct hpsa_scsi_dev_t*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ctlr_info *VAR_0,
 u8 *VAR_1, struct hpsa_scsi_dev_t *VAR_2)
{
 u32 VAR_3 = FUNC_4(*((__le32 *) VAR_1));

 if (!FUNC_3(VAR_1)) {

  if (FUNC_2(VAR_1))
   FUNC_0(VAR_2, 3, 0, VAR_3 & 0x3fff);
  else

   FUNC_0(VAR_2, 2, -1, -1);
  return;
 }

 if (FUNC_1(VAR_0, VAR_2)) {




  FUNC_0(VAR_2,
   1, (VAR_3 >> 16) & 0x3fff, VAR_3 & 0x00ff);
  return;
 }
 FUNC_0(VAR_2, 0, 0, VAR_3 & 0x3fff);
}
