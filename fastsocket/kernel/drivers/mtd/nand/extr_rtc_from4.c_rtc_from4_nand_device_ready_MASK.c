
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;


 unsigned short VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(struct mtd_info *VAR_3)
{
 unsigned short VAR_4;

 VAR_4 = *((volatile unsigned short *)(VAR_2 + VAR_1));

 return (VAR_4 & VAR_0);

}
