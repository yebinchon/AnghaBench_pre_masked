
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qib_pportdata {scalar_t__ hw_pidx; struct qib_devdata* dd; } ;
struct qib_devdata {int flags; scalar_t__ int_counter; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int sps_ints; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct qib_pportdata*,int ) ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (struct qib_devdata*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct qib_pportdata *VAR_9 = VAR_8;
 struct qib_devdata *VAR_10 = VAR_9->dd;

 if ((VAR_10->flags & (VAR_2 | VAR_1)) != VAR_2)






  return VAR_0;

 VAR_6.sps_ints++;
 if (VAR_10->int_counter != (u32) -1)
  VAR_10->int_counter++;


 FUNC_2(VAR_10, VAR_4, VAR_9->hw_pidx ?
         FUNC_0(VAR_3, 1) :
         FUNC_0(VAR_3, 0));
 FUNC_1(VAR_9, VAR_5);

 return VAR_0;
}
