
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct scatterlist*,unsigned int) ;
 struct scatterlist* FUNC_1 (int,int ) ;
 char* FUNC_2 (unsigned int,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct scatterlist*,int) ;
 int FUNC_4 (struct scatterlist*,char*,unsigned int) ;

__attribute__((used)) static struct scatterlist *
FUNC_5 (int VAR_2, int VAR_3, int VAR_4)
{
 struct scatterlist *VAR_5;
 unsigned VAR_6;
 unsigned VAR_7 = VAR_3;

 VAR_5 = FUNC_1 (VAR_2 * sizeof *VAR_5, VAR_0);
 if (!VAR_5)
  return ((void*)0);
 FUNC_3(VAR_5, VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  char *VAR_8;
  unsigned VAR_9;

  VAR_8 = FUNC_2 (VAR_7, VAR_0);
  if (!VAR_8) {
   FUNC_0 (VAR_5, VAR_6);
   return ((void*)0);
  }


  FUNC_4(&VAR_5[VAR_6], VAR_8, VAR_7);

  switch (VAR_1) {
  case 0:

   break;
  case 1:
   for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
    *VAR_8++ = (u8) (VAR_9 % 63);
   break;
  }

  if (VAR_4) {
   VAR_7 += VAR_4;
   VAR_7 %= VAR_3;
   if (VAR_7 == 0)
    VAR_7 = (VAR_4 < VAR_3) ? VAR_4 : VAR_3;
  }
 }

 return VAR_5;
}
