
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm5974_param {int dim; int devmax; int devmin; } ;



__attribute__((used)) static inline int FUNC_0(const struct bcm5974_param *VAR_0, int VAR_1)
{
 return VAR_1 * VAR_0->dim / (VAR_0->devmax - VAR_0->devmin);
}
