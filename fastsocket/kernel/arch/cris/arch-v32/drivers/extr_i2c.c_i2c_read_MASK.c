
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 unsigned char FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (unsigned char) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (void*,unsigned char*,int) ;
 int FUNC_8 (void*,int ,size_t) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

int
FUNC_11(unsigned char VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char VAR_4 = 0;
 unsigned char VAR_5 = 0;
 int VAR_6, VAR_7 = 3;
 unsigned long VAR_8;

 FUNC_9(&VAR_0, VAR_8);

 do {
  VAR_6 = 0;
  FUNC_8(VAR_2, 0, VAR_3);



  FUNC_5();



  FUNC_2((VAR_1 | 0x01));



  if (!FUNC_0())
   VAR_6 = 1;



  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
   VAR_4 = FUNC_1();
   FUNC_7(VAR_2 + VAR_5, &VAR_4, sizeof VAR_4);

   if (VAR_5 < (VAR_3 - 1))
    FUNC_3();
  }




  FUNC_4();



  FUNC_6();
 } while (VAR_6 && VAR_7--);

 FUNC_10(&VAR_0, VAR_8);

 return -VAR_6;
}
