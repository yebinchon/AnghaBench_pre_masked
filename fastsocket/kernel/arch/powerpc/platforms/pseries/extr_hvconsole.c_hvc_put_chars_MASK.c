
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 long FUNC_0 (int ,int ,int,unsigned long,unsigned long) ;

int FUNC_1(uint32_t VAR_6, const char *VAR_7, int VAR_8)
{
 unsigned long *VAR_9 = (unsigned long *) VAR_7;
 long VAR_10;



 if (VAR_8 > VAR_5)
  VAR_8 = VAR_5;

 VAR_10 = FUNC_0(VAR_3, VAR_6, VAR_8, VAR_9[0],
     VAR_9[1]);
 if (VAR_10 == VAR_4)
  return VAR_8;
 if (VAR_10 == VAR_2)
  return -VAR_0;
 return -VAR_1;
}
