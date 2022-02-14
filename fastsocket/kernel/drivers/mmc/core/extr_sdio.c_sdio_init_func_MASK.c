
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {unsigned int num; } ;
struct mmc_card {struct sdio_func** sdio_func; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sdio_func*) ;
 int FUNC_2 (struct sdio_func*) ;
 unsigned int VAR_0 ;
 struct sdio_func* FUNC_3 (struct mmc_card*) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (struct sdio_func*) ;

__attribute__((used)) static int FUNC_7(struct mmc_card *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 struct sdio_func *VAR_4;

 FUNC_0(VAR_2 > VAR_0);

 VAR_4 = FUNC_3(VAR_1);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 VAR_4->num = VAR_2;

 VAR_3 = FUNC_4(VAR_4);
 if (VAR_3)
  goto fail;

 VAR_3 = FUNC_5(VAR_4);
 if (VAR_3)
  goto fail;

 VAR_1->sdio_func[VAR_2 - 1] = VAR_4;

 return 0;

fail:




 FUNC_6(VAR_4);
 return VAR_3;
}
