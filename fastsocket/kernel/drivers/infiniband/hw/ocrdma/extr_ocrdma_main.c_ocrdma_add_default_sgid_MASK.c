
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subnet_prefix; } ;
union ib_gid {int * raw; TYPE_1__ global; } ;
struct ocrdma_dev {union ib_gid* sgid_tbl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocrdma_dev*,int *) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_dev *VAR_0)
{

 union ib_gid *VAR_1 = &VAR_0->sgid_tbl[0];

 VAR_1->global.subnet_prefix = FUNC_0(0xfe80000000000000LL);
 FUNC_1(VAR_0, &VAR_1->raw[8]);
}
