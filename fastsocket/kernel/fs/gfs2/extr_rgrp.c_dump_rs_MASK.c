
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int offset; } ;
struct gfs2_blkreserv {int rs_free; TYPE_1__ rs_rbm; scalar_t__ rs_inum; } ;


 int FUNC_0 (struct seq_file*,char*,unsigned long long,unsigned long long,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, struct gfs2_blkreserv *VAR_1)
{
 FUNC_0(VAR_0, "  B: n:%llu s:%llu b:%u f:%u\n",
         (unsigned long long)VAR_1->rs_inum,
         (unsigned long long)FUNC_1(&VAR_1->rs_rbm),
         VAR_1->rs_rbm.offset, VAR_1->rs_free);
}
