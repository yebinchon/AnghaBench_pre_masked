
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct memb_blks {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

u8 FUNC_2(struct memb_blks *VAR_0,void *VAR_1)
{
 u8 VAR_2;
 u32 *VAR_3;
 u32 VAR_4;

 FUNC_0(VAR_4);
 VAR_3 = VAR_1-sizeof(u32);
 VAR_2 = ++(*VAR_3);
 FUNC_1(VAR_4);
 return VAR_2;
}
