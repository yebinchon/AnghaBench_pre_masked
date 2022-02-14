
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union cdu_context {int dummy; } cdu_context ;
struct ilt_line {int dummy; } ;
struct host_sp_status_block {int dummy; } ;
struct bnx2x_slowpath {int dummy; } ;
struct bnx2x {int eq_mapping; int eq_ring; int spq_mapping; int spq; TYPE_2__* ilt; TYPE_1__* context; int slowpath_mapping; int slowpath; int def_status_blk_mapping; int def_status_blk; int t2_mapping; int t2; } ;
struct TYPE_4__ {int lines; } ;
struct TYPE_3__ {int size; int cxt_mapping; int vcxt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (int ,int *,int) ;
 int VAR_1 ;
 int FUNC_4 (struct bnx2x*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct bnx2x*) ;
 scalar_t__ FUNC_6 (struct bnx2x*,int ) ;
 scalar_t__ FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (int ,int) ;

int FUNC_9(struct bnx2x *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 if (!FUNC_4(VAR_7) && !VAR_7->t2)

  FUNC_3(VAR_7->t2, &VAR_7->t2_mapping, VAR_6);

 FUNC_3(VAR_7->def_status_blk, &VAR_7->def_status_blk_mapping,
   sizeof(struct host_sp_status_block));

 FUNC_3(VAR_7->slowpath, &VAR_7->slowpath_mapping,
   sizeof(struct bnx2x_slowpath));
 VAR_10 = sizeof(union cdu_context) * FUNC_2(VAR_7);

 for (VAR_8 = 0, VAR_9 = 0; VAR_9 < VAR_10; VAR_8++) {
  VAR_7->context[VAR_8].size = FUNC_8(VAR_1,
       (VAR_10 - VAR_9));
  FUNC_3(VAR_7->context[VAR_8].vcxt,
    &VAR_7->context[VAR_8].cxt_mapping,
    VAR_7->context[VAR_8].size);
  VAR_9 += VAR_7->context[VAR_8].size;
 }
 FUNC_0(VAR_7->ilt->lines, sizeof(struct ilt_line) * VAR_3);

 if (FUNC_6(VAR_7, VAR_4))
  goto alloc_mem_err;

 if (FUNC_7(VAR_7))
  goto alloc_mem_err;


 FUNC_3(VAR_7->spq, &VAR_7->spq_mapping, VAR_0);


 FUNC_3(VAR_7->eq_ring, &VAR_7->eq_mapping,
   VAR_0 * VAR_5);

 return 0;

alloc_mem_err:
 FUNC_5(VAR_7);
 FUNC_1("Can't allocate memory\n");
 return -VAR_2;
}
