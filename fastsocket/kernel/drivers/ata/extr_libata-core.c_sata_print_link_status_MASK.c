
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_link {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_link*,int ,char*,int,int,...) ;
 scalar_t__ FUNC_1 (struct ata_link*) ;
 scalar_t__ FUNC_2 (struct ata_link*,int ,int*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ata_link *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;

 if (FUNC_2(VAR_3, VAR_2, &VAR_4))
  return;
 FUNC_2(VAR_3, VAR_1, &VAR_5);

 if (FUNC_1(VAR_3)) {
  VAR_6 = (VAR_4 >> 4) & 0xf;
  FUNC_0(VAR_3, VAR_0,
    "SATA link up %s (SStatus %X SControl %X)\n",
    FUNC_3(VAR_6), VAR_4, VAR_5);
 } else {
  FUNC_0(VAR_3, VAR_0,
    "SATA link down (SStatus %X SControl %X)\n",
    VAR_4, VAR_5);
 }
}
