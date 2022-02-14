
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* opt; char* desc; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

void FUNC_3(void)
{
  int VAR_2;
  FUNC_1("Usage: curl [options...] <url>");
  for(VAR_2 = 0; VAR_1[VAR_2].opt; VAR_2++) {
    FUNC_0(" %-19s %s\n", VAR_1[VAR_2].opt, VAR_1[VAR_2].desc);




  }
}
