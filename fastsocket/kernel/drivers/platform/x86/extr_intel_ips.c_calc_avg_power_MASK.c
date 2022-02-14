
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ips_driver {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static u32 FUNC_1(struct ips_driver *VAR_1, u32 *VAR_2)
{
 u64 VAR_3 = 0;
 u32 VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_3 += VAR_2[VAR_5];

 FUNC_0(VAR_3, VAR_0);
 VAR_4 = (u32)VAR_3;

 return VAR_4;
}
