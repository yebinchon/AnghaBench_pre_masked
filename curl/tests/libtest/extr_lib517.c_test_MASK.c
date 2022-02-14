
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {char* input; scalar_t__ output; } ;


 scalar_t__ FUNC_0 (char*,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,char*,scalar_t__,scalar_t__) ;

int FUNC_2(char *VAR_1)
{
  int VAR_2;
  int VAR_3 = 0;

  (void)VAR_1;

  for(VAR_2 = 0; VAR_0[VAR_2].input; VAR_2++) {
    time_t VAR_4 = FUNC_0(VAR_0[VAR_2].input, ((void*)0));
    if(VAR_4 != VAR_0[VAR_2].output) {
      FUNC_1("WRONGLY %s => %ld (instead of %ld)\n",
             VAR_0[VAR_2].input, VAR_4, VAR_0[VAR_2].output);
      VAR_3++;
    }
  }

  return VAR_3;
}
