
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_card {int rca; int host; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_card*,int ,int ,int *,int) ;
 int FUNC_3 (int ,int,int *,int ) ;

int FUNC_4(struct mmc_card *VAR_1, u32 *VAR_2)
{
 int VAR_3, VAR_4;

 if (!FUNC_1(VAR_1->host))
  return FUNC_3(VAR_1->host, VAR_1->rca << 16,
    VAR_2, VAR_0);

 VAR_3 = FUNC_2(VAR_1, VAR_1->host, VAR_0, VAR_2, 16);
 if (VAR_3)
  return VAR_3;

 for (VAR_4 = 0;VAR_4 < 4;VAR_4++)
  VAR_2[VAR_4] = FUNC_0(VAR_2[VAR_4]);

 return 0;
}
