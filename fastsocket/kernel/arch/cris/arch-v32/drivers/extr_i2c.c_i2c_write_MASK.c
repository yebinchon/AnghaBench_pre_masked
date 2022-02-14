
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned char*,void*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int
FUNC_8(unsigned char VAR_2, void *VAR_3, size_t VAR_4)
{
 int VAR_5, VAR_6 = 3;
 unsigned char VAR_7 = 0;
 unsigned char VAR_8;
 unsigned long VAR_9;

 FUNC_6(&VAR_1, VAR_9);

 do {
  VAR_5 = 0;

  FUNC_3();



  FUNC_2((VAR_2 & 0xfe));



  if (!FUNC_1())
   VAR_5 = 1;



  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
   FUNC_5(&VAR_8, VAR_3 + VAR_7, sizeof VAR_8);
   FUNC_2(VAR_8);



   if (!FUNC_1())
    VAR_5 |= 4;
  }



  FUNC_4();

 } while (VAR_5 && VAR_6--);

 FUNC_0(VAR_0);

 FUNC_7(&VAR_1, VAR_9);

 return -VAR_5;
}
