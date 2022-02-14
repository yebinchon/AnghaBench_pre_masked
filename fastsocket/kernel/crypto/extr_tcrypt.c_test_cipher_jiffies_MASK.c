
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct blkcipher_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_1 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 unsigned long VAR_1 ;
 int FUNC_2 (char*,int,int,long) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct blkcipher_desc *VAR_2, int VAR_3,
          struct scatterlist *VAR_4, int VAR_5, int VAR_6)
{
 unsigned long VAR_7, VAR_8;
 int VAR_9;
 int VAR_10;

 for (VAR_7 = VAR_1, VAR_8 = VAR_7 + VAR_6 * VAR_0, VAR_9 = 0;
      FUNC_3(VAR_1, VAR_8); VAR_9++) {
  if (VAR_3)
   VAR_10 = FUNC_1(VAR_2, VAR_4, VAR_4, VAR_5);
  else
   VAR_10 = FUNC_0(VAR_2, VAR_4, VAR_4, VAR_5);

  if (VAR_10)
   return VAR_10;
 }

 FUNC_2("%d operations in %d seconds (%ld bytes)\n",
        VAR_9, VAR_6, (long)VAR_9 * VAR_5);
 return 0;
}
