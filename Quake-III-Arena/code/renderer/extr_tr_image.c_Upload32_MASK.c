
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef float byte ;
struct TYPE_12__ {int maxTextureSize; scalar_t__ textureCompression; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {int integer; } ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_8__ {int integer; } ;
struct TYPE_7__ {unsigned int* (* Hunk_AllocateTempMemory ) (int) ;int (* Hunk_FreeTempMemory ) (unsigned int*) ;} ;
typedef int GLenum ;


 int FUNC_0 (unsigned int*,unsigned int*,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (float*,int,int ) ;
 int FUNC_3 (unsigned int*,int,int,int) ;
 int FUNC_4 (float*,int,int) ;
 int FUNC_5 (unsigned int*,int,int,unsigned int*,int,int) ;
 scalar_t__ VAR_12 ;
 TYPE_6__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int FUNC_6 (int ,int,int,int,int,int ,int ,int ,unsigned int*) ;
 int FUNC_7 (int ,int ,int ) ;
 TYPE_5__* VAR_17 ;
 TYPE_4__* VAR_18 ;
 TYPE_3__* VAR_19 ;
 TYPE_2__* VAR_20 ;
 TYPE_1__ VAR_21 ;
 unsigned int* FUNC_8 (int) ;
 unsigned int* FUNC_9 (int) ;
 int FUNC_10 (unsigned int*) ;
 int FUNC_11 (unsigned int*) ;

__attribute__((used)) static void FUNC_12( unsigned *VAR_22,
        int VAR_23, int VAR_24,
        qboolean VAR_25,
        qboolean VAR_26,
       qboolean VAR_27,
        int *VAR_28,
        int *VAR_29, int *VAR_30 )
{
 int VAR_31;
 unsigned *VAR_32 = ((void*)0);
 unsigned *VAR_33 = ((void*)0);
 int VAR_34, VAR_35;
 int VAR_36, VAR_37;
 byte *VAR_38;
 GLenum VAR_39 = VAR_1;
 float VAR_40 = 0, VAR_41 = 0, VAR_42 = 0;




 for (VAR_34 = 1 ; VAR_34 < VAR_23 ; VAR_34<<=1)
  ;
 for (VAR_35 = 1 ; VAR_35 < VAR_24 ; VAR_35<<=1)
  ;
 if ( VAR_19->integer && VAR_34 > VAR_23 )
  VAR_34 >>= 1;
 if ( VAR_19->integer && VAR_35 > VAR_24 )
  VAR_35 >>= 1;

 if ( VAR_34 != VAR_23 || VAR_35 != VAR_24 ) {
  VAR_33 = VAR_21.Hunk_AllocateTempMemory( VAR_34 * VAR_35 * 4 );
  FUNC_5 (VAR_22, VAR_23, VAR_24, VAR_33, VAR_34, VAR_35);
  VAR_22 = VAR_33;
  VAR_23 = VAR_34;
  VAR_24 = VAR_35;
 }




 if ( VAR_26 ) {
  VAR_34 >>= VAR_18->integer;
  VAR_35 >>= VAR_18->integer;
 }




 if (VAR_34 < 1) {
  VAR_34 = 1;
 }
 if (VAR_35 < 1) {
  VAR_35 = 1;
 }






 while ( VAR_34 > VAR_13.maxTextureSize
  || VAR_35 > VAR_13.maxTextureSize ) {
  VAR_34 >>= 1;
  VAR_35 >>= 1;
 }

 VAR_32 = VAR_21.Hunk_AllocateTempMemory( sizeof( unsigned ) * VAR_34 * VAR_35 );





 VAR_37 = VAR_23*VAR_24;
 VAR_38 = ((byte *)VAR_22);
 VAR_31 = 3;
 if (!VAR_27) {
  for ( VAR_36 = 0; VAR_36 < VAR_37; VAR_36++ )
  {
   if ( VAR_38[VAR_36*4+0] > VAR_40 )
   {
    VAR_40 = VAR_38[VAR_36*4+0];
   }
   if ( VAR_38[VAR_36*4+1] > VAR_41 )
   {
    VAR_41 = VAR_38[VAR_36*4+1];
   }
   if ( VAR_38[VAR_36*4+2] > VAR_42 )
   {
    VAR_42 = VAR_38[VAR_36*4+2];
   }
   if ( VAR_38[VAR_36*4 + 3] != 255 )
   {
    VAR_31 = 4;
    break;
   }
  }

  if ( VAR_31 == 3 )
  {
   if ( VAR_13.textureCompression == VAR_12 )
   {
    VAR_39 = VAR_2;
   }
   else if ( VAR_20->integer == 16 )
   {
    VAR_39 = VAR_3;
   }
   else if ( VAR_20->integer == 32 )
   {
    VAR_39 = VAR_4;
   }
   else
   {
    VAR_39 = 3;
   }
  }
  else if ( VAR_31 == 4 )
  {
   if ( VAR_20->integer == 16 )
   {
    VAR_39 = VAR_6;
   }
   else if ( VAR_20->integer == 32 )
   {
    VAR_39 = VAR_7;
   }
   else
   {
    VAR_39 = 4;
   }
  }
 } else {
  VAR_39 = 3;
 }

 if ( ( VAR_34 == VAR_23 ) &&
  ( VAR_35 == VAR_24 ) ) {
  if (!VAR_25)
  {
   FUNC_6 (VAR_8, 0, VAR_39, VAR_34, VAR_35, 0, VAR_5, VAR_11, VAR_22);
   *VAR_29 = VAR_34;
   *VAR_30 = VAR_35;
   *VAR_28 = VAR_39;

   goto done;
  }
  FUNC_0 (VAR_32, VAR_22, VAR_23*VAR_24*4);
 }
 else
 {

  while ( VAR_23 > VAR_34 || VAR_24 > VAR_35 ) {
   FUNC_4( (byte *)VAR_22, VAR_23, VAR_24 );
   VAR_23 >>= 1;
   VAR_24 >>= 1;
   if ( VAR_23 < 1 ) {
    VAR_23 = 1;
   }
   if ( VAR_24 < 1 ) {
    VAR_24 = 1;
   }
  }
  FUNC_0( VAR_32, VAR_22, VAR_23 * VAR_24 * 4 );
 }

 FUNC_3 (VAR_32, VAR_34, VAR_35, !VAR_25 );

 *VAR_29 = VAR_34;
 *VAR_30 = VAR_35;
 *VAR_28 = VAR_39;

 FUNC_6 (VAR_8, 0, VAR_39, VAR_34, VAR_35, 0, VAR_5, VAR_11, VAR_32 );

 if (VAR_25)
 {
  int VAR_43;

  VAR_43 = 0;
  while (VAR_34 > 1 || VAR_35 > 1)
  {
   FUNC_4( (byte *)VAR_32, VAR_34, VAR_35 );
   VAR_34 >>= 1;
   VAR_35 >>= 1;
   if (VAR_34 < 1)
    VAR_34 = 1;
   if (VAR_35 < 1)
    VAR_35 = 1;
   VAR_43++;

   if ( VAR_17->integer ) {
    FUNC_2( (byte *)VAR_32, VAR_34 * VAR_35, VAR_16[VAR_43] );
   }

   FUNC_6 (VAR_8, VAR_43, VAR_39, VAR_34, VAR_35, 0, VAR_5, VAR_11, VAR_32 );
  }
 }
done:

 if (VAR_25)
 {
  FUNC_7(VAR_8, VAR_10, VAR_15);
  FUNC_7(VAR_8, VAR_9, VAR_14);
 }
 else
 {
  FUNC_7(VAR_8, VAR_10, VAR_0 );
  FUNC_7(VAR_8, VAR_9, VAR_0 );
 }

 FUNC_1();

 if ( VAR_32 != 0 )
  VAR_21.Hunk_FreeTempMemory( VAR_32 );
 if ( VAR_33 != 0 )
  VAR_21.Hunk_FreeTempMemory( VAR_33 );
}
