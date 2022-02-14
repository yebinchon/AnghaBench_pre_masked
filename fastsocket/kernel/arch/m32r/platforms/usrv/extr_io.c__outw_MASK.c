
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int w ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,unsigned long,unsigned short*,int,int,int ) ;

void FUNC_2(unsigned short VAR_2, unsigned long VAR_3)
{
 if (VAR_3 >= VAR_1 && VAR_3 <= VAR_0)
  FUNC_1(0, VAR_3, &VAR_2, sizeof(VAR_2), 1, 0);
 else
  *(volatile unsigned short *)FUNC_0(VAR_3) = VAR_2;
}
