
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int cq_context; int (* comp_handler ) (TYPE_1__*,int ) ;} ;
struct ipath_cq {scalar_t__ triggered; TYPE_1__ ibcq; } ;


 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct ipath_cq *VAR_1 = (struct ipath_cq *)VAR_0;
 for (;;) {
  u8 VAR_2 = VAR_1->triggered;

  VAR_1->ibcq.comp_handler(&VAR_1->ibcq, VAR_1->ibcq.cq_context);

  if (VAR_1->triggered == VAR_2)
   return;
 }
}
