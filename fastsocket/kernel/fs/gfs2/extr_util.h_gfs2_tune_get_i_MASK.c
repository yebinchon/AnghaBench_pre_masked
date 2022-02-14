
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_tune {int gt_spin; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct gfs2_tune *VAR_0,
        unsigned int *VAR_1)
{
 unsigned int VAR_2;
 FUNC_0(&VAR_0->gt_spin);
 VAR_2 = *VAR_1;
 FUNC_1(&VAR_0->gt_spin);
 return VAR_2;
}
