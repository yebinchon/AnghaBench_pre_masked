
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zd_chip {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zd_chip*) ;
 int FUNC_4 (struct zd_chip*,int *,int ) ;
 int FUNC_5 (struct zd_chip*,int ,int ) ;

int FUNC_6(struct zd_chip *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 FUNC_0(FUNC_2(&VAR_2->mutex));
 VAR_3 = FUNC_4(VAR_2, &VAR_4, VAR_0);
 if (VAR_3) {
  FUNC_1(FUNC_3(VAR_2),
   "error ioread32(CR_REG1): %d\n", VAR_3);
  return VAR_3;
 }

 VAR_4 |= VAR_1;

 VAR_3 = FUNC_5(VAR_2, VAR_4, VAR_0);
 if (VAR_3)
  FUNC_1(FUNC_3(VAR_2), "error iowrite32(CR_REG1): %d\n", VAR_3);
 return VAR_3;
}
