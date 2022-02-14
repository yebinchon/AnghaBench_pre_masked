
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct hash_desc {int dummy; } ;
typedef scalar_t__ cycles_t ;


 int FUNC_0 (struct hash_desc*,struct scatterlist*,int,char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct hash_desc *VAR_0,
       struct scatterlist *VAR_1, int VAR_2, char *VAR_3)
{
 unsigned long VAR_4 = 0;
 int VAR_5;
 int VAR_6;

 FUNC_2();
 FUNC_4();


 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_6)
   goto out;
 }


 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  cycles_t VAR_7, VAR_8;

  VAR_7 = FUNC_1();

  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_6)
   goto out;

  VAR_8 = FUNC_1();

  VAR_4 += VAR_8 - VAR_7;
 }

out:
 FUNC_5();
 FUNC_3();

 if (VAR_6)
  return VAR_6;

 FUNC_6("%6lu cycles/operation, %4lu cycles/byte\n",
        VAR_4 / 8, VAR_4 / (8 * VAR_2));

 return 0;
}
