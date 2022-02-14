
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s921_state {int dummy; } ;
struct regdata {int data; int reg; } ;


 int FUNC_0 (struct s921_state*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct s921_state *VAR_0, u8 VAR_1,
     struct regdata *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2[VAR_4].reg, VAR_2[VAR_4].data);
  if (VAR_5 < 0)
   return VAR_5;
 }
 return 0;
}
