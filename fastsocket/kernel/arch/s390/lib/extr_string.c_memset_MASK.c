
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (void*,int ,size_t) ;

void *FUNC_1(void *VAR_0, int VAR_1, size_t VAR_2)
{
 char *VAR_3;

 if (VAR_1 == 0)
  return FUNC_0(VAR_0, 0, VAR_2);

 VAR_3 = (char *) VAR_0;
 if (VAR_2 > 0)
  do {
   *VAR_3++ = VAR_1;
  } while (--VAR_2 > 0);
 return VAR_0;
}
