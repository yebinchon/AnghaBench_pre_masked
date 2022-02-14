
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum iomux_gp_func { ____Placeholder_iomux_gp_func } iomux_gp_func ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(enum iomux_gp_func VAR_2, bool VAR_3)
{
 u32 VAR_4;

 FUNC_2(&VAR_1);
 VAR_4 = FUNC_0(VAR_0);
 if (VAR_3)
  VAR_4 |= VAR_2;
 else
  VAR_4 &= ~VAR_2;

 FUNC_1(VAR_4, VAR_0);
 FUNC_3(&VAR_1);
}
