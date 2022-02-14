
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wahc {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct wahc*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline s32 FUNC_2(struct wahc *VAR_1, u32 VAR_2, u32 VAR_3)
{
 s32 VAR_4;
 unsigned VAR_5 = 10;
 do {
  FUNC_1(50);
  VAR_4 = FUNC_0(VAR_1);
  if ((VAR_4 & VAR_2) == VAR_3)
   break;
  if (VAR_5-- == 0) {
   VAR_4 = -VAR_0;
   break;
  }
 } while (VAR_4 >= 0);
 return VAR_4;
}
