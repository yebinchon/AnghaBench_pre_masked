
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sky2_hw {size_t st_idx; int napi; int * st_le; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sky2_hw*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct sky2_hw *VAR_5 = VAR_4;
 u32 VAR_6;


 VAR_6 = FUNC_2(VAR_5, VAR_0);
 if (VAR_6 == 0 || VAR_6 == ~0)
  return VAR_2;

 FUNC_1(&VAR_5->st_le[VAR_5->st_idx]);

 FUNC_0(&VAR_5->napi);

 return VAR_1;
}
