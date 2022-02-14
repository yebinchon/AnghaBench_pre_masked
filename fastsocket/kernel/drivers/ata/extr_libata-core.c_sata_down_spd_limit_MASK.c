
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_link {int sata_spd; int sata_spd_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_link*,int ,char*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ata_link*,int ,int*) ;
 int FUNC_5 (struct ata_link*) ;
 int FUNC_6 (int) ;

int FUNC_7(struct ata_link *VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10;

 if (!FUNC_5(VAR_4))
  return -VAR_1;




 VAR_9 = FUNC_4(VAR_4, VAR_3, &VAR_6);
 if (VAR_9 == 0 && FUNC_1(VAR_6))
  VAR_7 = (VAR_6 >> 4) & 0xf;
 else
  VAR_7 = VAR_4->sata_spd;

 VAR_8 = VAR_4->sata_spd_limit;
 if (VAR_8 <= 1)
  return -VAR_0;


 VAR_10 = FUNC_3(VAR_8) - 1;
 VAR_8 &= ~(1 << VAR_10);




 if (VAR_7 > 1)
  VAR_8 &= (1 << (VAR_7 - 1)) - 1;
 else
  VAR_8 &= 1;


 if (!VAR_8)
  return -VAR_0;

 if (VAR_5) {
  if (VAR_8 & ((1 << VAR_5) - 1))
   VAR_8 &= (1 << VAR_5) - 1;
  else {
   VAR_10 = FUNC_2(VAR_8) - 1;
   VAR_8 = 1 << VAR_10;
  }
 }

 VAR_4->sata_spd_limit = VAR_8;

 FUNC_0(VAR_4, VAR_2, "limiting SATA link speed to %s\n",
   FUNC_6(FUNC_3(VAR_8)));

 return 0;
}
