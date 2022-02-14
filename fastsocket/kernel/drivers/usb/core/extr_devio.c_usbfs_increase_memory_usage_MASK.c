
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,int *) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(unsigned VAR_4)
{
 unsigned VAR_5;





 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 == 0 || VAR_5 > (VAR_1 >> 20))
  VAR_5 = VAR_1;
 else
  VAR_5 <<= 20;

 FUNC_1(VAR_4, &VAR_3);
 if (FUNC_2(&VAR_3) <= VAR_5)
  return 0;
 FUNC_3(VAR_4, &VAR_3);
 return -VAR_0;
}
