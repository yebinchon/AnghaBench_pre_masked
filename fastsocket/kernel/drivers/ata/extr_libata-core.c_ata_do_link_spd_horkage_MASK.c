
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_link {int sata_spd_limit; int sata_spd; } ;
struct ata_device {int horkage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ata_link* FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct ata_device*,int ,char*,int ) ;
 int FUNC_2 (struct ata_link*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ata_device *VAR_3)
{
 struct ata_link *VAR_4 = FUNC_0(VAR_3);
 u32 VAR_5, VAR_6;

 if (!FUNC_2(VAR_4))
  return 0;

 if (VAR_3->horkage & VAR_0)
  VAR_5 = 1;
 else
  return 0;

 VAR_6 = (1 << VAR_5) - 1;


 if (VAR_4->sata_spd_limit <= VAR_6)
  return 0;

 VAR_4->sata_spd_limit = VAR_6;





 if (VAR_4->sata_spd > VAR_5) {
  FUNC_1(VAR_3, VAR_2,
          "applying link speed limit horkage to %s\n",
          FUNC_3(VAR_5));
  return -VAR_1;
 }
 return 0;
}
