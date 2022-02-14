
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ipath_sge {int length; int sge_length; unsigned int m; unsigned int n; void* vaddr; struct ipath_mregion* mr; } ;
struct ipath_sge_state {int num_sge; int * sg_list; struct ipath_sge sge; } ;
struct TYPE_4__ {scalar_t__ pd; int device; } ;
struct ipath_qp {TYPE_1__ ibqp; } ;
struct ipath_pd {scalar_t__ user; } ;
struct ipath_mregion {int lkey; scalar_t__ pd; scalar_t__ iova; int length; int access_flags; TYPE_3__** map; scalar_t__ offset; } ;
struct ipath_lkey_table {struct ipath_mregion** table; } ;
struct ipath_ibdev {struct ipath_lkey_table lk_table; } ;
struct TYPE_6__ {TYPE_2__* segs; } ;
struct TYPE_5__ {size_t length; void* vaddr; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct ipath_ibdev* FUNC_0 (int ) ;
 struct ipath_pd* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct ipath_qp *VAR_2, struct ipath_sge_state *VAR_3,
    u32 VAR_4, u64 VAR_5, u32 VAR_6, int VAR_7)
{
 struct ipath_ibdev *VAR_8 = FUNC_0(VAR_2->ibqp.device);
 struct ipath_lkey_table *VAR_9 = &VAR_8->lk_table;
 struct ipath_sge *VAR_10 = &VAR_3->sge;
 struct ipath_mregion *VAR_11;
 unsigned VAR_12, VAR_13;
 size_t VAR_14;
 int VAR_15;





 if (VAR_6 == 0) {

  struct ipath_pd *VAR_16 = FUNC_1(VAR_2->ibqp.pd);

  if (VAR_16->user) {
   VAR_15 = 0;
   goto bail;
  }
  VAR_10->mr = ((void*)0);
  VAR_10->vaddr = (void *) VAR_5;
  VAR_10->length = VAR_4;
  VAR_10->sge_length = VAR_4;
  VAR_3->sg_list = ((void*)0);
  VAR_3->num_sge = 1;
  VAR_15 = 1;
  goto bail;
 }

 VAR_11 = VAR_9->table[(VAR_6 >> (32 - VAR_1))];
 if (FUNC_2(VAR_11 == ((void*)0) || VAR_11->lkey != VAR_6 ||
       VAR_2->ibqp.pd != VAR_11->pd)) {
  VAR_15 = 0;
  goto bail;
 }

 VAR_14 = VAR_5 - VAR_11->iova;
 if (FUNC_2(VAR_5 < VAR_11->iova || VAR_14 + VAR_4 > VAR_11->length ||
       (VAR_11->access_flags & VAR_7) == 0)) {
  VAR_15 = 0;
  goto bail;
 }

 VAR_14 += VAR_11->offset;
 VAR_13 = 0;
 VAR_12 = 0;
 while (VAR_14 >= VAR_11->map[VAR_13]->segs[VAR_12].length) {
  VAR_14 -= VAR_11->map[VAR_13]->segs[VAR_12].length;
  VAR_12++;
  if (VAR_12 >= VAR_0) {
   VAR_13++;
   VAR_12 = 0;
  }
 }
 VAR_10->mr = VAR_11;
 VAR_10->vaddr = VAR_11->map[VAR_13]->segs[VAR_12].vaddr + VAR_14;
 VAR_10->length = VAR_11->map[VAR_13]->segs[VAR_12].length - VAR_14;
 VAR_10->sge_length = VAR_4;
 VAR_10->m = VAR_13;
 VAR_10->n = VAR_12;
 VAR_3->sg_list = ((void*)0);
 VAR_3->num_sge = 1;

 VAR_15 = 1;

bail:
 return VAR_15;
}
