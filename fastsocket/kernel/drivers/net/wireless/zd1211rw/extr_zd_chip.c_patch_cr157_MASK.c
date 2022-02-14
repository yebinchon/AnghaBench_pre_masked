
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zd_chip {int patch_cr157; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct zd_chip*) ;
 int FUNC_2 (struct zd_chip*,int*,int ) ;
 int FUNC_3 (struct zd_chip*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct zd_chip *VAR_2)
{
 int VAR_3;
 u16 VAR_4;

 if (!VAR_2->patch_cr157)
  return 0;

 VAR_3 = FUNC_2(VAR_2, &VAR_4, VAR_0);
 if (VAR_3)
  return VAR_3;

 FUNC_0(FUNC_1(VAR_2), "patching value %x\n", VAR_4 >> 8);
 return FUNC_3(VAR_2, VAR_4 >> 8, VAR_1);
}
