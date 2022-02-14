
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_link {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_link*,int ,char*,int,unsigned int) ;
 unsigned int FUNC_1 (struct ata_link*,int,int ) ;

int FUNC_2(struct ata_link *VAR_4, int VAR_5, u32 VAR_6)
{
 unsigned int VAR_7;

 if (VAR_5 > VAR_3)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_4, VAR_2, "failed to write SCR %d "
    "(Emask=0x%x)\n", VAR_5, VAR_7);
  return -VAR_1;
 }
 return 0;
}
