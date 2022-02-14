
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_4__ {int (* scroll_down ) (int,unsigned int,unsigned int) ;int (* paint_char ) (unsigned int,unsigned int,char,scalar_t__,char,scalar_t__) ;} ;
struct TYPE_3__ {scalar_t__ v_columns; } ;


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
 int FUNC_1 (scalar_t__,unsigned int,unsigned int,unsigned int,int) ;
 unsigned char VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned int,unsigned int,char,scalar_t__,char,scalar_t__) ;
 int FUNC_4 (unsigned int,unsigned int,char,scalar_t__,char,scalar_t__) ;
 int FUNC_5 (unsigned int,unsigned int,char,scalar_t__,char,scalar_t__) ;
 int FUNC_6 (unsigned int,unsigned int,char,scalar_t__,char,scalar_t__) ;
 int FUNC_7 (int,unsigned int,unsigned int) ;
 TYPE_1__ VAR_11 ;

__attribute__((used)) static void
FUNC_8(int VAR_12, unsigned int VAR_13, unsigned int VAR_14)
{
 if (!VAR_8) return;

 if ( VAR_14 <= VAR_7 )
 {
  unsigned char VAR_15 = VAR_9;
  uint32_t VAR_16, VAR_17;
  uint32_t VAR_18, VAR_19;

  VAR_19 = VAR_12 * VAR_6;

  for ( VAR_17 = VAR_14 - 1 ; VAR_17 >= VAR_13 + VAR_12 ; VAR_17-- )
  {
   VAR_18 = VAR_17 * VAR_6;

   for ( VAR_16 = 0 ; VAR_16 < VAR_6 ; VAR_18++, VAR_16++ )
   {
    if ( VAR_3[VAR_18] != VAR_3[VAR_18 - VAR_19] ||
         VAR_4[VAR_18] != VAR_4[VAR_18 - VAR_19] ||
         VAR_5[VAR_18] != VAR_5[VAR_18 - VAR_19] )
    {
     if ( VAR_9 != VAR_5[VAR_18 - VAR_19] )
     {
      FUNC_2(FUNC_0(VAR_5[VAR_18 - VAR_19], VAR_2 ), VAR_2 );
      FUNC_2(FUNC_0(VAR_5[VAR_18 - VAR_19], VAR_1), VAR_1);
     }

     if ( VAR_5[VAR_18] != VAR_5[VAR_18 - VAR_19] )
     {
      VAR_10.paint_char( VAR_16,
                                              VAR_17,
                                              VAR_4[VAR_18 - VAR_19],
                                              VAR_3[VAR_18 - VAR_19],
                                              0,
                                              0 );
     }
     else
     {
      VAR_10.paint_char( VAR_16,
                                              VAR_17,
                                              VAR_4[VAR_18 - VAR_19],
                                              VAR_3[VAR_18 - VAR_19],
                                              VAR_4[VAR_18],
                                              VAR_3[VAR_18] );
     }

     VAR_3[VAR_18] = VAR_3[VAR_18 - VAR_19];
     VAR_4[VAR_18] = VAR_4[VAR_18 - VAR_19];
     VAR_5[VAR_18] = VAR_5[VAR_18 - VAR_19];
    }
   }
  }

  if ( VAR_15 != VAR_9 )
  {
   FUNC_2(FUNC_0(VAR_15, VAR_2 ), VAR_2 );
   FUNC_2(FUNC_0(VAR_15, VAR_1), VAR_1);
  }



  for ( VAR_17 = VAR_13 ; VAR_17 < VAR_13 + VAR_12 ; VAR_17++ )
  {
   VAR_18 = VAR_17 * VAR_6;

   for ( VAR_16 = 0 ; VAR_16 < VAR_6 ; VAR_18++, VAR_16++ )
   {
    if ( VAR_3[VAR_18] != VAR_0 ||
         VAR_4[VAR_18] != ' ' ||
         VAR_5[VAR_18] != VAR_9 )
    {
     if ( VAR_5[VAR_18] != VAR_9 )
     {
      VAR_10.paint_char( VAR_16,
                                              VAR_17,
                                              ' ',
                                              VAR_0,
                                              0,
                                              0 );
     }
     else
     {
      VAR_10.paint_char( VAR_16,
                                              VAR_17,
                                              ' ',
                                              VAR_0,
                                              VAR_4[VAR_18],
                                              VAR_3[VAR_18] );
     }

     VAR_3[VAR_18] = VAR_0;
     VAR_4[VAR_18] = ' ';
     VAR_5[VAR_18] = VAR_9;
    }
   }
  }
 }
 else
 {
  VAR_10.scroll_down(VAR_12, VAR_13, VAR_14);



  FUNC_1(VAR_11.v_columns - 1, VAR_13 + VAR_12 - 1, VAR_13, VAR_14, 1);
 }
}
