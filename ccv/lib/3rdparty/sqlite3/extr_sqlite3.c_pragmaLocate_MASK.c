
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zName; } ;
typedef TYPE_1__ PragmaName ;


 int FUNC_0 (TYPE_1__ const*) ;
 TYPE_1__ const* VAR_0 ;
 int FUNC_1 (char const*,int ) ;

__attribute__((used)) static const PragmaName *FUNC_2(const char *VAR_1){
  int VAR_2, VAR_3, VAR_4 = 0, VAR_5;
  VAR_3 = 0;
  VAR_2 = FUNC_0(VAR_0)-1;
  while( VAR_3<=VAR_2 ){
    VAR_4 = (VAR_3+VAR_2)/2;
    VAR_5 = FUNC_1(VAR_1, VAR_0[VAR_4].zName);
    if( VAR_5==0 ) break;
    if( VAR_5<0 ){
      VAR_2 = VAR_4 - 1;
    }else{
      VAR_3 = VAR_4 + 1;
    }
  }
  return VAR_3>VAR_2 ? 0 : &VAR_0[VAR_4];
}
