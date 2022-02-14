
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct jffs2_sb_info {int inocache_lock; int inocache_wq; } ;
struct jffs2_raw_node_ref {int dummy; } ;
struct jffs2_raw_inode {int dummy; } ;
struct jffs2_inode_info {TYPE_1__* inocache; } ;
struct jffs2_inode_cache {int dummy; } ;
struct TYPE_5__ {int state; int ino; int pino_nlink; struct jffs2_raw_node_ref* nodes; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;






 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct jffs2_sb_info*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (struct jffs2_sb_info*,struct jffs2_inode_info*,struct jffs2_raw_inode*) ;
 TYPE_1__* FUNC_6 (struct jffs2_sb_info*,int) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct jffs2_sb_info *VAR_2, struct jffs2_inode_info *VAR_3,
   uint32_t VAR_4, struct jffs2_raw_inode *VAR_5)
{
 FUNC_2("read inode #%u\n", VAR_4);

 retry_inocache:
 FUNC_9(&VAR_2->inocache_lock);
 VAR_3->inocache = FUNC_6(VAR_2, VAR_4);

 if (VAR_3->inocache) {

  switch(VAR_3->inocache->state) {
  case 128:
  case 133:
   VAR_3->inocache->state = 129;
   break;

  case 132:
  case 131:



   FUNC_2("waiting for ino #%u in state %d\n", VAR_4, VAR_3->inocache->state);
   FUNC_8(&VAR_2->inocache_wq, &VAR_2->inocache_lock);
   goto retry_inocache;

  case 129:
  case 130:



   FUNC_1("Eep. Trying to read_inode #%u when it's already in state %d!\n", VAR_4, VAR_3->inocache->state);

   VAR_3->inocache = ((void*)0);
   break;

  default:
   FUNC_0();
  }
 }
 FUNC_10(&VAR_2->inocache_lock);

 if (!VAR_3->inocache && VAR_4 == 1) {

  VAR_3->inocache = FUNC_4();
  if (!VAR_3->inocache) {
   FUNC_1("cannot allocate inocache for root inode\n");
   return -VAR_1;
  }
  FUNC_2("creating inocache for root inode\n");
  FUNC_7(VAR_3->inocache, 0, sizeof(struct jffs2_inode_cache));
  VAR_3->inocache->ino = VAR_3->inocache->pino_nlink = 1;
  VAR_3->inocache->nodes = (struct jffs2_raw_node_ref *)VAR_3->inocache;
  VAR_3->inocache->state = 129;
  FUNC_3(VAR_2, VAR_3->inocache);
 }
 if (!VAR_3->inocache) {
  FUNC_1("requestied to read an nonexistent ino %u\n", VAR_4);
  return -VAR_0;
 }

 return FUNC_5(VAR_2, VAR_3, VAR_5);
}
