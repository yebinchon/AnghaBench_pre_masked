
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixp2000_uengine_code {int cpu_model_bitmask; int cpu_min_revision; int cpu_max_revision; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct ixp2000_uengine_code *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 if (((VAR_2 >> 16) & 0x1f) != 0)
  return 0;

 switch ((VAR_2 >> 8) & 0xff) {
 default:
  return 0;
 }

 VAR_3 = VAR_2 & 0xff;
 if (VAR_3 < VAR_1->cpu_min_revision || VAR_3 > VAR_1->cpu_max_revision)
  return 0;

 return 1;
}
