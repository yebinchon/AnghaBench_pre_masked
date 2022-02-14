
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ips_driver {int pta_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u16 FUNC_1(struct ips_driver *VAR_5)
{
 u16 VAR_6, VAR_7, VAR_8;

 VAR_7 = (VAR_5->pta_val & VAR_1) >> VAR_2;
 VAR_8 = VAR_5->pta_val & VAR_0;

 VAR_6 = FUNC_0(VAR_4) & VAR_3;

 return VAR_6;
}
