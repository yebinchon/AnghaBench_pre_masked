
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct hash_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hash_desc*,char*) ;
 int FUNC_1 (struct hash_desc*) ;
 int FUNC_2 (struct hash_desc*,struct scatterlist*,int) ;
 unsigned long VAR_1 ;
 int FUNC_3 (char*,int,long) ;
 int FUNC_4 (struct hash_desc*,struct scatterlist*,int,char*,int) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct hash_desc *VAR_2, struct scatterlist *VAR_3,
        int VAR_4, int VAR_5, char *VAR_6, int VAR_7)
{
 unsigned long VAR_8, VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;

 if (VAR_5 == VAR_4)
  return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_6, VAR_7);

 for (VAR_8 = VAR_1, VAR_9 = VAR_8 + VAR_7 * VAR_0, VAR_10 = 0;
      FUNC_5(VAR_1, VAR_9); VAR_10++) {
  VAR_12 = FUNC_1(VAR_2);
  if (VAR_12)
   return VAR_12;
  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11 += VAR_5) {
   VAR_12 = FUNC_2(VAR_2, VAR_3, VAR_5);
   if (VAR_12)
    return VAR_12;
  }

  VAR_12 = FUNC_0(VAR_2, VAR_6);
  if (VAR_12)
   return VAR_12;
 }

 FUNC_3("%6u opers/sec, %9lu bytes/sec\n",
        VAR_10 / VAR_7, ((long)VAR_10 * VAR_4) / VAR_7);

 return 0;
}
