
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct zoran {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (struct zoran*) ;

int
FUNC_2 (struct zoran *VAR_3,
     unsigned int VAR_4,
     unsigned int VAR_5,
     unsigned int VAR_6)
{
 u32 VAR_7;

 VAR_7 =
     VAR_1 | VAR_2 | ((VAR_4 & 7) << 20) |
     ((VAR_5 & 7) << 16) | (VAR_6 & 0xFF);
 FUNC_0(VAR_7, VAR_0);

 return FUNC_1(VAR_3);
}
