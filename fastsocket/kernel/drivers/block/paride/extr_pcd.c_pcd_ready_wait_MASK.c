
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcd_unit {int last_sense; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct pcd_unit*,char*,int ,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct pcd_unit *VAR_1, int VAR_2)
{
 char VAR_3[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
 int VAR_4, VAR_5;

 VAR_4 = 0;
 while (VAR_4 < VAR_2) {
  VAR_1->last_sense = 0;
  FUNC_1(VAR_1, VAR_3, 0, ((void*)0), FUNC_0("test unit ready"));
  VAR_5 = VAR_1->last_sense;
  if (!VAR_5)
   return 0;
  if (!(((VAR_5 & 0xffff) == 0x0402) || ((VAR_5 & 0xff) == 6)))
   return VAR_5;
  VAR_4++;
  FUNC_2(VAR_0);
 }
 return 0x000020;
}
