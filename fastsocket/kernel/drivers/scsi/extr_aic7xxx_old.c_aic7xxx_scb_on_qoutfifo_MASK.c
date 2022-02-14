
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aic7xxx_scb {TYPE_1__* hscb; } ;
struct aic7xxx_host {scalar_t__* qoutfifo; int qoutfifonext; } ;
struct TYPE_2__ {scalar_t__ tag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct aic7xxx_host *VAR_3, struct aic7xxx_scb *VAR_4)
{
  int VAR_5=0;

  while(VAR_3->qoutfifo[(VAR_3->qoutfifonext + VAR_5) & 0xff ] != VAR_1)
  {
    if(VAR_3->qoutfifo[(VAR_3->qoutfifonext + VAR_5) & 0xff ] == VAR_4->hscb->tag)
      return VAR_2;
    else
      VAR_5++;
  }
  return VAR_0;
}
