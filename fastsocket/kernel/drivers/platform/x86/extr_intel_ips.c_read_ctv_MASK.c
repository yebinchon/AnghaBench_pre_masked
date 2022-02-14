
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ips_driver {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u16 FUNC_1(struct ips_driver *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4 ? VAR_2 : VAR_1;
 u16 VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 if (!(VAR_6 & VAR_0))
  VAR_6 = (VAR_6) >> 6;
 else
  VAR_6 = 0;

 return VAR_6;
}
