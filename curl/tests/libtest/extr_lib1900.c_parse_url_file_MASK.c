
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (int *,char*,...) ;
 size_t VAR_2 ;
 int ** VAR_3 ;
 int ** VAR_4 ;
 void* FUNC_4 (char*) ;
 void** VAR_5 ;
 int* VAR_6 ;

__attribute__((used)) static int FUNC_5(const char *VAR_7)
{
  FILE *VAR_8;
  int VAR_9;
  char VAR_10[200];

  VAR_2 = 0;
  VAR_1 = 0;
  VAR_0 = 0;

  VAR_8 = FUNC_2(VAR_7, "rb");
  if(!VAR_8)
    return 0;

  while(!FUNC_1(VAR_8)) {
    if(FUNC_3(VAR_8, "%d %199s\n", &VAR_9, VAR_10)) {
      VAR_6[VAR_2] = VAR_9;
      VAR_5[VAR_2] = FUNC_4(VAR_10);
      VAR_2++;
      continue;
    }

    if(FUNC_3(VAR_8, "blacklist_site %199s\n", VAR_10)) {
      VAR_4[VAR_1] = FUNC_4(VAR_10);
      VAR_1++;
      continue;
    }

    break;
  }
  FUNC_0(VAR_8);

  VAR_4[VAR_1] = ((void*)0);
  VAR_3[VAR_0] = ((void*)0);
  return VAR_2;
}
