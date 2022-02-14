
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct hash_desc {int dummy; } ;
typedef scalar_t__ cycles_t ;


 int FUNC_0 (struct hash_desc*,char*) ;
 int FUNC_1 (struct hash_desc*) ;
 int FUNC_2 (struct hash_desc*,struct scatterlist*,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*,unsigned long,unsigned long) ;
 int FUNC_9 (struct hash_desc*,struct scatterlist*,int,char*) ;

__attribute__((used)) static int FUNC_10(struct hash_desc *VAR_0, struct scatterlist *VAR_1,
       int VAR_2, int VAR_3, char *VAR_4)
{
 unsigned long VAR_5 = 0;
 int VAR_6, VAR_7;
 int VAR_8;

 if (VAR_3 == VAR_2)
  return FUNC_9(VAR_0, VAR_1, VAR_2, VAR_4);

 FUNC_4();
 FUNC_6();


 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  VAR_8 = FUNC_1(VAR_0);
  if (VAR_8)
   goto out;
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7 += VAR_3) {
   VAR_8 = FUNC_2(VAR_0, VAR_1, VAR_3);
   if (VAR_8)
    goto out;
  }
  VAR_8 = FUNC_0(VAR_0, VAR_4);
  if (VAR_8)
   goto out;
 }


 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  cycles_t VAR_9, VAR_10;

  VAR_9 = FUNC_3();

  VAR_8 = FUNC_1(VAR_0);
  if (VAR_8)
   goto out;
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7 += VAR_3) {
   VAR_8 = FUNC_2(VAR_0, VAR_1, VAR_3);
   if (VAR_8)
    goto out;
  }
  VAR_8 = FUNC_0(VAR_0, VAR_4);
  if (VAR_8)
   goto out;

  VAR_10 = FUNC_3();

  VAR_5 += VAR_10 - VAR_9;
 }

out:
 FUNC_7();
 FUNC_5();

 if (VAR_8)
  return VAR_8;

 FUNC_8("%6lu cycles/operation, %4lu cycles/byte\n",
        VAR_5 / 8, VAR_5 / (8 * VAR_2));

 return 0;
}
