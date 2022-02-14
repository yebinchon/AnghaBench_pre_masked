
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct blkcipher_desc {int dummy; } ;
typedef scalar_t__ cycles_t ;


 int FUNC_0 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_1 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*,unsigned long,int) ;

__attribute__((used)) static int FUNC_8(struct blkcipher_desc *VAR_0, int VAR_1,
         struct scatterlist *VAR_2, int VAR_3)
{
 unsigned long VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6;

 FUNC_3();
 FUNC_5();


 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  if (VAR_1)
   VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_2, VAR_3);
  else
   VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_2, VAR_3);

  if (VAR_5)
   goto out;
 }


 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  cycles_t VAR_7, VAR_8;

  VAR_7 = FUNC_2();
  if (VAR_1)
   VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_2, VAR_3);
  else
   VAR_5 = FUNC_0(VAR_0, VAR_2, VAR_2, VAR_3);
  VAR_8 = FUNC_2();

  if (VAR_5)
   goto out;

  VAR_4 += VAR_8 - VAR_7;
 }

out:
 FUNC_6();
 FUNC_4();

 if (VAR_5 == 0)
  FUNC_7("1 operation in %lu cycles (%d bytes)\n",
         (VAR_4 + 4) / 8, VAR_3);

 return VAR_5;
}
