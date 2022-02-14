
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_3__ {int ovf; scalar_t__ reset_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 () ;
 TYPE_1__* VAR_6 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_7, void *VAR_8)
{
 int VAR_9;
 u32 VAR_10;

 if (VAR_5->id == VAR_4)
  FUNC_0();
 else
  FUNC_1();

 for (VAR_9 = VAR_0; VAR_9 < VAR_2; VAR_9++) {
  if (!VAR_6[VAR_9].ovf)
   continue;

  FUNC_5(VAR_9, -(u32)VAR_6[VAR_9].reset_counter);
  FUNC_3(FUNC_2(), VAR_9);
  VAR_6[VAR_9].ovf--;
 }

 VAR_10 = FUNC_4() | VAR_3;
 FUNC_6(VAR_10);

 return VAR_1;
}
