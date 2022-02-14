
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_chan {scalar_t__ handle; } ;
struct nouveau_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nouveau_object*,int ,scalar_t__) ;
 struct nouveau_object* FUNC_1 (struct nouveau_object*,int ) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_object *VAR_2, struct nv50_chan *VAR_3)
{
 struct nouveau_object *VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3->handle)
  FUNC_0(VAR_4, VAR_0, VAR_3->handle);
}
