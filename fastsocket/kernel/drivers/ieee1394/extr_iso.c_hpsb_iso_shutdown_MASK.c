
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hpsb_iso {int flags; scalar_t__ type; int data_buf; TYPE_2__* host; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* isoctl ) (struct hpsb_iso*,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hpsb_iso*) ;
 int FUNC_2 (struct hpsb_iso*) ;
 int FUNC_3 (struct hpsb_iso*,int ,int ) ;

void FUNC_4(struct hpsb_iso *VAR_4)
{
 if (VAR_4->flags & VAR_0) {
  FUNC_1(VAR_4);
  VAR_4->host->driver->isoctl(VAR_4, VAR_4->type == VAR_1 ?
       VAR_3 : VAR_2, 0);
  VAR_4->flags &= ~VAR_0;
 }

 FUNC_0(&VAR_4->data_buf);
 FUNC_2(VAR_4);
}
