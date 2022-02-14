
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dp_state {int stat; int aux; } ;


 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct dp_state *VAR_1, u32 VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_2);

 VAR_3 = FUNC_1(VAR_1->aux, VAR_0, VAR_1->stat, 6);
 if (VAR_3)
  return VAR_3;

 FUNC_0("status %*ph\n", 6, VAR_1->stat);
 return 0;
}
