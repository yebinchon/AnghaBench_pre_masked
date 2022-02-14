
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nColumn; char** azColl; } ;
typedef TYPE_1__ Index ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, Index *VAR_1){
  int VAR_2;
  FUNC_0( VAR_0!=0 );
  for(VAR_2=0; VAR_2<VAR_1->nColumn; VAR_2++){
    const char *VAR_3 = VAR_1->azColl[VAR_2];
    FUNC_0( VAR_3!=0 );
    if( 0==FUNC_1(VAR_3, VAR_0) ){
      return 1;
    }
  }
  return 0;
}
