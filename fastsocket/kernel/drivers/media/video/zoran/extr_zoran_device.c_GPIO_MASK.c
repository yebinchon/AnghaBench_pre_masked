
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zoran {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;

void
FUNC_3 (struct zoran *VAR_1,
      int VAR_2,
      unsigned int VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;




 VAR_5 = (1 << (24 + VAR_2)) & 0xff000000;
 VAR_4 = FUNC_0(VAR_0) & ~VAR_5;
 if (VAR_3) {
  VAR_4 |= VAR_5;
 }
 FUNC_1(VAR_4, VAR_0);
 FUNC_2(1);
}
