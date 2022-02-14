
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int versions ;
typedef int u8 ;
struct ata_scsi_args {int id; } ;
typedef int hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int*,int ,int) ;
 int FUNC_3 (int*,...) ;

__attribute__((used)) static unsigned int FUNC_4(struct ata_scsi_args *VAR_3, u8 *VAR_4)
{
 const u8 VAR_5[] = {
  0x60,

  0x03,
  0x20,

  0x02,
  0x60
 };
 u8 VAR_6[] = {
  VAR_2,
  0,
  0x5,
  2,
  95 - 4
 };

 FUNC_0("ENTER\n");


 if (FUNC_1(VAR_3->id))
  VAR_6[1] |= (1 << 7);

 FUNC_3(VAR_4, VAR_6, sizeof(VAR_6));
 FUNC_3(&VAR_4[8], "ATA     ", 8);
 FUNC_2(VAR_3->id, &VAR_4[16], VAR_1, 16);
 FUNC_2(VAR_3->id, &VAR_4[32], VAR_0, 4);

 if (VAR_4[32] == 0 || VAR_4[32] == ' ')
  FUNC_3(&VAR_4[32], "n/a ", 4);

 FUNC_3(VAR_4 + 59, VAR_5, sizeof(VAR_5));

 return 0;
}
