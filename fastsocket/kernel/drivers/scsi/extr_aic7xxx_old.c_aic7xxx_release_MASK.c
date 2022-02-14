
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {struct aic7xxx_host* next; int pdev; int base; scalar_t__ maddr; scalar_t__ irq; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct aic7xxx_host*) ;
 struct aic7xxx_host* VAR_2 ;
 int FUNC_1 (scalar_t__,struct aic7xxx_host*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct Scsi_Host *VAR_3)
{
  struct aic7xxx_host *VAR_4 = (struct aic7xxx_host *) VAR_3->hostdata;
  struct aic7xxx_host *VAR_5, *VAR_6;

  if(VAR_4->irq)
    FUNC_1(VAR_4->irq, VAR_4);






  if(!VAR_4->pdev)
    FUNC_5(VAR_4->base, VAR_0 - VAR_1);






  VAR_6 = ((void*)0);
  VAR_5 = VAR_2;
  while(VAR_5 != ((void*)0))
  {
    if(VAR_5 == VAR_4)
    {
      if(VAR_6 == ((void*)0))
        VAR_2 = VAR_5->next;
      else
        VAR_6->next = VAR_5->next;
    }
    else
    {
      VAR_6 = VAR_5;
    }
    VAR_5 = VAR_5->next;
  }
  FUNC_0(VAR_4);
  return(0);
}
