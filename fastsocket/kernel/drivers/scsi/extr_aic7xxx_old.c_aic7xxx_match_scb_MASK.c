
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aic7xxx_scb {TYPE_1__* hscb; } ;
struct aic7xxx_host {int dummy; } ;
struct TYPE_2__ {int target_channel_lun; unsigned char tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct aic7xxx_host *VAR_4, struct aic7xxx_scb *VAR_5,
    int VAR_6, int VAR_7, int VAR_8, unsigned char VAR_9)
{
  int VAR_10 = (VAR_5->hscb->target_channel_lun >> 4) & 0x0F;
  int VAR_11 = (VAR_5->hscb->target_channel_lun >> 3) & 0x01;
  int VAR_12 = VAR_5->hscb->target_channel_lun & 0x07;
  int VAR_13;

  VAR_13 = ((VAR_11 == VAR_7) || (VAR_7 == VAR_0));
  if (VAR_13 != 0)
    VAR_13 = ((VAR_10 == VAR_6) || (VAR_6 == VAR_2));
  if (VAR_13 != 0)
    VAR_13 = ((VAR_8 == VAR_12) || (VAR_8 == VAR_1));
  if (VAR_13 != 0)
    VAR_13 = ((VAR_9 == VAR_5->hscb->tag) || (VAR_9 == VAR_3));

  return (VAR_13);
}
