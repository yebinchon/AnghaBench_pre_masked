
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpsb_iso {int speed; int flags; } ;
struct hpsb_host {TYPE_1__* driver; } ;
struct TYPE_2__ {scalar_t__ (* isoctl ) (struct hpsb_iso*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hpsb_iso* FUNC_0 (struct hpsb_host*,int ,unsigned int,unsigned int,int,int ,int,void (*) (struct hpsb_iso*)) ;
 int FUNC_1 (struct hpsb_iso*) ;
 scalar_t__ FUNC_2 (struct hpsb_iso*,int ,int ) ;

struct hpsb_iso *FUNC_3(struct hpsb_host *VAR_4,
        unsigned int VAR_5,
        unsigned int VAR_6,
        int VAR_7,
        int VAR_8,
        int VAR_9,
        void (*VAR_10) (struct hpsb_iso *))
{
 struct hpsb_iso *VAR_11 = FUNC_0(VAR_4, VAR_2,
          VAR_5, VAR_6,
          VAR_7,
          VAR_0,
          VAR_9, VAR_10);
 if (!VAR_11)
  return ((void*)0);

 VAR_11->speed = VAR_8;


 if (VAR_4->driver->isoctl(VAR_11, VAR_3, 0))
  goto err;

 VAR_11->flags |= VAR_1;
 return VAR_11;

      err:
 FUNC_1(VAR_11);
 return ((void*)0);
}
