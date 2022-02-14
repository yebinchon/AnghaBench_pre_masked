
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct zoran {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 scalar_t__ FUNC_2 (struct zoran*) ;

int
FUNC_3 (struct zoran *VAR_2,
    unsigned int VAR_3,
    unsigned int VAR_4)
{
 u32 VAR_5;

 VAR_5 = VAR_1 | ((VAR_3 & 7) << 20) | ((VAR_4 & 7) << 16);
 FUNC_1(VAR_5, VAR_0);
 if (FUNC_2(VAR_2) < 0) {
  return -1;
 }

 return FUNC_0(VAR_0) & 0xFF;
}
