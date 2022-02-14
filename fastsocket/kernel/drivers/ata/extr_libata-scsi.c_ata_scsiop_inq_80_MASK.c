
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_scsi_args {int id; } ;
typedef int hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*,int ,int) ;
 int FUNC_1 (int*,int const*,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct ata_scsi_args *VAR_2, u8 *VAR_3)
{
 const u8 VAR_4[] = {
  0,
  0x80,
  0,
  VAR_1,
 };

 FUNC_1(VAR_3, VAR_4, sizeof(VAR_4));
 FUNC_0(VAR_2->id, (unsigned char *) &VAR_3[4],
        VAR_0, VAR_1);
 return 0;
}
