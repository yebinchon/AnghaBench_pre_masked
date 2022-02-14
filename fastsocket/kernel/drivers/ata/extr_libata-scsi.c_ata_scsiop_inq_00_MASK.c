
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_scsi_args {int dummy; } ;
typedef int pages ;


 int FUNC_0 (int*,int const*,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct ata_scsi_args *VAR_0, u8 *VAR_1)
{
 const u8 VAR_2[] = {
  0x00,
  0x80,
  0x83,
  0x89,
  0xb0,
  0xb1,
  0xb2,
 };

 VAR_1[3] = sizeof(VAR_2);
 FUNC_0(VAR_1 + 4, VAR_2, sizeof(VAR_2));
 return 0;
}
