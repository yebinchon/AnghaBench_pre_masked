
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {struct map_info* priv; } ;
struct map_info {struct lpddr_private* fldrv_priv; } ;
struct lpddr_private {int chipshift; int * chips; TYPE_1__* qinfo; } ;
struct kvec {scalar_t__ iov_len; } ;
typedef int loff_t ;
struct TYPE_2__ {int BufSizeShift; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct map_info*,int *,unsigned long,struct kvec const**,unsigned long*,int) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, const struct kvec *VAR_1,
    unsigned long VAR_2, loff_t VAR_3, size_t *VAR_4)
{
 struct map_info *VAR_5 = VAR_0->priv;
 struct lpddr_private *VAR_6 = VAR_5->fldrv_priv;
 int VAR_7 = 0;
 int VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11;
 int VAR_12 = 1 << VAR_6->qinfo->BufSizeShift;

 size_t VAR_13 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++)
  VAR_13 += VAR_1[VAR_11].iov_len;

 *VAR_4 = 0;
 if (!VAR_13)
  return 0;

 VAR_8 = VAR_3 >> VAR_6->chipshift;

 VAR_9 = VAR_3;
 VAR_10 = 0;

 do {

  int VAR_14 = VAR_12 - (VAR_9 & (VAR_12-1));

  if (VAR_14 > VAR_13)
   VAR_14 = VAR_13;

  VAR_7 = FUNC_1(VAR_5, &VAR_6->chips[VAR_8],
       VAR_9, &VAR_1, &VAR_10, VAR_14);
  if (VAR_7)
   return VAR_7;

  VAR_9 += VAR_14;
  (*VAR_4) += VAR_14;
  VAR_13 -= VAR_14;



  FUNC_0();

 } while (VAR_13);

 return 0;
}
