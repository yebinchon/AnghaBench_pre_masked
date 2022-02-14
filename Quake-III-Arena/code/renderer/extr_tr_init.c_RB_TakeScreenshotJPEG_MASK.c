
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
struct TYPE_6__ {int vidWidth; int vidHeight; scalar_t__ deviceSupportsGamma; } ;
struct TYPE_5__ {int (* Hunk_FreeTempMemory ) (int *) ;int (* FS_WriteFile ) (char*,int *,int) ;int * (* Hunk_AllocateTempMemory ) (int) ;} ;
struct TYPE_4__ {scalar_t__ overbrightBits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,int,int,int,int *) ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (int,int,int,int,int ,int ,int *) ;
 TYPE_2__ VAR_3 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (char*,int *,int) ;
 int FUNC_5 (int *) ;
 TYPE_1__ VAR_4 ;

void FUNC_6( int VAR_5, int VAR_6, int VAR_7, int VAR_8, char *VAR_9 ) {
 byte *VAR_10;

 VAR_10 = VAR_3.Hunk_AllocateTempMemory(VAR_2.vidWidth*VAR_2.vidHeight*4);

 FUNC_2( VAR_5, VAR_6, VAR_7, VAR_8, VAR_0, VAR_1, VAR_10 );


 if ( ( VAR_4.overbrightBits > 0 ) && VAR_2.deviceSupportsGamma ) {
  FUNC_0( VAR_10, VAR_2.vidWidth * VAR_2.vidHeight * 4 );
 }

 VAR_3.FS_WriteFile( VAR_9, VAR_10, 1 );
 FUNC_1( VAR_9, 95, VAR_2.vidWidth, VAR_2.vidHeight, VAR_10);

 VAR_3.Hunk_FreeTempMemory( VAR_10 );
}
