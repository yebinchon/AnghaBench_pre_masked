
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {int* (* Hunk_AllocateTempMemory ) (int) ;int (* Hunk_FreeTempMemory ) (int*) ;} ;
struct TYPE_3__ {int fogImage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int*,int,int,int ,int ,int ) ;
 float FUNC_1 (int,int) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,float*) ;
 TYPE_2__ VAR_6 ;
 int* FUNC_3 (int) ;
 int FUNC_4 (int*) ;
 TYPE_1__ VAR_7 ;

__attribute__((used)) static void FUNC_5( void ) {
 int VAR_8,VAR_9;
 byte *VAR_10;
 float VAR_11;
 float VAR_12;
 float VAR_13[4];

 VAR_10 = VAR_6.Hunk_AllocateTempMemory( VAR_0 * VAR_1 * 4 );

 VAR_11 = 2.0;


 for (VAR_8=0 ; VAR_8<VAR_0 ; VAR_8++) {
  for (VAR_9=0 ; VAR_9<VAR_1 ; VAR_9++) {
   VAR_12 = FUNC_1( ( VAR_8 + 0.5f ) / VAR_0, ( VAR_9 + 0.5f ) / VAR_1 );

   VAR_10[(VAR_9*VAR_0+VAR_8)*4+0] =
   VAR_10[(VAR_9*VAR_0+VAR_8)*4+1] =
   VAR_10[(VAR_9*VAR_0+VAR_8)*4+2] = 255;
   VAR_10[(VAR_9*VAR_0+VAR_8)*4+3] = 255*VAR_12;
  }
 }



 VAR_7.fogImage = FUNC_0("*fog", (byte *)VAR_10, VAR_0, VAR_1, VAR_5, VAR_5, VAR_2 );
 VAR_6.Hunk_FreeTempMemory( VAR_10 );

 VAR_13[0] = 1.0;
 VAR_13[1] = 1.0;
 VAR_13[2] = 1.0;
 VAR_13[3] = 1;

 FUNC_2( VAR_3, VAR_4, VAR_13 );
}
