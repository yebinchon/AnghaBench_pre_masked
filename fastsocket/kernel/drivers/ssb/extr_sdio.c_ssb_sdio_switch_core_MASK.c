
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int coreid; } ;
struct ssb_device {int core_index; TYPE_1__ id; } ;
struct ssb_bus {scalar_t__ sdio_sbaddr; struct ssb_device* mapped_device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ssb_bus*) ;
 int FUNC_4 (struct ssb_bus*,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct ssb_bus *VAR_2, struct ssb_device *VAR_3)
{
 u8 VAR_4 = VAR_3->core_index;
 u32 VAR_5;
 int VAR_6 = 0;

 VAR_5 = (VAR_4 * VAR_0) + VAR_1;
 if (FUNC_5(VAR_2->sdio_sbaddr != VAR_5)) {





  VAR_6 = FUNC_4(VAR_2, VAR_5);
  if (VAR_6) {
   FUNC_0(FUNC_3(VAR_2), "failed to switch to"
    " core %u, error %d\n", VAR_4, VAR_6);
   goto out;
  }
  VAR_2->mapped_device = VAR_3;
 }

out:
 return VAR_6;
}
