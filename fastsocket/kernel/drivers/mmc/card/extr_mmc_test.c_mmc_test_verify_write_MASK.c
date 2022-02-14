
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct mmc_test_card {int buffer; } ;


 int FUNC_0 (struct mmc_test_card*,struct scatterlist*,int,int ,int,int,int) ;
 int FUNC_1 (struct scatterlist*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mmc_test_card *VAR_0)
{
 int VAR_1;
 struct scatterlist VAR_2;

 FUNC_1(&VAR_2, VAR_0->buffer, 512);

 VAR_1 = FUNC_0(VAR_0, &VAR_2, 1, 0, 1, 512, 1);
 if (VAR_1)
  return VAR_1;

 return 0;
}
