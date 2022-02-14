
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct hash_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hash_desc*,struct scatterlist*,int,char*) ;
 unsigned long VAR_1 ;
 int FUNC_1 (char*,int,long) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct hash_desc *VAR_2,
        struct scatterlist *VAR_3, int VAR_4,
        char *VAR_5, int VAR_6)
{
 unsigned long VAR_7, VAR_8;
 int VAR_9;
 int VAR_10;

 for (VAR_7 = VAR_1, VAR_8 = VAR_7 + VAR_6 * VAR_0, VAR_9 = 0;
      FUNC_2(VAR_1, VAR_8); VAR_9++) {
  VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_10)
   return VAR_10;
 }

 FUNC_1("%6u opers/sec, %9lu bytes/sec\n",
        VAR_9 / VAR_6, ((long)VAR_9 * VAR_4) / VAR_6);

 return 0;
}
