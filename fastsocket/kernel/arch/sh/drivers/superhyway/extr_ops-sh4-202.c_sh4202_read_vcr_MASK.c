
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct superhyway_vcr_info {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct superhyway_vcr_info*,int*,int) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_0, struct superhyway_vcr_info *VAR_1)
{
 u32 VAR_2, VAR_3;
 u64 VAR_4;
 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_0 + sizeof(u32));

 VAR_4 = ((u64)VAR_2 << 32) | VAR_3;
 FUNC_1(VAR_1, &VAR_4, sizeof(u64));

 return 0;
}
