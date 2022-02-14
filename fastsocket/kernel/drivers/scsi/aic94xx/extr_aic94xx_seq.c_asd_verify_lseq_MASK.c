
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u32 ;
struct asd_ha_struct {int pcidev; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int,int,int) ;
 int FUNC_4 (struct asd_ha_struct*,scalar_t__) ;
 int FUNC_5 (struct asd_ha_struct*,int ,int) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct asd_ha_struct *VAR_2, const u8 *VAR_3,
      u32 VAR_4, int VAR_5)
{

 int VAR_6 = (VAR_4 + 4096 - 1) / 4096;
 u32 VAR_7;
 const u32 *VAR_8 = (u32 *) VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  u32 VAR_9;

  FUNC_5(VAR_2, FUNC_1(VAR_5),
        VAR_7 << VAR_1);
  for (VAR_9 = 0; VAR_4 > 0 && VAR_9 < 4096;
       VAR_9 += 4, VAR_8++, VAR_4-=4) {

   u32 VAR_10 = FUNC_4(VAR_2, FUNC_2(VAR_5)+VAR_9);

   if (FUNC_6(*VAR_8) != VAR_10) {
    FUNC_3("%s: LSEQ%d verify failed "
        "page:%d, offs:%d\n",
        FUNC_7(VAR_2->pcidev),
        VAR_5, VAR_7, VAR_9);
    return -1;
   }
  }
 }
 FUNC_0("LSEQ%d verified %d bytes, passed\n", VAR_5,
      (int)((u8 *)VAR_8-VAR_3));
 return 0;
}
