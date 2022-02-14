
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; scalar_t__ mmapSizeActual; scalar_t__ nFetchOut; scalar_t__ mmapSize; scalar_t__ mmapSizeMax; int ctrlFlags; void* pMapRegion; int zPath; } ;
typedef TYPE_1__ unixFile ;
typedef int u8 ;
typedef scalar_t__ i64 ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,scalar_t__,int,int ,int,scalar_t__) ;
 int * FUNC_2 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char const*,int ) ;

__attribute__((used)) static void FUNC_6(
  unixFile *VAR_7,
  i64 VAR_8
){
  const char *VAR_9 = "mmap";
  int VAR_10 = VAR_7->h;
  u8 *VAR_11 = (u8 *)VAR_7->pMapRegion;
  i64 VAR_12 = VAR_7->mmapSizeActual;
  u8 *VAR_13 = 0;
  int VAR_14 = VAR_3;

  FUNC_0( VAR_7->nFetchOut==0 );
  FUNC_0( VAR_8>VAR_7->mmapSize );
  FUNC_0( VAR_8<=VAR_7->mmapSizeMax );
  FUNC_0( VAR_8>0 );
  FUNC_0( VAR_7->mmapSizeActual>=VAR_7->mmapSize );
  FUNC_0( VAR_0!=0 );

  if( (VAR_7->ctrlFlags & VAR_6)==0 ) VAR_14 |= VAR_4;

  if( VAR_11 ){
    const int VAR_15 = FUNC_4();
    i64 VAR_16 = (VAR_7->mmapSize & ~(VAR_15-1));
    u8 *VAR_17 = &VAR_11[VAR_16];


    if( VAR_16!=VAR_12 ){
      FUNC_3(VAR_17, VAR_12-VAR_16);
    }





    VAR_13 = FUNC_1(VAR_17, VAR_8-VAR_16, VAR_14, VAR_1, VAR_10, VAR_16);
    if( VAR_13!=VAR_0 ){
      if( VAR_13!=VAR_17 ){
        FUNC_3(VAR_13, VAR_8 - VAR_16);
        VAR_13 = 0;
      }else{
        VAR_13 = VAR_11;
      }
    }



    if( VAR_13==VAR_0 || VAR_13==0 ){
      FUNC_3(VAR_11, VAR_16);
    }
  }


  if( VAR_13==0 ){
    VAR_13 = FUNC_1(0, VAR_8, VAR_14, VAR_1, VAR_10, 0);
  }

  if( VAR_13==VAR_0 ){
    VAR_13 = 0;
    VAR_8 = 0;
    FUNC_5(VAR_5, VAR_9, VAR_7->zPath);




    VAR_7->mmapSizeMax = 0;
  }
  VAR_7->pMapRegion = (void *)VAR_13;
  VAR_7->mmapSize = VAR_7->mmapSizeActual = VAR_8;
}
