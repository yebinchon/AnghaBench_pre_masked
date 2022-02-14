
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aic7xxx_scb {TYPE_2__* hscb; } ;
struct aic7xxx_host {TYPE_1__* scb_data; } ;
struct TYPE_4__ {unsigned char tag; } ;
struct TYPE_3__ {unsigned char maxhscbs; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (struct aic7xxx_host*,int ) ;
 int FUNC_1 (struct aic7xxx_host*,unsigned char,int ) ;

__attribute__((used)) static unsigned char
FUNC_2(struct aic7xxx_host *VAR_3, struct aic7xxx_scb *VAR_4)
{
  unsigned char VAR_5;
  unsigned char VAR_6;

  VAR_5 = FUNC_0(VAR_3, VAR_0);
  VAR_6 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_3->scb_data->maxhscbs; VAR_6++)
  {
    FUNC_1(VAR_3, VAR_6, VAR_0);
    if (FUNC_0(VAR_3, VAR_2) == VAR_4->hscb->tag)
    {
      break;
    }
  }
  FUNC_1(VAR_3, VAR_5, VAR_0);
  if (VAR_6 >= VAR_3->scb_data->maxhscbs)
  {
    VAR_6 = VAR_1;
  }

  return (VAR_6);
}
