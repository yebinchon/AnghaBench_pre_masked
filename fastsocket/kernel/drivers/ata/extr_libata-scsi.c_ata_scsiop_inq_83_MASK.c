
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_scsi_args {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned char*,int ,int) ;
 int FUNC_1 (int*,char*,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct ata_scsi_args *VAR_4, u8 *VAR_5)
{
 const int VAR_6 = 68;
 int VAR_7;

 VAR_5[1] = 0x83;
 VAR_7 = 4;


 VAR_5[VAR_7 + 0] = 2;
 VAR_5[VAR_7 + 3] = VAR_3;
 VAR_7 += 4;
 FUNC_0(VAR_4->id, (unsigned char *) VAR_5 + VAR_7,
        VAR_2, VAR_3);
 VAR_7 += VAR_3;



 VAR_5[VAR_7 + 0] = 2;
 VAR_5[VAR_7 + 1] = 1;
 VAR_5[VAR_7 + 3] = VAR_6;
 VAR_7 += 4;
 FUNC_1(VAR_5 + VAR_7, "ATA     ", 8);
 VAR_7 += 8;
 FUNC_0(VAR_4->id, (unsigned char *) VAR_5 + VAR_7, VAR_0,
        VAR_1);
 VAR_7 += VAR_1;
 FUNC_0(VAR_4->id, (unsigned char *) VAR_5 + VAR_7, VAR_2,
        VAR_3);
 VAR_7 += VAR_3;

 VAR_5[3] = VAR_7 - 4;
 return 0;
}
