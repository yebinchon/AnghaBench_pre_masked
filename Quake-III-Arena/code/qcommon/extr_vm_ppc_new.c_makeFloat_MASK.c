
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (char*,unsigned int,int ,int ,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 unsigned int** VAR_8 ;
 int* VAR_9 ;

__attribute__((used)) static void FUNC_2(int VAR_10)
{

 if(VAR_9[VAR_10] == 1)
 {
  unsigned VAR_11;
  unsigned VAR_12, VAR_13, VAR_14, VAR_15;

  if(VAR_8[VAR_10])
  {

   VAR_11 = *VAR_8[VAR_10];

   if((VAR_11 & 0xfc000000) == VAR_2)
   {



    VAR_12 = (VAR_11 >> 21) & 31;
    VAR_13 = (VAR_11 >> 16) & 31;
    VAR_15 = VAR_11 & 0xffff;




    VAR_12 = (VAR_12 - VAR_7[0]) + VAR_6[0];
    VAR_11 = VAR_0 | ( VAR_12 << 21 ) | ( VAR_13 << 16 ) | VAR_15 ;


   }
   else
   {



    VAR_12 = (VAR_11 >> 21) & 31;
    VAR_13 = (VAR_11 >> 16) & 31;
    VAR_14 = (VAR_11 >> 11) & 31;



    VAR_12 = (VAR_12 - VAR_7[0]) + VAR_6[0];
    VAR_11 = VAR_1 | ( VAR_12 << 21 ) | ( VAR_13 << 16 ) | ( VAR_14 << 11 ) ;


   }
   *VAR_8[VAR_10] = VAR_11;
   VAR_8[VAR_10] = 0;
  }
  else
  {




   FUNC_1( "stw", VAR_4, VAR_7[VAR_10], VAR_5, VAR_10*4+4);


   FUNC_0( "ori", VAR_3, 0, 0, 0 );
   FUNC_0( "ori", VAR_3, 0, 0, 0 );
   FUNC_0( "ori", VAR_3, 0, 0, 0 );
   FUNC_0( "ori", VAR_3, 0, 0, 0 );
   FUNC_1( "lfs", VAR_0, VAR_6[VAR_10], VAR_5, VAR_10*4+4);
  }
  VAR_9[VAR_10] = 2;
 }
}
