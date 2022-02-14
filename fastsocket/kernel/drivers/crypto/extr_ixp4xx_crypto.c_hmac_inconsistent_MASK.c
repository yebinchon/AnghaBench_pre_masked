
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {unsigned int length; } ;


 struct scatterlist* FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_1(struct scatterlist *VAR_0, unsigned VAR_1,
  unsigned int VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2)
  return 0;

 for (;;) {
  if (VAR_1 < VAR_3 + VAR_0->length)
   break;

  VAR_3 += VAR_0->length;
  VAR_0 = FUNC_0(VAR_0);
 }
 return (VAR_1 + VAR_2 > VAR_3 + VAR_0->length);
}
