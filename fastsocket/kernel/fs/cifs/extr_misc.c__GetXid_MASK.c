
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

unsigned int
FUNC_3(void)
{
 unsigned int VAR_4;

 FUNC_1(&VAR_2);
 VAR_3++;


 if (VAR_3 > VAR_1)
  VAR_1 = VAR_3;
 if (VAR_3 > 65000)
  FUNC_0(1, "warning: more than 65000 requests active");
 VAR_4 = VAR_0++;
 FUNC_2(&VAR_2);
 return VAR_4;
}
