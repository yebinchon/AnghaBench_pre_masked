
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int groups; int release; int * bus; int parent; } ;
struct TYPE_3__ {int res_id; int release; int rank; int data_state; int oper_state; int persistence; } ;
struct scm_device {unsigned int nr_max_block; unsigned long size; int lock; TYPE_2__ dev; TYPE_1__ attrs; scalar_t__ address; } ;
struct sale {int rid; int r; int rank; int data_state; int op_state; int p; scalar_t__ sa; } ;


 int FUNC_0 (TYPE_2__*,char*,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct scm_device *VAR_4, struct sale *VAR_5,
    unsigned int VAR_6, unsigned int VAR_7)
{
 FUNC_0(&VAR_4->dev, "%016llx", (unsigned long long) VAR_5->sa);
 VAR_4->nr_max_block = VAR_7;
 VAR_4->address = VAR_5->sa;
 VAR_4->size = 1UL << VAR_6;
 VAR_4->attrs.rank = VAR_5->rank;
 VAR_4->attrs.persistence = VAR_5->p;
 VAR_4->attrs.oper_state = VAR_5->op_state;
 VAR_4->attrs.data_state = VAR_5->data_state;
 VAR_4->attrs.rank = VAR_5->rank;
 VAR_4->attrs.release = VAR_5->r;
 VAR_4->attrs.res_id = VAR_5->rid;
 VAR_4->dev.parent = VAR_1;
 VAR_4->dev.bus = &VAR_0;
 VAR_4->dev.release = VAR_3;
 VAR_4->dev.groups = VAR_2;
 FUNC_1(&VAR_4->lock);
}
