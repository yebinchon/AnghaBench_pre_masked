
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regions; int * region; int (* prog ) (struct nouveau_fb*,int,int *) ;} ;
struct nouveau_fb {TYPE_1__ tile; int base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nouveau_fb*,int,int *) ;

int
FUNC_2(struct nouveau_fb *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_1 = FUNC_0(&VAR_0->base);
 if (VAR_1)
  return VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_0->tile.regions; VAR_2++)
  VAR_0->tile.prog(VAR_0, VAR_2, &VAR_0->tile.region[VAR_2]);

 return 0;
}
