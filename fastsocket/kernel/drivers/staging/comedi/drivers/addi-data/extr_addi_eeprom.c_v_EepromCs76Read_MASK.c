
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (unsigned int,int,int ) ;

void FUNC_5(unsigned int VAR_2, unsigned short VAR_3, unsigned short *VAR_4)
{

        char VAR_5 = 0;

 unsigned int VAR_6 = 0;

 unsigned int VAR_7 = 0;







 FUNC_4(VAR_2, (VAR_1 << 4) | (VAR_3 / 2),
  VAR_0);







 VAR_6 = (((VAR_3 / 2) & 0x1) << 2) | 0x2;







 *VAR_4 = 0;







 for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
 {







  FUNC_3(VAR_2, VAR_6);







  VAR_7 = FUNC_0(VAR_2);







  FUNC_2(100);







  if (VAR_7 & 0x8)
  {







   *VAR_4 = (*VAR_4 << 1) | 0x1;

  }

  else
  {







   *VAR_4 = (*VAR_4 << 1);

  }

 }







 VAR_6 = 0x0;







 FUNC_1(VAR_6, VAR_2);







 FUNC_2(100);

}
