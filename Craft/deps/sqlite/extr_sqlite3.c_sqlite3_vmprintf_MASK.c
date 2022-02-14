
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zBase ;
typedef int va_list ;
struct TYPE_5__ {int useMalloc; } ;
typedef TYPE_1__ StrAccum ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,char const*,int ) ;
 scalar_t__ FUNC_3 () ;

char *FUNC_4(const char *VAR_2, va_list VAR_3){
  char *VAR_4;
  char VAR_5[VAR_1];
  StrAccum VAR_6;

  if( FUNC_3() ) return 0;

  FUNC_1(&VAR_6, VAR_5, sizeof(VAR_5), VAR_0);
  VAR_6.useMalloc = 2;
  FUNC_2(&VAR_6, 0, VAR_2, VAR_3);
  VAR_4 = FUNC_0(&VAR_6);
  return VAR_4;
}
