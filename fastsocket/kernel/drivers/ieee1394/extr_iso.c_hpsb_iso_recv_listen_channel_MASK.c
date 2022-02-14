
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hpsb_iso {scalar_t__ type; int channel; TYPE_2__* host; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* isoctl ) (struct hpsb_iso*,int ,unsigned char) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hpsb_iso*,int ,unsigned char) ;

int FUNC_1(struct hpsb_iso *VAR_3, unsigned char VAR_4)
{
 if (VAR_3->type != VAR_1 || VAR_3->channel != -1 || VAR_4 >= 64)
  return -VAR_0;
 return VAR_3->host->driver->isoctl(VAR_3, VAR_2, VAR_4);
}
