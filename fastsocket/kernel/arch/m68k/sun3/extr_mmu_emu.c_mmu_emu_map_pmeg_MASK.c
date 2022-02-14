
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int FUNC_0 (char*,unsigned char,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,unsigned char) ;

static inline void FUNC_4 (int VAR_10, int VAR_11)
{
 static unsigned char VAR_12 = 128;
 int VAR_13;


 VAR_11 &= ~VAR_4;


 while (VAR_7[VAR_12] == 2)
  ++VAR_12;
 if (VAR_7[VAR_12] == 1) {
  FUNC_1(VAR_8[VAR_12]);
  FUNC_3 (VAR_9[VAR_12], VAR_2);
  FUNC_1(VAR_10);
 }



 if(VAR_11 >= VAR_1) {

  unsigned char VAR_14;

  for(VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
   FUNC_1(VAR_14);
   FUNC_3 (VAR_11, VAR_12);
  }
  FUNC_1(VAR_10);
  VAR_7[VAR_12] = 2;
  VAR_8[VAR_12] = 0;

 }
 else {
  VAR_7[VAR_12] = 1;
  VAR_8[VAR_12] = VAR_10;
  FUNC_3 (VAR_11, VAR_12);

 }
 VAR_9[VAR_12] = VAR_11;


 for (VAR_13=0; VAR_13<VAR_5; VAR_13+=VAR_6)
  FUNC_2 (VAR_11 + VAR_13, VAR_3);


 ++VAR_12;
}
