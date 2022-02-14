
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,unsigned int) ;

void FUNC_3(unsigned int VAR_0, unsigned int VAR_1,
 unsigned char VAR_2)
{

 char VAR_3 = 0;

 unsigned int VAR_4 = 0;







 VAR_4 = 0x2;







 FUNC_0(VAR_4, VAR_0);







 FUNC_1(100);







 for (VAR_3 = (VAR_2 - 1); VAR_3 >= 0; VAR_3--)
 {







  if (VAR_1 & (1 << VAR_3))
  {







   VAR_4 = VAR_4 | 0x4;

  }

  else
  {







   VAR_4 = VAR_4 & 0x3;

  }







  FUNC_0(VAR_4, VAR_0);







  FUNC_1(100);







  FUNC_2(VAR_0, VAR_4);

 }

}
