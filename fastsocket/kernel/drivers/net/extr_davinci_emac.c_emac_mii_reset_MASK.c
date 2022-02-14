
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_bus {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7 = VAR_3;

 if (VAR_4 & VAR_7)
  VAR_6 = ((VAR_7 / VAR_4) - 1);
 else
  VAR_6 = 0xFF;

 VAR_6 &= VAR_1;


 FUNC_0(VAR_0, (VAR_6 | VAR_2));

 return 0;

}
