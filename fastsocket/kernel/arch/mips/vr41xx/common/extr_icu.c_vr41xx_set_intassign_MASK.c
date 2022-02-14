
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (unsigned int,unsigned char) ;
 int FUNC_2 (unsigned int,unsigned char) ;

int FUNC_3(unsigned int VAR_7, unsigned char VAR_8)
{
 int VAR_9 = -VAR_1;

 if (FUNC_0() != VAR_0)
  return -VAR_1;

 if (VAR_8 > VAR_2)
  return -VAR_1;

 if (VAR_7 >= VAR_3 && VAR_7 <= VAR_4)
  VAR_9 = FUNC_1(VAR_7, VAR_8);
 else if (VAR_7 >= VAR_5 && VAR_7 <= VAR_6)
  VAR_9 = FUNC_2(VAR_7, VAR_8);

 return VAR_9;
}
