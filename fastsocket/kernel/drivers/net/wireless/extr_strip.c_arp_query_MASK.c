
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int addr_len; } ;
struct neighbour {int nud_state; int ha; int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int ,int ) ;
 struct neighbour* FUNC_1 (int *,int *,struct net_device*) ;
 int FUNC_2 (struct neighbour*) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_3, u32 VAR_4,
       struct net_device *VAR_5)
{
 struct neighbour *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_1(&VAR_1, &VAR_4, VAR_5);

 if (VAR_6 != ((void*)0)) {
  VAR_6->used = VAR_2;
  if (VAR_6->nud_state & VAR_0) {
   FUNC_0(VAR_3, VAR_6->ha, VAR_5->addr_len);
   VAR_7 = 1;
  }
  FUNC_2(VAR_6);
 }
 return VAR_7;
}
