
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef unsigned long u64 ;
typedef unsigned long u16 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ,unsigned long*,unsigned long const,unsigned long,unsigned long const,unsigned long const,int ,int ,int ,int ,int ) ;
 int FUNC_1 (void*) ;

u64 FUNC_2(const u64 VAR_2, const u8 VAR_3,
     const u64 VAR_4, const u64 VAR_5,
     void *VAR_6, u64 *VAR_7, u64 *VAR_8,
     u16 *VAR_9, u16 *VAR_10)
{
 u64 VAR_11;
 unsigned long VAR_12[VAR_1];

 VAR_11 = FUNC_0(VAR_0,
     VAR_12,
     VAR_2,
     (u64) VAR_3,
     VAR_4,
     VAR_5,
     FUNC_1(VAR_6),
     0, 0, 0, 0);

 *VAR_7 = VAR_12[0];
 *VAR_9 = VAR_12[3];
 *VAR_10 = VAR_12[4];
 *VAR_8 = VAR_12[5];

 return VAR_11;
}
