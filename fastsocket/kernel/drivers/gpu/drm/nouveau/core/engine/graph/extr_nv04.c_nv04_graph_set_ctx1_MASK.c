
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv04_graph_priv {int dummy; } ;
struct nouveau_object {scalar_t__ engine; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nv04_graph_priv*,int ) ;
 int FUNC_1 (struct nouveau_object*,int) ;
 int FUNC_2 (struct nouveau_object*,int,int ) ;
 int FUNC_3 (struct nv04_graph_priv*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_object *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct nv04_graph_priv *VAR_6 = (void *)VAR_3->engine;
 int VAR_7 = (FUNC_0(VAR_6, VAR_2) >> 13) & 0x7;
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_3, 0x00);
 VAR_8 &= ~VAR_4;
 VAR_8 |= VAR_5;
 FUNC_2(VAR_3, 0x00, VAR_8);

 FUNC_3(VAR_6, VAR_1, VAR_8);
 FUNC_3(VAR_6, VAR_0 + (VAR_7<<2), VAR_8);
}
