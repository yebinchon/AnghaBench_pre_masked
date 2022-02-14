
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ offset; scalar_t__ length; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct scatterlist *VAR_1, unsigned int VAR_2)
{
 int VAR_3;


 if (VAR_2 < 2)
  return -1;


 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_3 == 0) {

   if (VAR_1[VAR_3].offset + VAR_1[VAR_3].length != VAR_0)
    return VAR_3;
  } else if (VAR_3 == VAR_2 - 1) {

   if (VAR_1[VAR_3].offset != 0)
    return VAR_3;
  } else {

   if (VAR_1[VAR_3].length != VAR_0 || VAR_1[VAR_3].offset != 0)
    return VAR_3;
  }
 }
 return -1;
}
