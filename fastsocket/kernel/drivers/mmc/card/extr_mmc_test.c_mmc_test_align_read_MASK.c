
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct mmc_test_card {scalar_t__ buffer; } ;


 int FUNC_0 (struct mmc_test_card*,struct scatterlist*,int,int ,int,int,int ) ;
 int FUNC_1 (struct scatterlist*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct mmc_test_card *VAR_0)
{
 int VAR_1, VAR_2;
 struct scatterlist VAR_3;

 for (VAR_2 = 1;VAR_2 < 4;VAR_2++) {
  FUNC_1(&VAR_3, VAR_0->buffer + VAR_2, 512);
  VAR_1 = FUNC_0(VAR_0, &VAR_3, 1, 0, 1, 512, 0);
  if (VAR_1)
   return VAR_1;
 }

 return 0;
}
