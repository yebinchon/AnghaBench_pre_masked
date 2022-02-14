
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
struct buflists {int dummy; } ;
typedef TYPE_3__* buf_t ;
struct TYPE_8__ {scalar_t__ le_next; } ;
struct TYPE_10__ {int b_flags; TYPE_1__ b_vnbufs; } ;
struct TYPE_9__ {struct buflists v_cleanblkhd; struct buflists v_dirtyblkhd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,struct buflists*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(buf_t VAR_3, vnode_t VAR_4)
{
 struct buflists *VAR_5;

 if (VAR_4 == ((void*)0)) {
  FUNC_5("buf_reassign: NULL");
  return;
 }
 FUNC_3(VAR_2);




 if (VAR_3->b_vnbufs.le_next != VAR_1)
  FUNC_2(VAR_3);




 if (FUNC_0(VAR_3->b_flags, VAR_0))
  VAR_5 = &VAR_4->v_dirtyblkhd;
 else
  VAR_5 = &VAR_4->v_cleanblkhd;
 FUNC_1(VAR_3, VAR_5);

 FUNC_4(VAR_2);
}
