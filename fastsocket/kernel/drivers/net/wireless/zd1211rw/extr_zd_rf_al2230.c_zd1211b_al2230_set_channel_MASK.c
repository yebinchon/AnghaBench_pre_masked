
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct zd_rf {int dummy; } ;
struct zd_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct zd_chip*) ;
 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct zd_chip*,int ,int ) ;
 struct zd_chip* FUNC_3 (struct zd_rf*) ;
 int FUNC_4 (struct zd_chip*,int const*,int) ;

__attribute__((used)) static int FUNC_5(struct zd_rf *VAR_2, u8 VAR_3)
{
 int VAR_4;
 const u32 *VAR_5 = VAR_0[VAR_3-1];
 struct zd_chip *VAR_6 = FUNC_3(VAR_2);

 VAR_4 = FUNC_2(VAR_6, VAR_1,
  FUNC_0(VAR_1));
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_6, VAR_5, 3);
 if (VAR_4)
  return VAR_4;

 return FUNC_1(VAR_6);
}
