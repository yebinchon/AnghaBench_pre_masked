
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int* array; } ;
struct scsi_qla_host {TYPE_1__ reset_tmplt; } ;
struct qla4_83xx_rmw {int index_a; int test_mask; int shl; int shr; int or_value; int xor_value; } ;


 int FUNC_0 (struct scsi_qla_host*,int,int*) ;
 int FUNC_1 (struct scsi_qla_host*,int,int) ;

__attribute__((used)) static void FUNC_2(struct scsi_qla_host *VAR_0, uint32_t VAR_1,
      uint32_t VAR_2,
      struct qla4_83xx_rmw *VAR_3)
{
 uint32_t VAR_4;

 if (VAR_3->index_a)
  VAR_4 = VAR_0->reset_tmplt.array[VAR_3->index_a];
 else
  FUNC_0(VAR_0, VAR_1, &VAR_4);

 VAR_4 &= VAR_3->test_mask;
 VAR_4 <<= VAR_3->shl;
 VAR_4 >>= VAR_3->shr;
 VAR_4 |= VAR_3->or_value;
 VAR_4 ^= VAR_3->xor_value;

 FUNC_1(VAR_0, VAR_2, VAR_4);

 return;
}
