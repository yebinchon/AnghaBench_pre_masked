
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (void*,int ) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static size_t FUNC_3(void *VAR_2,
                           size_t VAR_3,
                           size_t VAR_4,
                           void *VAR_5)
{
  int *VAR_6 = (int *)VAR_5;

  if(*VAR_6) {

    FUNC_0(VAR_1, "READ ALREADY DONE!\n");
    return 0;
  }
  (*VAR_6)++;

  if(VAR_3 * VAR_4 > FUNC_2(VAR_0)) {
    FUNC_0(VAR_1, "READ!\n");
    FUNC_1(VAR_2, VAR_0);
    return FUNC_2(VAR_0);
  }
  FUNC_0(VAR_1, "READ NOT FINE!\n");
  return 0;
}
