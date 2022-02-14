
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_dm_timer {int fclk; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int * VAR_1 ;

int FUNC_4(struct omap_dm_timer *VAR_2, int VAR_3)
{
 int VAR_4 = -VAR_0;

 if (VAR_3 < 0 || VAR_3 >= 3)
  return -VAR_0;

 FUNC_1(VAR_2->fclk);
 VAR_4 = FUNC_3(VAR_2->fclk, VAR_1[VAR_3]);
 FUNC_2(VAR_2->fclk);





 FUNC_0(150000);

 return VAR_4;
}
