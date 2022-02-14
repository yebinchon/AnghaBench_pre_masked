
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; char* expected; char* result; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_4(void)
{
  int VAR_2, VAR_3;
  int VAR_4 = 0;
  int VAR_5 = 0;
  for(VAR_2 = 1; VAR_2 <= VAR_4; VAR_2++) {

    for(VAR_3 = 0; VAR_3<VAR_0; VAR_3++)
      VAR_1[VAR_2].result[VAR_3] = 'X';
    VAR_1[VAR_2].result[VAR_0-1] = '\0';

    (void)FUNC_0(VAR_1[VAR_2].result, "%hu", VAR_1[VAR_2].num);

    if(FUNC_1(VAR_1[VAR_2].result,
               VAR_1[VAR_2].expected,
               FUNC_3(VAR_1[VAR_2].expected))) {
      FUNC_2("unsigned short test #%.2d: Failed (Expected: %s Got: %s)\n",
             VAR_2, VAR_1[VAR_2].expected, VAR_1[VAR_2].result);
      VAR_5++;
    }

  }

  if(!VAR_5)
    FUNC_2("All curl_mprintf() unsigned short tests OK!\n");
  else
    FUNC_2("Some curl_mprintf() unsigned short tests Failed!\n");

  return VAR_5;
}
