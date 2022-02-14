
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {int* id; int max_sectors; int horkage; } ;
typedef int model_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ata_device*,int ,char*,char*,int) ;
 int FUNC_1 (int*,unsigned char*,int ,int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (unsigned char*,char*) ;

__attribute__((used)) static void FUNC_4(struct ata_device *VAR_5)
{
 unsigned char VAR_6[VAR_3 + 1];

 FUNC_1(VAR_5->id, VAR_6, VAR_2, sizeof(VAR_6));

 if (VAR_5->max_sectors > 255)
  VAR_5->max_sectors = 255;

 if (FUNC_3(VAR_6, "Integrated Technology Express")) {

  FUNC_0(VAR_5, VAR_4, "%sRAID%d volume",
   VAR_5->id[147]?"Bootable ":"",
   VAR_5->id[129]);
  if (VAR_5->id[129] != 1)
   FUNC_2("(%dK stripe)", VAR_5->id[146]);
  FUNC_2(".\n");
 }


 VAR_5->horkage &= ~VAR_1;

 VAR_5->horkage |= VAR_0;
}
