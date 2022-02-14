
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* a; } ;
struct TYPE_4__ {int pTab; } ;
typedef TYPE_2__ SrcList ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static int FUNC_2(
  SrcList *VAR_0,
  int VAR_1,
  const char *VAR_2,
  int *VAR_3,
  int *VAR_4
){
  int VAR_5;
  int VAR_6;

  FUNC_0( (VAR_3==0)==(VAR_4==0) );
  for(VAR_5=0; VAR_5<VAR_1; VAR_5++){
    VAR_6 = FUNC_1(VAR_0->a[VAR_5].pTab, VAR_2);
    if( VAR_6>=0 ){
      if( VAR_3 ){
        *VAR_3 = VAR_5;
        *VAR_4 = VAR_6;
      }
      return 1;
    }
  }
  return 0;
}
