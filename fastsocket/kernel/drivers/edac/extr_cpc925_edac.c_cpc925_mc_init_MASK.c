
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mem_ctl_info {struct cpc925_mc_pdata* pvt_info; } ;
struct cpc925_mc_pdata {scalar_t__ vbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_4)
{
 struct cpc925_mc_pdata *VAR_5 = VAR_4->pvt_info;
 u32 VAR_6;
 u32 VAR_7;


 VAR_6 = FUNC_0(VAR_5->vbase + VAR_2);
 if ((VAR_6 & VAR_0) == 0) {
  VAR_6 |= VAR_0;
  FUNC_1(VAR_6, VAR_5->vbase + VAR_2);
 }


 VAR_7 = FUNC_0(VAR_5->vbase + VAR_3);
 if ((VAR_7 & VAR_1) == 0) {
  VAR_7 |= VAR_1;
  FUNC_1(VAR_7, VAR_5->vbase + VAR_3);
 }
}
