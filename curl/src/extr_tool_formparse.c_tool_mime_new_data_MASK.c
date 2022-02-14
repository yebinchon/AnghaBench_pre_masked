
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* data; } ;
typedef TYPE_1__ tool_mime ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 char* FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static tool_mime *FUNC_3(tool_mime *VAR_1, const char *VAR_2)
{
  tool_mime *VAR_3 = ((void*)0);

  VAR_2 = FUNC_1(VAR_2);
  if(VAR_2) {
    VAR_3 = FUNC_2(VAR_1, VAR_0);
    if(!VAR_3)
      FUNC_0(VAR_2);
    else
      VAR_3->data = VAR_2;
  }
  return VAR_3;
}
