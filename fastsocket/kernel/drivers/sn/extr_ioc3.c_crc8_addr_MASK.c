
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned long VAR_0)
{
 int VAR_1;
 unsigned int VAR_2 = 0x00;

 for(VAR_1=0;VAR_1<8;VAR_1++)
  FUNC_0(&VAR_2, VAR_0>>(VAR_1<<3));
 return VAR_2;
}
