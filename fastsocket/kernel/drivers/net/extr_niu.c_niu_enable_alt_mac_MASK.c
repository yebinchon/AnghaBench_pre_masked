
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int flags; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct niu*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_4, int VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 u64 VAR_8, VAR_9;

 if (VAR_5 >= FUNC_0(VAR_4))
  return -VAR_1;

 if (VAR_4->flags & VAR_2) {
  VAR_7 = VAR_3;
  VAR_9 = 1 << VAR_5;
 } else {
  VAR_7 = VAR_0;
  VAR_9 = 1 << (VAR_5 + 1);
 }

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_6)
  VAR_8 |= VAR_9;
 else
  VAR_8 &= ~VAR_9;
 FUNC_2(VAR_7, VAR_8);

 return 0;
}
