
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct af9013_state {int dummy; } ;


 int FUNC_0 (struct af9013_state*,int ,int*) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct af9013_state *VAR_1, u16 VAR_2, u8 VAR_3,
 u8 VAR_4, u8 *VAR_5)
{
 int VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_7);
 if (VAR_6)
  return VAR_6;
 *VAR_5 = (VAR_7 >> VAR_3) & VAR_0[VAR_4 - 1];
 return 0;
}
