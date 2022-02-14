
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef scalar_t__ u32 ;
struct ehea_mr {unsigned long handle; scalar_t__ lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long FUNC_0 (int ,unsigned long*,unsigned long long const,unsigned long long const,unsigned long long const,unsigned long long,scalar_t__ const,int ,int ,int ,int ) ;

u64 FUNC_1(const u64 VAR_2, const u64 VAR_3,
   const u64 VAR_4, const u32 VAR_5, const u32 VAR_6,
   struct ehea_mr *VAR_7)
{
 u64 VAR_8;
 unsigned long VAR_9[VAR_1];

 VAR_8 = FUNC_0(VAR_0,
     VAR_9,
     VAR_2 ,
     VAR_3,
     VAR_4,
     (((u64)VAR_5) << 32ULL),
     VAR_6,
     0, 0, 0, 0);

 VAR_7->handle = VAR_9[0];
 VAR_7->lkey = (u32)VAR_9[2];

 return VAR_8;
}
