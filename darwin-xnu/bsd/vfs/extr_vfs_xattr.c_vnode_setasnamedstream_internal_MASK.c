
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int uint32_t ;
struct TYPE_10__ {int v_lflag; int v_flag; TYPE_1__* v_mount; } ;
struct TYPE_9__ {int mnt_kern_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(vnode_t VAR_5, vnode_t VAR_6)
{
 uint32_t VAR_7 = VAR_1;

 if ((VAR_5->v_mount->mnt_kern_flag & VAR_0) == 0) {
  VAR_7 |= VAR_2;
 }


 FUNC_0(VAR_6);
 VAR_6->v_flag |= VAR_7;
 FUNC_1(VAR_6);


 FUNC_0(VAR_5);
 VAR_5->v_lflag |= VAR_3;
 FUNC_1(VAR_5);
 FUNC_2(VAR_6, VAR_5, ((void*)0), 0, 0, VAR_4);

 return;
}
