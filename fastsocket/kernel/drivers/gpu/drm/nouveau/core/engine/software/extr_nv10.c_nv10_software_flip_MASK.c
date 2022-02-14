
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* flip ) (int ) ;int flip_data; } ;
struct nv10_software_chan {TYPE_1__ base; } ;
struct nouveau_object {int parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_1, u32 VAR_2,
     void *VAR_3, u32 VAR_4)
{
 struct nv10_software_chan *VAR_5 = (void *)FUNC_0(VAR_1->parent);
 if (VAR_5->base.flip)
  return VAR_5->base.flip(VAR_5->base.flip_data);
 return -VAR_0;
}
