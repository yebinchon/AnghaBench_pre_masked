
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct se_cmd {int scsi_ascq; int scsi_asc; } ;



__attribute__((used)) static int FUNC_0(
 struct se_cmd *VAR_0,
 u8 *VAR_1,
 u8 *VAR_2)
{
 *VAR_1 = VAR_0->scsi_asc;
 *VAR_2 = VAR_0->scsi_ascq;

 return 0;
}
