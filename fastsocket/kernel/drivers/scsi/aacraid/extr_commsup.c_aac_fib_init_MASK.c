
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* ReceiverFibAddress; } ;
struct TYPE_6__ {void* SenderSize; TYPE_1__ u; void* XferState; void* Size; int StructType; } ;
struct hw_fib {TYPE_3__ header; } ;
struct fib {int hw_fib_pa; TYPE_2__* dev; struct hw_fib* hw_fib_va; } ;
struct aac_fibhdr {int dummy; } ;
struct TYPE_5__ {int max_fib_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

void FUNC_3(struct fib *VAR_5)
{
 struct hw_fib *VAR_6 = VAR_5->hw_fib_va;

 FUNC_2(&VAR_6->header, 0, sizeof(struct aac_fibhdr));
 VAR_6->header.StructType = VAR_0;
 VAR_6->header.Size = FUNC_0(VAR_5->dev->max_fib_size);
 VAR_6->header.XferState = FUNC_1(VAR_4 | VAR_3 | VAR_2 | VAR_1);
 VAR_6->header.u.ReceiverFibAddress = FUNC_1(VAR_5->hw_fib_pa);
 VAR_6->header.SenderSize = FUNC_0(VAR_5->dev->max_fib_size);
}
