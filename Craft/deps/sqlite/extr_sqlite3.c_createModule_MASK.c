
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sqlite3_module ;
struct TYPE_8__ {int mallocFailed; int mutex; int aModule; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_9__ {char* zName; void (* xDestroy ) (void*) ;void* pAux; int const* pModule; } ;
typedef TYPE_2__ Module ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (int *,char const*,int) ;
 scalar_t__ FUNC_6 (int *,char*,int,void*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(
  sqlite3 *VAR_2,
  const char *VAR_3,
  const sqlite3_module *VAR_4,
  void *VAR_5,
  void (*VAR_6)(void *)
){
  int VAR_7 = VAR_1;
  int VAR_8;

  FUNC_8(VAR_2->mutex);
  VAR_8 = FUNC_7(VAR_3);
  if( FUNC_5(&VAR_2->aModule, VAR_3, VAR_8) ){
    VAR_7 = VAR_0;
  }else{
    Module *VAR_9;
    VAR_9 = (Module *)FUNC_4(VAR_2, sizeof(Module) + VAR_8 + 1);
    if( VAR_9 ){
      Module *VAR_10;
      char *VAR_11 = (char *)(&VAR_9[1]);
      FUNC_1(VAR_11, VAR_3, VAR_8+1);
      VAR_9->zName = VAR_11;
      VAR_9->pModule = VAR_4;
      VAR_9->pAux = VAR_5;
      VAR_9->xDestroy = VAR_6;
      VAR_10 = (Module *)FUNC_6(&VAR_2->aModule,VAR_11,VAR_8,(void*)VAR_9);
      FUNC_0( VAR_10==0 || VAR_10==VAR_9 );
      if( VAR_10 ){
        VAR_2->mallocFailed = 1;
        FUNC_3(VAR_2, VAR_10);
      }
    }
  }
  VAR_7 = FUNC_2(VAR_2, VAR_7);
  if( VAR_7!=VAR_1 && VAR_6 ) VAR_6(VAR_5);

  FUNC_9(VAR_2->mutex);
  return VAR_7;
}
