
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {scalar_t__ drive; int name; } ;


 int FUNC_0 (char*,int*,int) ;
 int FUNC_1 (struct pcd_unit*,char*,int,int*,char*) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_2 (char*,int ,char*,...) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct pcd_unit *VAR_3, char *VAR_4)
{
 int VAR_5, VAR_6;
 char VAR_7[12] = { 0x12, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0 };

 VAR_0 = -1;

 VAR_6 = FUNC_1(VAR_3, VAR_7, 36, VAR_1, "identify");

 if (VAR_6)
  return -1;
 if ((VAR_1[0] & 0x1f) != 5) {
  if (VAR_2)
   FUNC_2("%s: %s is not a CD-ROM\n",
          VAR_3->name, VAR_3->drive ? "Slave" : "Master");
  return -1;
 }
 FUNC_0(VAR_4, VAR_1 + 16, 16);
 VAR_4[16] = 0;
 VAR_5 = 16;
 while ((VAR_5 >= 0) && (VAR_4[VAR_5] <= 0x20)) {
  VAR_4[VAR_5] = 0;
  VAR_5--;
 }

 FUNC_2("%s: %s: %s\n", VAR_3->name, VAR_3->drive ? "Slave" : "Master", VAR_4);

 return 0;
}
