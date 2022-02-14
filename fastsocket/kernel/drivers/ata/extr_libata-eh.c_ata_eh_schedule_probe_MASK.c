
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_link {int dummy; } ;
struct TYPE_4__ {int probe_mask; int action; } ;
struct ata_eh_context {int did_probe_mask; int saved_ncq_enabled; scalar_t__* saved_xfer_mode; TYPE_2__ i; } ;
struct ata_device {int devno; int ering; TYPE_1__* link; } ;
struct TYPE_3__ {struct ata_eh_context eh_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_device*) ;
 struct ata_link* FUNC_1 (struct ata_device*) ;
 int FUNC_2 (struct ata_device*) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct ata_link*,int) ;

__attribute__((used)) static int FUNC_6(struct ata_device *VAR_4)
{
 struct ata_eh_context *VAR_5 = &VAR_4->link->eh_context;
 struct ata_link *VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = 0;

 if (!(VAR_5->i.probe_mask & (1 << VAR_4->devno)) ||
     (VAR_5->did_probe_mask & (1 << VAR_4->devno)))
  return 0;

 FUNC_2(VAR_4);
 FUNC_0(VAR_4);
 VAR_5->did_probe_mask |= (1 << VAR_4->devno);
 VAR_5->i.action |= VAR_2;
 VAR_5->saved_xfer_mode[VAR_4->devno] = 0;
 VAR_5->saved_ncq_enabled &= ~(1 << VAR_4->devno);
 FUNC_4(&VAR_4->ering, 0, VAR_0);
 FUNC_3(&VAR_4->ering, VAR_3, &VAR_7);

 if (VAR_7 > VAR_1)
  FUNC_5(VAR_6, 1);

 return 1;
}
