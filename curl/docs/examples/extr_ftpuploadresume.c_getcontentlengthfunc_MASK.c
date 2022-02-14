
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,char*,long*) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_0, size_t VAR_1, size_t VAR_2,
                                   void *VAR_3)
{
  int VAR_4;
  long VAR_5 = 0;

  VAR_4 = FUNC_0(VAR_0, "Content-Length: %ld\n", &VAR_5);
  if(VAR_4)
    *((long *) VAR_3) = VAR_5;

  return VAR_1 * VAR_2;
}
