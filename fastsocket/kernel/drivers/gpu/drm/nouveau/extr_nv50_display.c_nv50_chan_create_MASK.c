
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nv50_chan {int handle; int user; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct nouveau_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct nouveau_object*,int ,int const,int const,void*,int ,int *) ;
 struct nouveau_object* FUNC_3 (struct nouveau_object*,int ) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_2, u32 VAR_3, u8 VAR_4,
   void *VAR_5, u32 VAR_6, struct nv50_chan *VAR_7)
{
 struct nouveau_object *VAR_8 = FUNC_3(VAR_2, VAR_1);
 const u32 VAR_9 = FUNC_1(VAR_3, VAR_2);
 const u32 VAR_10 = FUNC_0(VAR_3, VAR_4);
 int VAR_11;

 VAR_11 = FUNC_2(VAR_8, VAR_0, VAR_10,
     VAR_9, VAR_5, VAR_6, &VAR_7->user);
 if (VAR_11)
  return VAR_11;

 VAR_7->handle = VAR_10;
 return 0;
}
