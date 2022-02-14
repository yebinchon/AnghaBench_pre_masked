
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hpsb_iso {scalar_t__ type; int flags; TYPE_2__* host; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* isoctl ) (struct hpsb_iso*,int ,unsigned long) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hpsb_iso*,int ,unsigned long) ;

int FUNC_1(struct hpsb_iso *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 int VAR_8[3];

 if (VAR_3->type != VAR_1)
  return -1;

 if (VAR_3->flags & VAR_0)
  return 0;

 if (VAR_4 < -1)
  VAR_4 = -1;
 else if (VAR_4 >= 8000)
  VAR_4 %= 8000;

 VAR_8[0] = VAR_4;

 if (VAR_5 < 0)

  VAR_5 = 0xF;
 VAR_8[1] = VAR_5;

 VAR_8[2] = VAR_6;

 VAR_7 =
     VAR_3->host->driver->isoctl(VAR_3, VAR_2,
          (unsigned long)&VAR_8[0]);
 if (VAR_7)
  return VAR_7;

 VAR_3->flags |= VAR_0;
 return VAR_7;
}
