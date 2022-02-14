
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int mutex; int mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,char*,int ,void*,int (*) (void*,int,void const*,int,void const*),int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 char* FUNC_4 (TYPE_1__*,void const*,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(
  sqlite3* VAR_2,
  const void *VAR_3,
  int VAR_4,
  void* VAR_5,
  int(*VAR_6)(void*,int,const void*,int,const void*)
){
  int VAR_7 = VAR_0;
  char *VAR_8;
  FUNC_5(VAR_2->mutex);
  FUNC_0( !VAR_2->mallocFailed );
  VAR_8 = FUNC_4(VAR_2, VAR_3, -1, VAR_1);
  if( VAR_8 ){
    VAR_7 = FUNC_1(VAR_2, VAR_8, (u8)VAR_4, VAR_5, VAR_6, 0);
    FUNC_3(VAR_2, VAR_8);
  }
  VAR_7 = FUNC_2(VAR_2, VAR_7);
  FUNC_6(VAR_2->mutex);
  return VAR_7;
}
