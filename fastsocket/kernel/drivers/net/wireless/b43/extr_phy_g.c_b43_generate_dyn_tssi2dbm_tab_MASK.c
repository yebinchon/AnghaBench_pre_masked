
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b43_wldev {int wl; } ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;

u8 *FUNC_4(struct b43_wldev *VAR_1,
      s16 VAR_2, s16 VAR_3, s16 VAR_4)
{
 unsigned int VAR_5;
 u8 *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(64, VAR_0);
 if (!VAR_6) {
  FUNC_1(VAR_1->wl, "Could not allocate memory "
         "for tssi2dbm table\n");
  return ((void*)0);
 }
 for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
  VAR_7 = FUNC_0(VAR_6, VAR_5, VAR_2, VAR_3, VAR_4);
  if (VAR_7) {
   FUNC_1(VAR_1->wl, "Could not generate "
          "tssi2dBm table\n");
   FUNC_2(VAR_6);
   return ((void*)0);
  }
 }

 return VAR_6;
}
