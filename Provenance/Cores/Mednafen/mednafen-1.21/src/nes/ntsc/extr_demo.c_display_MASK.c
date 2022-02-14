
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ merge_fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ,unsigned char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_7 ;
 unsigned char* VAR_8 ;
 TYPE_1__ VAR_9 ;

__attribute__((used)) static void FUNC_3()
{
 FUNC_2();


 VAR_0 ^= 1;
 if ( VAR_9.merge_fields )
  VAR_0 = 0;


 FUNC_0( VAR_4, VAR_2, VAR_3, VAR_0,
   VAR_3, VAR_1, VAR_8, VAR_7 * 2 );


 {
  int VAR_10;
  for ( VAR_10 = 1; VAR_10 < VAR_5 - 1; VAR_10 += 2 )
  {
   unsigned char* VAR_11 = VAR_8 + VAR_10 * VAR_7;
   int VAR_12;
   for ( VAR_12 = VAR_6; VAR_12; --VAR_12 )
   {
    unsigned VAR_13 = *(unsigned short*) (VAR_11 - VAR_7);
    unsigned VAR_14 = *(unsigned short*) (VAR_11 + VAR_7);

    unsigned VAR_15 = VAR_13 + VAR_14 + ((VAR_13 ^ VAR_14) & 0x0821);

    *(unsigned short*) VAR_11 = (VAR_15 >> 1) - (VAR_15 >> 4 & 0x18E3);
    VAR_11 += 2;
   }
  }
 }

 FUNC_1();
}
