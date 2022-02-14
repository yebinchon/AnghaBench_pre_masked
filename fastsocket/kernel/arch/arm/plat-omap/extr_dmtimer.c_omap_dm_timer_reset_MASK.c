
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_dm_timer {int posted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 struct omap_dm_timer* VAR_4 ;
 int FUNC_1 (struct omap_dm_timer*,int ) ;
 int FUNC_2 (struct omap_dm_timer*,int ) ;
 int FUNC_3 (struct omap_dm_timer*) ;
 int FUNC_4 (struct omap_dm_timer*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct omap_dm_timer *VAR_5)
{
 u32 VAR_6;

 if (!FUNC_0() || VAR_5 != &VAR_4[0]) {
  FUNC_4(VAR_5, VAR_1, 0x06);
  FUNC_3(VAR_5);
 }
 FUNC_2(VAR_5, VAR_3);

 VAR_6 = FUNC_1(VAR_5, VAR_2);
 VAR_6 |= 0x02 << 3;
 VAR_6 |= 0x2 << 8;




 if (FUNC_0())
  VAR_6 |= 1 << 2;
 FUNC_4(VAR_5, VAR_2, VAR_6);


 FUNC_4(VAR_5, VAR_1,
   VAR_0);
 VAR_5->posted = 1;
}
