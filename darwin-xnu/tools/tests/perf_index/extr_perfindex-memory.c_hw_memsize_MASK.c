
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int my_memsize ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int,size_t*,size_t*,int *,int ) ;

size_t FUNC_1(void) {
  int VAR_2[2];
  size_t VAR_3;
  size_t VAR_4;
  int VAR_5;

  VAR_2[0] = VAR_0;
  VAR_2[1] = VAR_1;
  VAR_3 = sizeof(VAR_4);

  VAR_5 = FUNC_0(VAR_2, 2, &VAR_4, &VAR_3, ((void*)0), 0);

  if(VAR_5 != 0)
      return 0;

  return VAR_4;
}
