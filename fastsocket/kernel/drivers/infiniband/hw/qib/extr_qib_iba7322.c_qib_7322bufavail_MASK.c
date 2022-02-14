
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qib_devdata {int flags; scalar_t__ int_counter; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int sps_ints; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct qib_devdata*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_1 (struct qib_devdata*,int ) ;
 int FUNC_2 (struct qib_devdata*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct qib_devdata *VAR_9 = VAR_8;

 if ((VAR_9->flags & (VAR_4 | VAR_1)) != VAR_4)






  return VAR_0;

 VAR_6.sps_ints++;
 if (VAR_9->int_counter != (u32) -1)
  VAR_9->int_counter++;


 FUNC_2(VAR_9, VAR_5, VAR_3);


 if (VAR_9->flags & VAR_2)
  FUNC_0(VAR_9);
 else
  FUNC_1(VAR_9, 0);

 return VAR_0;
}
