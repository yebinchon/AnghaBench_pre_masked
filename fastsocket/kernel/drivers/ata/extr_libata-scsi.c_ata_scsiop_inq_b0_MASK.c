
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ata_scsi_args {int id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int,int*) ;
 int FUNC_4 (int,int*) ;

__attribute__((used)) static unsigned int FUNC_5(struct ata_scsi_args *VAR_0, u8 *VAR_1)
{
 u16 VAR_2;

 VAR_1[1] = 0xb0;
 VAR_1[3] = 0x3c;
 VAR_2 = 1 << FUNC_1(VAR_0->id);
 FUNC_2(VAR_2, &VAR_1[6]);
 if (FUNC_0(VAR_0->id)) {
  FUNC_4(65535 * 512 / 8, &VAR_1[36]);
  FUNC_3(1, &VAR_1[28]);
 }

 return 0;
}
