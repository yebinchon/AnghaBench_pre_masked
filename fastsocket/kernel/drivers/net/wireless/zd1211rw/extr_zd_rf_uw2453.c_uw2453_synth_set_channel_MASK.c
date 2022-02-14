
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zd_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (struct zd_chip*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct zd_chip *VAR_4, int VAR_5,
 bool VAR_6)
{
 int VAR_7;
 int VAR_8 = VAR_5 - 1;
 u32 VAR_9;

 if (VAR_6)
  VAR_9 = FUNC_0(1, VAR_1[VAR_8]);
 else
  VAR_9 = FUNC_0(1, VAR_2[VAR_8]);

 VAR_7 = FUNC_1(VAR_4, VAR_9, VAR_0);
 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_4,
  FUNC_0(2, VAR_3[VAR_8]), VAR_0);
}
