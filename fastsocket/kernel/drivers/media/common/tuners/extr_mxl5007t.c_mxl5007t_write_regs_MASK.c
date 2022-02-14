
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_pair_t {scalar_t__ val; scalar_t__ reg; } ;
struct mxl5007t_state {int dummy; } ;


 int FUNC_0 (struct mxl5007t_state*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mxl5007t_state *VAR_0,
          struct reg_pair_t *VAR_1)
{
 unsigned int VAR_2 = 0;
 int VAR_3 = 0;

 while ((VAR_3 == 0) && (VAR_1[VAR_2].reg || VAR_1[VAR_2].val)) {
  VAR_3 = FUNC_0(VAR_0,
      VAR_1[VAR_2].reg, VAR_1[VAR_2].val);
  VAR_2++;
 }
 return VAR_3;
}
