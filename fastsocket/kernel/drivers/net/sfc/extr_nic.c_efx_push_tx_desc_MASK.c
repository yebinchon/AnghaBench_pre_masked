
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct efx_tx_queue {unsigned int write_count; unsigned int ptr_mask; int queue; int efx; } ;
typedef int efx_qword_t ;
struct TYPE_4__ {int * qword; } ;
typedef TYPE_1__ efx_oword_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__,int ,int,int ,unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_3(struct efx_tx_queue *VAR_5,
        const efx_qword_t *VAR_6)
{
 unsigned VAR_7;
 efx_oword_t VAR_8;

 FUNC_0(VAR_0 != 0);
 FUNC_0(VAR_3 != VAR_4);

 VAR_7 = VAR_5->write_count & VAR_5->ptr_mask;
 FUNC_1(VAR_8, VAR_1, 1,
        VAR_2, VAR_7);
 VAR_8.qword[0] = *VAR_6;
 FUNC_2(VAR_5->efx, &VAR_8,
   VAR_4, VAR_5->queue);
}
