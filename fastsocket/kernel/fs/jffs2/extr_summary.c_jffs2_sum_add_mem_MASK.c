
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int nodetype; union jffs2_sum_mem* next; } ;
struct TYPE_7__ {int version; int xid; } ;
struct TYPE_6__ {int ino; int nsize; } ;
struct TYPE_5__ {int inode; } ;
union jffs2_sum_mem {TYPE_4__ u; TYPE_3__ x; TYPE_2__ d; TYPE_1__ i; } ;
struct jffs2_summary {int sum_num; int sum_size; union jffs2_sum_mem* sum_list_tail; union jffs2_sum_mem* sum_list_head; } ;






 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct jffs2_summary *VAR_3, union jffs2_sum_mem *VAR_4)
{
 if (!VAR_3->sum_list_head)
  VAR_3->sum_list_head = (union jffs2_sum_mem *) VAR_4;
 if (VAR_3->sum_list_tail)
  VAR_3->sum_list_tail->u.next = (union jffs2_sum_mem *) VAR_4;
 VAR_3->sum_list_tail = (union jffs2_sum_mem *) VAR_4;

 switch (FUNC_3(VAR_4->u.nodetype)) {
  case 130:
   VAR_3->sum_size += VAR_0;
   VAR_3->sum_num++;
   FUNC_2("inode (%u) added to summary\n",
      FUNC_4(VAR_4->i.inode));
   break;
  case 131:
   VAR_3->sum_size += FUNC_0(VAR_4->d.nsize);
   VAR_3->sum_num++;
   FUNC_2("dirent (%u) added to summary\n",
      FUNC_4(VAR_4->d.ino));
   break;
  default:
   FUNC_1("UNKNOWN node type %u\n",
         FUNC_3(VAR_4->u.nodetype));
   return 1;
 }
 return 0;
}
