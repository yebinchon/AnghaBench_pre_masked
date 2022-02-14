
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mmc_card {int host; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, u64 *VAR_1)
{
 struct mmc_card *VAR_2 = VAR_0;
 u32 VAR_3;
 int VAR_4;

 FUNC_0(VAR_2->host);

 VAR_4 = FUNC_2(VAR_0, &VAR_3);
 if (!VAR_4)
  *VAR_1 = VAR_3;

 FUNC_1(VAR_2->host);

 return VAR_4;
}
