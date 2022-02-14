
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ips_driver {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct ips_driver *VAR_1, u32 *VAR_2, int VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;





 VAR_4 = FUNC_0(VAR_0);


 VAR_5 = (((VAR_4 - *VAR_2) * 1000) / VAR_3);
 VAR_5 = (VAR_5 * 1000) / 65535;
 *VAR_2 = VAR_4;

 return 0;
}
