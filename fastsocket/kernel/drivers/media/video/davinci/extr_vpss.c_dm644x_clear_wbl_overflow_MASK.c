
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum vpss_wbl_sel { ____Placeholder_vpss_wbl_sel } vpss_wbl_sel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(enum vpss_wbl_sel VAR_3)
{
 u32 VAR_4 = 1, VAR_5;

 if (VAR_3 < VAR_1 ||
     VAR_3 > VAR_2)
  return -1;


 VAR_4 = ~(VAR_4 << VAR_3);
 VAR_5 = FUNC_0(VAR_0) & VAR_4;
 FUNC_1(VAR_5, VAR_0);
 return 0;
}
