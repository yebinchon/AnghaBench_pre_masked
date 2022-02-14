
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpe {scalar_t__ load_addr; int list; } ;


 int FUNC_0 (struct vpe*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vpe*) ;

__attribute__((used)) static void FUNC_3(struct vpe *VAR_0)
{
 FUNC_1(&VAR_0->list);
 if (VAR_0->load_addr)
  FUNC_2(VAR_0);
 FUNC_0(VAR_0);
}
