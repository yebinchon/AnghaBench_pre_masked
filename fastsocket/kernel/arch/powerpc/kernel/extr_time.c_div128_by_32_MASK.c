
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct div_result {int result_high; int result_low; } ;


 scalar_t__ FUNC_0 (int,unsigned int) ;

void FUNC_1(u64 VAR_0, u64 VAR_1,
    unsigned VAR_2, struct div_result *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11;
 u64 VAR_12, VAR_13, VAR_14;

 VAR_4 = VAR_0 >> 32;
 VAR_5 = VAR_0 & 0xffffffff;
 VAR_6 = VAR_1 >> 32;
 VAR_7 = VAR_1 & 0xffffffff;

 VAR_8 = VAR_4 / VAR_2;
 VAR_12 = ((u64)(VAR_4 - (VAR_8 * VAR_2)) << 32) + VAR_5;

 VAR_13 = ((u64) FUNC_0(VAR_12, VAR_2) << 32) + VAR_6;
 VAR_9 = VAR_12;

 VAR_14 = ((u64) FUNC_0(VAR_13, VAR_2) << 32) + VAR_7;
 VAR_10 = VAR_13;

 FUNC_0(VAR_14, VAR_2);
 VAR_11 = VAR_14;

 VAR_3->result_high = ((u64)VAR_8 << 32) + VAR_9;
 VAR_3->result_low = ((u64)VAR_10 << 32) + VAR_11;

}
