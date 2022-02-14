
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_bus {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_6, int VAR_7,
     int VAR_8, u16 VAR_9)
{

 unsigned int VAR_10;


 VAR_5;

 VAR_10 = (VAR_1 |
     VAR_4 |
     ((VAR_8 << 21) & VAR_3) |
     ((VAR_7 << 16) & VAR_2) |
     (VAR_9 & VAR_0));
 FUNC_1(FUNC_0(0), VAR_10);

 return 0;
}
