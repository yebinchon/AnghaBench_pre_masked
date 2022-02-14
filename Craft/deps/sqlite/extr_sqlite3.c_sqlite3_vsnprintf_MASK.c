
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_5__ {scalar_t__ useMalloc; } ;
typedef TYPE_1__ StrAccum ;


 char* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,int,int ) ;
 int FUNC_2 (TYPE_1__*,int ,char const*,int ) ;

char *FUNC_3(int VAR_0, char *VAR_1, const char *VAR_2, va_list VAR_3){
  StrAccum VAR_4;
  if( VAR_0<=0 ) return VAR_1;
  FUNC_1(&VAR_4, VAR_1, VAR_0, 0);
  VAR_4.useMalloc = 0;
  FUNC_2(&VAR_4, 0, VAR_2, VAR_3);
  return FUNC_0(&VAR_4);
}
