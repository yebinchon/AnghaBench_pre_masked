
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int irqreturn_t ;
typedef scalar_t__ intr_ret_t ;
struct TYPE_7__ {scalar_t__ xfer_required; } ;
struct TYPE_8__ {TYPE_1__ dma; scalar_t__ fast; } ;
typedef TYPE_2__ AS_Host ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_4, void *VAR_5)
{
    AS_Host *VAR_6 = (AS_Host *)VAR_5;
    intr_ret_t VAR_7;
    int VAR_8;
    int VAR_9 = 0;

    do {
 VAR_7 = VAR_0;

 VAR_8 = FUNC_4(VAR_6->fast + VAR_2);

 if (VAR_8 & 2) {
     FUNC_0(VAR_6);
     VAR_8 = FUNC_4(VAR_6->fast + VAR_2);
 }

 if (VAR_8 & 8)
     VAR_7 = FUNC_3(VAR_6, VAR_9);






 if (VAR_6->dma.xfer_required)
     FUNC_1(VAR_6);

 if (VAR_7 == VAR_1)
     VAR_7 = FUNC_2(VAR_6);

 VAR_9 = 1;
    } while (VAR_7 != VAR_0);

    return VAR_3;
}
