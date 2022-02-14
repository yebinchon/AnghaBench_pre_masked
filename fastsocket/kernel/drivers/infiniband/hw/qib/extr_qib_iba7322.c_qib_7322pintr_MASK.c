
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qib_devdata {int flags; scalar_t__ int_counter; } ;
struct qib_ctxtdata {unsigned long long ctxt; struct qib_devdata* dd; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int sps_ints; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qib_ctxtdata*,int *,scalar_t__*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (struct qib_devdata*,int ,unsigned long long) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_7, void *VAR_8)
{
 struct qib_ctxtdata *VAR_9 = VAR_8;
 struct qib_devdata *VAR_10 = VAR_9->dd;
 u32 VAR_11;

 if ((VAR_10->flags & (VAR_4 | VAR_1)) != VAR_4)






  return VAR_0;

 VAR_6.sps_ints++;
 if (VAR_10->int_counter != (u32) -1)
  VAR_10->int_counter++;


 FUNC_1(VAR_10, VAR_5, ((1ULL << VAR_2) |
         (1ULL << VAR_3)) << VAR_9->ctxt);

 FUNC_0(VAR_9, ((void*)0), &VAR_11);

 return VAR_0;
}
