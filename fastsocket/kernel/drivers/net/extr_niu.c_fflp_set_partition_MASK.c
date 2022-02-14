
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct niu {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_7, u64 VAR_8,
         u64 VAR_9, u64 VAR_10, int VAR_11)
{
 unsigned long VAR_12;
 u64 VAR_13;

 if (VAR_8 >= VAR_1 ||
     (VAR_9 & ~(u64)0x1f) != 0 ||
     (VAR_10 & ~(u64)0x1f) != 0)
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_8);

 VAR_13 = FUNC_1(VAR_12);
 VAR_13 &= ~(VAR_4 | VAR_5 | VAR_2);
 VAR_13 |= (VAR_9 << VAR_6);
 VAR_13 |= (VAR_10 << VAR_3);
 if (VAR_11)
  VAR_13 |= VAR_4;
 FUNC_2(VAR_12, VAR_13);

 return 0;
}
