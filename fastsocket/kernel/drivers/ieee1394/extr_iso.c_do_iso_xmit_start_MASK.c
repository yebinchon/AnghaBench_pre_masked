
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hpsb_iso {int flags; TYPE_2__* host; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* isoctl ) (struct hpsb_iso*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hpsb_iso*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct hpsb_iso *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_2->host->driver->isoctl(VAR_2, VAR_1, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_2->flags |= VAR_0;
 return VAR_4;
}
