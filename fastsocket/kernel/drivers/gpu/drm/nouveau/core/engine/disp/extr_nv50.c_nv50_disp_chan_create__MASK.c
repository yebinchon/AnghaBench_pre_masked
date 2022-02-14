
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_disp_chan {int chid; } ;
struct nv50_disp_base {int chan; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,int *,unsigned long long,int,void**) ;

int
FUNC_1(struct nouveau_object *VAR_2,
         struct nouveau_object *VAR_3,
         struct nouveau_oclass *VAR_4, int VAR_5,
         int VAR_6, void **VAR_7)
{
 struct nv50_disp_base *VAR_8 = (void *)VAR_2;
 struct nv50_disp_chan *VAR_9;
 int VAR_10;

 if (VAR_8->chan & (1 << VAR_5))
  return -VAR_0;
 VAR_8->chan |= (1 << VAR_5);

 VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_4, 0, ((void*)0),
         (1ULL << VAR_1),
         VAR_6, VAR_7);
 VAR_9 = *VAR_7;
 if (VAR_10)
  return VAR_10;

 VAR_9->chid = VAR_5;
 return 0;
}
