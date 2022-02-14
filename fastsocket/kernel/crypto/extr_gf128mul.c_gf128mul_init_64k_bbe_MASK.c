
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gf128mul_64k {TYPE_1__** t; } ;
typedef int be128 ;
struct TYPE_2__ {int * t; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (struct gf128mul_64k*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (int,int ) ;

struct gf128mul_64k *FUNC_5(const be128 *VAR_1)
{
 struct gf128mul_64k *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 VAR_2 = FUNC_4(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  goto out;

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  VAR_2->t[VAR_3] = FUNC_4(sizeof(*VAR_2->t[VAR_3]), VAR_0);
  if (!VAR_2->t[VAR_3]) {
   FUNC_1(VAR_2);
   VAR_2 = ((void*)0);
   goto out;
  }
 }

 VAR_2->t[0]->t[1] = *VAR_1;
 for (VAR_4 = 1; VAR_4 <= 64; VAR_4 <<= 1)
  FUNC_3(&VAR_2->t[0]->t[VAR_4 + VAR_4], &VAR_2->t[0]->t[VAR_4]);

 for (VAR_3 = 0;;) {
  for (VAR_4 = 2; VAR_4 < 256; VAR_4 += VAR_4)
   for (VAR_5 = 1; VAR_5 < VAR_4; ++VAR_5)
    FUNC_0(&VAR_2->t[VAR_3]->t[VAR_4 + VAR_5],
       &VAR_2->t[VAR_3]->t[VAR_4], &VAR_2->t[VAR_3]->t[VAR_5]);

  if (++VAR_3 >= 16)
   break;

  for (VAR_4 = 128; VAR_4 > 0; VAR_4 >>= 1) {
   VAR_2->t[VAR_3]->t[VAR_4] = VAR_2->t[VAR_3 - 1]->t[VAR_4];
   FUNC_2(&VAR_2->t[VAR_3]->t[VAR_4]);
  }
 }

out:
 return VAR_2;
}
