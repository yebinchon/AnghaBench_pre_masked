
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (unsigned char) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int
FUNC_8(unsigned char VAR_2, unsigned char VAR_3,
      unsigned char VAR_4)
{
 int VAR_5, VAR_6 = 3;
 unsigned long VAR_7;

 FUNC_6(&VAR_1, VAR_7);

 do {
  VAR_5 = 0;

  FUNC_4();



  FUNC_3((VAR_2 & 0xfe));



  if(!FUNC_2())
   VAR_5 = 1;



  FUNC_1();
  FUNC_3(VAR_3);



  if(!FUNC_2())
   VAR_5 |= 2;



  FUNC_3(VAR_4);



  if(!FUNC_2())
   VAR_5 |= 4;



  FUNC_5();
 } while(VAR_5 && VAR_6--);

 FUNC_0(VAR_0);

 FUNC_7(&VAR_1, VAR_7);

 return -VAR_5;
}
