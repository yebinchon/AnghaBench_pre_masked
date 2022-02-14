
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u16 ;
struct ips_driver {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static u16 FUNC_1(struct ips_driver *VAR_1, u16 *VAR_2)
{
 u64 VAR_3 = 0;
 int VAR_4;
 u16 VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3 += (u64)(VAR_2[VAR_4] * 100);

 FUNC_0(VAR_3, VAR_0);

 VAR_5 = (u16)VAR_3;

 return VAR_5;
}
