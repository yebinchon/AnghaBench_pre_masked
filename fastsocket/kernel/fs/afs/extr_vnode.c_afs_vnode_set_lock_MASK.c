
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct key {int dummy; } ;
struct TYPE_6__ {int unique; int vnode; int vid; } ;
struct afs_vnode {TYPE_1__ fid; TYPE_4__* volume; } ;
struct TYPE_7__ {int s_addr; } ;
struct afs_server {TYPE_2__ addr; } ;
typedef int afs_lock_type_t ;
struct TYPE_8__ {int name; } ;
struct TYPE_10__ {TYPE_3__ vldb; } ;
struct TYPE_9__ {TYPE_5__* vlocation; } ;


 scalar_t__ FUNC_0 (struct afs_server*) ;
 int FUNC_1 (struct afs_server*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct afs_server*,struct key*,struct afs_vnode*,int ,int *) ;
 int FUNC_6 (struct afs_server*) ;
 int VAR_0 ;
 struct afs_server* FUNC_7 (struct afs_vnode*) ;
 int FUNC_8 (struct afs_vnode*,struct afs_server*,int) ;
 int FUNC_9 (struct key*) ;
 int FUNC_10 (int ) ;

int FUNC_11(struct afs_vnode *VAR_1, struct key *VAR_2,
         afs_lock_type_t VAR_3)
{
 struct afs_server *VAR_4;
 int VAR_5;

 FUNC_3("%s{%x:%u.%u},%x,%u",
        VAR_1->volume->vlocation->vldb.name,
        VAR_1->fid.vid,
        VAR_1->fid.vnode,
        VAR_1->fid.unique,
        FUNC_9(VAR_2), VAR_3);

 do {

  VAR_4 = FUNC_7(VAR_1);
  if (FUNC_0(VAR_4))
   goto no_server;

  FUNC_2("USING SERVER: %08x\n", FUNC_10(VAR_4->addr.s_addr));

  VAR_5 = FUNC_5(VAR_4, VAR_2, VAR_1, VAR_3, &VAR_0);

 } while (!FUNC_8(VAR_1, VAR_4, VAR_5));


 if (VAR_5 == 0)
  FUNC_6(VAR_4);

 FUNC_4(" = %d", VAR_5);
 return VAR_5;

no_server:
 return FUNC_1(VAR_4);
}
