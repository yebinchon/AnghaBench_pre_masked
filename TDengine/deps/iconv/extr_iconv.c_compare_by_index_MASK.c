
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nalias {scalar_t__ encoding_index; } ;



__attribute__((used)) static int FUNC_0 (const void * VAR_0, const void * VAR_1)
{
  const struct nalias * VAR_2 = (const struct nalias *) VAR_0;
  const struct nalias * VAR_3 = (const struct nalias *) VAR_1;
  return (int)VAR_2->encoding_index - (int)VAR_3->encoding_index;
}
