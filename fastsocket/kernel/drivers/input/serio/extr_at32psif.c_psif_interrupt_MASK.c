
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psif {int io; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*) ;
 unsigned long FUNC_2 (struct psif*,int ) ;
 int FUNC_3 (int ,unsigned char,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_8, void *VAR_9)
{
 struct psif *VAR_10 = VAR_9;
 int VAR_11 = VAR_1;
 unsigned int VAR_12 = 0;
 unsigned long VAR_13;

 VAR_13 = FUNC_2(VAR_10, VAR_7);

 if (VAR_13 & FUNC_0(VAR_5)) {
  unsigned char VAR_14 = (unsigned char) FUNC_2(VAR_10, VAR_4);

  if (VAR_13 & FUNC_0(VAR_3))
   VAR_12 |= VAR_6;
  if (VAR_13 & FUNC_0(VAR_2))
   FUNC_1(&VAR_10->pdev->dev, "overrun read error\n");

  FUNC_3(VAR_10->io, VAR_14, VAR_12);

  VAR_11 = VAR_0;
 }

 return VAR_11;
}
