
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int last_sense; int changed; int name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pcd_unit*,char*,int,char*) ;
 int FUNC_2 (struct pcd_unit*,char*,char*) ;
 int FUNC_3 (char*,int ,char*,char,char,char) ;

__attribute__((used)) static void FUNC_4(struct pcd_unit *VAR_0, char *VAR_1)
{
 char VAR_2[12] = { 0x03, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0 };
 char VAR_3[16];
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_0, VAR_2, 16, "Request sense");
 FUNC_0(1);
 if (!VAR_4)
  FUNC_2(VAR_0, VAR_3, "Request sense");

 VAR_0->last_sense = -1;
 VAR_5 = 2;
 if (!VAR_4) {
  if (VAR_1)
   FUNC_3("%s: %s: Sense key: %x, ASC: %x, ASQ: %x\n",
          VAR_0->name, VAR_1, VAR_3[2] & 0xf, VAR_3[12], VAR_3[13]);
  VAR_5 = VAR_3[2] & 0xf;
  VAR_0->last_sense =
      VAR_5 | ((VAR_3[12] & 0xff) << 8) | ((VAR_3[13] & 0xff) << 16);
 }
 if ((VAR_5 == 2) || (VAR_5 == 6))
  VAR_0->changed = 1;
}
