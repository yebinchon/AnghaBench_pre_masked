
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ id; } ;
struct TYPE_4__ {TYPE_1__ cq; } ;
struct ocrdma_dev {TYPE_2__ mq; } ;


 int FUNC_0 (struct ocrdma_dev*,scalar_t__) ;
 int FUNC_1 (struct ocrdma_dev*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_dev *VAR_0, u16 VAR_1)
{

 if (VAR_1 == VAR_0->mq.cq.id)
  FUNC_0(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);
}
