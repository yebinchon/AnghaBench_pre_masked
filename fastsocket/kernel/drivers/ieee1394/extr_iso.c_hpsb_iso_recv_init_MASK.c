
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpsb_iso {int flags; } ;
struct hpsb_host {TYPE_1__* driver; } ;
struct TYPE_2__ {scalar_t__ (* isoctl ) (struct hpsb_iso*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hpsb_iso* FUNC_0 (struct hpsb_host*,int ,unsigned int,unsigned int,int,int,int,void (*) (struct hpsb_iso*)) ;
 int FUNC_1 (struct hpsb_iso*) ;
 scalar_t__ FUNC_2 (struct hpsb_iso*,int ,int ) ;

struct hpsb_iso *FUNC_3(struct hpsb_host *VAR_3,
        unsigned int VAR_4,
        unsigned int VAR_5,
        int VAR_6,
        int VAR_7,
        int VAR_8,
        void (*VAR_9) (struct hpsb_iso *))
{
 struct hpsb_iso *VAR_10 = FUNC_0(VAR_3, VAR_1,
          VAR_4, VAR_5,
          VAR_6, VAR_7,
          VAR_8, VAR_9);
 if (!VAR_10)
  return ((void*)0);


 if (VAR_3->driver->isoctl(VAR_10, VAR_2, 0))
  goto err;

 VAR_10->flags |= VAR_0;
 return VAR_10;

      err:
 FUNC_1(VAR_10);
 return ((void*)0);
}
