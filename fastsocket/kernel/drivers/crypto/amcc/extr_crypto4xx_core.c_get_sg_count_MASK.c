
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; } ;


 struct scatterlist* FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_1(struct scatterlist *VAR_0, int VAR_1)
{
 struct scatterlist *VAR_2 = VAR_0;
 int VAR_3 = 0;

 while (VAR_1) {
  VAR_3++;
  if (VAR_2->length > VAR_1)
   break;
  VAR_1 -= VAR_2->length;
  VAR_2 = FUNC_0(VAR_2);
 }

 return VAR_3;
}
