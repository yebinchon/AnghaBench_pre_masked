
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwrng {scalar_t__ priv; } ;
struct TYPE_2__ {int present; int completion; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct hwrng *VAR_1, int VAR_2)
{
 if (VAR_1->priv == 0)
  return 1;

 if (!VAR_2 || VAR_0->present)
  return VAR_0->present;

 FUNC_0(&VAR_0->completion);

 return 1;
}
