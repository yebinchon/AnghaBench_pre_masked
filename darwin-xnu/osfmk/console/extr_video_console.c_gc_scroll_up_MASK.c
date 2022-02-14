
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_2__ {int (* scroll_up ) (int,unsigned int,unsigned int) ;int (* paint_char ) (unsigned int,unsigned int,char,scalar_t__,char,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 char* VAR_4 ;
 unsigned char* VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,unsigned int,unsigned int,unsigned int,int ) ;
 unsigned char VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned int,unsigned int,char,scalar_t__,char,scalar_t__) ;
 int FUNC_4 (unsigned int,unsigned int,char,scalar_t__,char,scalar_t__) ;
 int FUNC_5 (unsigned int,unsigned int,char,scalar_t__,char,scalar_t__) ;
 int FUNC_6 (unsigned int,unsigned int,char,scalar_t__,char,scalar_t__) ;
 int FUNC_7 (int,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_8(int VAR_11, unsigned int VAR_12, unsigned int VAR_13)
{
 if (!VAR_8) return;

 if ( VAR_13 <= VAR_7 )
 {
  unsigned char VAR_14 = VAR_9;
  uint32_t VAR_15, VAR_16;
  uint32_t VAR_17, VAR_18;

  VAR_18 = VAR_11 * VAR_6;

  for ( VAR_16 = VAR_12 ; VAR_16 < VAR_13 - VAR_11 ; VAR_16++ )
  {
   VAR_17 = VAR_16 * VAR_6;

   for ( VAR_15 = 0 ; VAR_15 < VAR_6 ; VAR_17++, VAR_15++ )
   {
    if ( VAR_3[VAR_17] != VAR_3[VAR_17 + VAR_18] ||
         VAR_4[VAR_17] != VAR_4[VAR_17 + VAR_18] ||
         VAR_5[VAR_17] != VAR_5[VAR_17 + VAR_18] )
    {
     if ( VAR_9 != VAR_5[VAR_17 + VAR_18] )
     {
      FUNC_2(FUNC_0(VAR_5[VAR_17 + VAR_18], VAR_2 ), VAR_2 );
      FUNC_2(FUNC_0(VAR_5[VAR_17 + VAR_18], VAR_1), VAR_1);
     }

     if ( VAR_5[VAR_17] != VAR_5[VAR_17 + VAR_18] )
     {
      VAR_10.paint_char( VAR_15,
                                              VAR_16,
                                              VAR_4[VAR_17 + VAR_18],
                                              VAR_3[VAR_17 + VAR_18],
                                              0,
                                              0 );
     }
     else
     {
      VAR_10.paint_char( VAR_15,
                                              VAR_16,
                                              VAR_4[VAR_17 + VAR_18],
                                              VAR_3[VAR_17 + VAR_18],
                                              VAR_4[VAR_17],
                                              VAR_3[VAR_17] );
     }

     VAR_3[VAR_17] = VAR_3[VAR_17 + VAR_18];
     VAR_4[VAR_17] = VAR_4[VAR_17 + VAR_18];
     VAR_5[VAR_17] = VAR_5[VAR_17 + VAR_18];
    }
   }
  }

  if ( VAR_14 != VAR_9 )
  {
   FUNC_2(FUNC_0(VAR_14, VAR_2 ), VAR_2 );
   FUNC_2(FUNC_0(VAR_14, VAR_1), VAR_1);
  }



  for ( VAR_16 = VAR_13 - VAR_11 ; VAR_16 < VAR_13 ; VAR_16++ )
  {
   VAR_17 = VAR_16 * VAR_6;

   for ( VAR_15 = 0 ; VAR_15 < VAR_6 ; VAR_17++, VAR_15++ )
   {
    if ( VAR_3[VAR_17] != VAR_0 ||
         VAR_4[VAR_17] != ' ' ||
         VAR_5[VAR_17] != VAR_9 )
    {
     if ( VAR_5[VAR_17] != VAR_9 )
     {
      VAR_10.paint_char( VAR_15,
                                              VAR_16,
                                              ' ',
                                              VAR_0,
                                              0,
                                              0 );
     }
     else
     {
      VAR_10.paint_char( VAR_15,
                                              VAR_16,
                                              ' ',
                                              VAR_0,
                                              VAR_4[VAR_17],
                                              VAR_3[VAR_17] );
     }

     VAR_3[VAR_17] = VAR_0;
     VAR_4[VAR_17] = ' ';
     VAR_5[VAR_17] = VAR_9;
    }
   }
  }
 }
 else
 {
  VAR_10.scroll_up(VAR_11, VAR_12, VAR_13);



  FUNC_1(0, VAR_13 - VAR_11, VAR_12, VAR_13, 0);
 }
}
