
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct buflists {int dummy; } ;
typedef int buf_t ;
struct TYPE_3__ {int v_iterblkflags; struct buflists v_cleanblkhd; struct buflists v_dirtyblkhd; } ;


 int FUNC_0 (struct buflists*) ;
 int FUNC_1 (struct buflists*) ;
 int FUNC_2 (struct buflists*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int*) ;

__attribute__((used)) static void
FUNC_5(vnode_t VAR_4, struct buflists *VAR_5, int VAR_6)
{
 struct buflists * VAR_7;
 buf_t VAR_8;

 if (VAR_6 & VAR_0)
  VAR_7 = &VAR_4->v_dirtyblkhd;
 else
  VAR_7 = &VAR_4->v_cleanblkhd;

 while (!FUNC_0(VAR_5)) {
  VAR_8 = FUNC_1(VAR_5);
  FUNC_3(VAR_8, VAR_3);
  FUNC_2(VAR_7, VAR_8, VAR_3);
 }
 VAR_4->v_iterblkflags &= ~VAR_1;

 if (VAR_4->v_iterblkflags & VAR_2) {
  VAR_4->v_iterblkflags &= ~VAR_2;
  FUNC_4(&VAR_4->v_iterblkflags);
 }
}
