
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {int dummy; } ;


 struct spu_context* FUNC_0 (int*) ;
 int FUNC_1 (struct spu_context*) ;
 int FUNC_2 (struct spu_context*) ;
 int FUNC_3 (struct spu_context*,int) ;

int FUNC_4(void)
{
 struct spu_context *VAR_0;
 int VAR_1 = 0, VAR_2, VAR_3;

 VAR_3 = 0;
 while ((VAR_0 = FUNC_0(&VAR_3)) != ((void*)0)) {
  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2)
   break;
  VAR_2 = FUNC_3(VAR_0, VAR_3);
  FUNC_2(VAR_0);
  if (VAR_2 < 0)
   break;

  VAR_1 += VAR_2;


  VAR_3++;
 }

 return VAR_1;
}
