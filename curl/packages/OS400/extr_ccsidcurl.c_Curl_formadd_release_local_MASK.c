
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_forms {scalar_t__ value; int option; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct curl_forms * VAR_0, int VAR_1, int VAR_2)

{
  while(VAR_1--)
    if(VAR_1 != VAR_2)
      if(FUNC_0(VAR_0[VAR_1].option))
        if(VAR_0[VAR_1].value)
          FUNC_1((char *) VAR_0[VAR_1].value);

  FUNC_1((char *) VAR_0);
}
