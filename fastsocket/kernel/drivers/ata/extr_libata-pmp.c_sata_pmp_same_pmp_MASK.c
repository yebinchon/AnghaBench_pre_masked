
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct ata_device {int * gscr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_device*,int ,char*,int,int) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4(struct ata_device *VAR_1, const u32 *VAR_2)
{
 const u32 *VAR_3 = VAR_1->gscr;
 u16 VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = FUNC_3(VAR_2);
 VAR_6 = FUNC_1(VAR_3);
 VAR_7 = FUNC_1(VAR_2);
 VAR_8 = FUNC_2(VAR_3);
 VAR_9 = FUNC_2(VAR_2);

 if (VAR_4 != VAR_5) {
  FUNC_0(VAR_1, VAR_0, "Port Multiplier "
          "vendor mismatch '0x%x' != '0x%x'\n",
          VAR_4, VAR_5);
  return 0;
 }

 if (VAR_6 != VAR_7) {
  FUNC_0(VAR_1, VAR_0, "Port Multiplier "
          "device ID mismatch '0x%x' != '0x%x'\n",
          VAR_6, VAR_7);
  return 0;
 }

 if (VAR_8 != VAR_9) {
  FUNC_0(VAR_1, VAR_0, "Port Multiplier "
          "nr_ports mismatch '0x%x' != '0x%x'\n",
          VAR_8, VAR_9);
  return 0;
 }

 return 1;
}
