
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
struct niu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_4, int VAR_5, int VAR_6)
{
 unsigned long VAR_7, VAR_8;
 u64 VAR_9;

 if (VAR_5 < 0 || VAR_5 > VAR_1)
  return -VAR_0;

 if (VAR_5 < 64) {
  VAR_7 = FUNC_0(VAR_5);
  VAR_8 = VAR_2;
 } else {
  VAR_7 = FUNC_1(VAR_5 - 64);
  VAR_8 = VAR_3;
 }

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_6)
  VAR_9 &= ~VAR_8;
 else
  VAR_9 |= VAR_8;
 FUNC_3(VAR_7, VAR_9);

 return 0;
}
