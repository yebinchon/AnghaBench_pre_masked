
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tf ;
struct ata_taskfile {int lbal; int nsect; int command; } ;
struct ata_scsi_args {char* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char*,int*,int ,int) ;
 int FUNC_1 (struct ata_taskfile*,int ,int,int*) ;
 int FUNC_2 (int*,char*,int) ;
 int FUNC_3 (struct ata_taskfile*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_4(struct ata_scsi_args *VAR_4, u8 *VAR_5)
{
 struct ata_taskfile VAR_6;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));

 VAR_5[1] = 0x89;
 VAR_5[2] = (0x238 >> 8);
 VAR_5[3] = (0x238 & 0xff);

 FUNC_2(&VAR_5[8], "linux   ", 8);
 FUNC_2(&VAR_5[16], "libata          ", 16);
 FUNC_2(&VAR_5[32], VAR_3, 4);
 FUNC_0(VAR_4->id, &VAR_5[32], VAR_2, 4);



 VAR_6.command = VAR_1;
 VAR_6.lbal = 0x1;
 VAR_6.nsect = 0x1;

 FUNC_1(&VAR_6, 0, 1, &VAR_5[36]);
 VAR_5[36] = 0x34;

 VAR_5[56] = VAR_0;

 FUNC_2(&VAR_5[60], &VAR_4->id[0], 512);
 return 0;
}
