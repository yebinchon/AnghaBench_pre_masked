
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct request {int dummy; } ;
struct TYPE_6__ {int extra_base; scalar_t__ channel; struct request* rq; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_7__ {scalar_t__ current_speed; scalar_t__ media; int dev_flags; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct request*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int,unsigned long) ;
 int FUNC_4 (int,unsigned long) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct request*) ;

__attribute__((used)) static void FUNC_7(ide_drive_t *VAR_4)
{
 if (VAR_4->current_speed > VAR_2)
  FUNC_5(VAR_4->hwif);
 if (VAR_4->media != VAR_3 || (VAR_4->dev_flags & VAR_0)) {
  ide_hwif_t *VAR_5 = VAR_4->hwif;
  struct request *VAR_6 = VAR_5->rq;
  unsigned long VAR_7 = VAR_5->extra_base - 16;
  unsigned long VAR_8 = VAR_7 + (VAR_5->channel ? 0x24 : 0x20);
  u32 VAR_9 = 0;
  u8 VAR_10 = FUNC_2(VAR_7 + 0x11);

  FUNC_3(VAR_10 | (VAR_5->channel ? 0x08 : 0x02), VAR_7 + 0x11);
  VAR_9 = (FUNC_0(VAR_6) << 8);
  VAR_9 = (FUNC_6(VAR_6) == VAR_1) ?
     VAR_9 | 0x05000000 :
     VAR_9 | 0x06000000;
  FUNC_4(VAR_9, VAR_8);
 }
 FUNC_1(VAR_4);
}
