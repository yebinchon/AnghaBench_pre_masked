
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm5974_param {scalar_t__ dim; } ;


 int FUNC_0 (int,int ,scalar_t__) ;
 int FUNC_1 (struct bcm5974_param const*,int) ;

__attribute__((used)) static inline int FUNC_2(const struct bcm5974_param *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1);

 return FUNC_0(VAR_2, 0, VAR_0->dim - 1);
}
