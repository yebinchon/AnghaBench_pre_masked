
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read; int sync; int emit; } ;
struct nv04_fence_chan {TYPE_1__ base; } ;
struct nouveau_channel {struct nv04_fence_chan* fence; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nv04_fence_chan* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct nouveau_channel *VAR_5)
{
 struct nv04_fence_chan *VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (VAR_6) {
  FUNC_1(&VAR_6->base);
  VAR_6->base.emit = VAR_2;
  VAR_6->base.sync = VAR_4;
  VAR_6->base.read = VAR_3;
  VAR_5->fence = VAR_6;
  return 0;
 }
 return -VAR_0;
}
