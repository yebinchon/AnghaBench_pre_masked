
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int eFileLock; int lastErrno; int szChunk; void* mmapSize; int dbUpdate; void* mmapSizeMax; TYPE_1__* pVfs; } ;
typedef TYPE_2__ unixFile ;
typedef int sqlite3_file ;
typedef void* i64 ;
struct TYPE_8__ {void* mxMmap; } ;
struct TYPE_6__ {int mxPathname; int zName; } ;
 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,void*) ;
 int FUNC_2 (int *,int,void*) ;
 TYPE_4__ VAR_4 ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_2__*,int ,int*) ;

__attribute__((used)) static int FUNC_7(sqlite3_file *VAR_5, int VAR_6, void *VAR_7){
  unixFile *VAR_8 = (unixFile*)VAR_5;
  switch( VAR_6 ){
    case 137: {
      *(int*)VAR_7 = VAR_8->eFileLock;
      return VAR_1;
    }
    case 129: {
      *(int*)VAR_7 = VAR_8->lastErrno;
      return VAR_1;
    }
    case 139: {
      VAR_8->szChunk = *(int *)VAR_7;
      return VAR_1;
    }
    case 133: {
      int VAR_9;
      FUNC_0(1);
      VAR_9 = FUNC_1(VAR_8, *(i64 *)VAR_7);
      FUNC_0(0);
      return VAR_9;
    }
    case 135: {
      FUNC_6(VAR_8, VAR_2, (int*)VAR_7);
      return VAR_1;
    }
    case 134: {
      FUNC_6(VAR_8, VAR_3, (int*)VAR_7);
      return VAR_1;
    }
    case 131: {
      *(char**)VAR_7 = FUNC_4("%s", VAR_8->pVfs->zName);
      return VAR_1;
    }
    case 132: {
      char *VAR_10 = FUNC_3( VAR_8->pVfs->mxPathname );
      if( VAR_10 ){
        FUNC_5(VAR_8->pVfs->mxPathname, VAR_10);
        *(char**)VAR_7 = VAR_10;
      }
      return VAR_1;
    }
    case 136: {
      i64 VAR_11 = *(i64*)VAR_7;
      if( VAR_11>VAR_4.mxMmap ){
        VAR_11 = VAR_4.mxMmap;
      }
      *(i64*)VAR_7 = VAR_8->mmapSizeMax;
      if( VAR_11>=0 ){
        VAR_8->mmapSizeMax = VAR_11;
        if( VAR_11<VAR_8->mmapSize ) VAR_8->mmapSize = VAR_11;
      }
      return VAR_1;
    }
  }
  return VAR_0;
}
