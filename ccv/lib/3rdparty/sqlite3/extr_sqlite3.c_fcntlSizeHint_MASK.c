
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int szChunk; scalar_t__ mmapSizeMax; int mmapSize; int zPath; int h; } ;
typedef TYPE_1__ unixFile ;
struct stat {int st_size; int st_blksize; } ;
typedef int i64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (int ,struct stat*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,int,char*,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_8(unixFile *VAR_6, i64 VAR_7){
  if( VAR_6->szChunk>0 ){
    i64 VAR_8;
    struct stat VAR_9;

    if( FUNC_2(VAR_6->h, &VAR_9) ){
      return VAR_1;
    }

    VAR_8 = ((VAR_7+VAR_6->szChunk-1) / VAR_6->szChunk) * VAR_6->szChunk;
    if( VAR_8>(i64)VAR_9.st_size ){
      int VAR_10 = VAR_9.st_blksize;
      int VAR_11 = 0;
      i64 VAR_12;

      VAR_12 = (VAR_9.st_size/VAR_10)*VAR_10 + VAR_10 - 1;
      FUNC_0( VAR_12>=VAR_9.st_size );
      FUNC_0( ((VAR_12+1)%VAR_10)==0 );
      for( ; VAR_12<VAR_8+VAR_10-1; VAR_12+=VAR_10 ){
        if( VAR_12>=VAR_8 ) VAR_12 = VAR_8 - 1;
        VAR_11 = FUNC_4(VAR_6, VAR_12, "", 1);
        if( VAR_11!=1 ) return VAR_3;
      }

    }
  }
  return VAR_4;
}
