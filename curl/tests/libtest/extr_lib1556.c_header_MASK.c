
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct headerinfo {size_t largest; } ;



__attribute__((used)) static size_t FUNC_0(void *VAR_0, size_t VAR_1, size_t VAR_2, void *VAR_3)
{
  size_t VAR_4 = VAR_1 * VAR_2;
  struct headerinfo *VAR_5 = (struct headerinfo *)VAR_3;
  (void)VAR_0;

  if(VAR_4 > VAR_5->largest)

    VAR_5->largest = VAR_4;

  return VAR_2 * VAR_1;
}
