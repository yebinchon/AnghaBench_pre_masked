
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pmucaps; int pmurev; void* cccaps; int ccrev; } ;
struct si_info {TYPE_3__ pub; void* chipst; } ;
struct TYPE_4__ {int rev; } ;
struct bcma_device {TYPE_1__ id; TYPE_2__* bus; } ;
struct TYPE_5__ {scalar_t__ nr_cores; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 void* FUNC_2 (struct bcma_device*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool
FUNC_3(struct si_info *VAR_5, struct bcma_device *VAR_6)
{

 if (VAR_6->bus->nr_cores == 0)
  return 0;


 VAR_5->pub.ccrev = VAR_6->id.rev;


 VAR_5->chipst = FUNC_2(VAR_6, FUNC_0(VAR_3));


 VAR_5->pub.cccaps = FUNC_2(VAR_6, FUNC_0(VAR_2));


 if (FUNC_1(&VAR_5->pub) & VAR_0) {
  VAR_5->pub.pmucaps = FUNC_2(VAR_6,
            FUNC_0(VAR_4));
  VAR_5->pub.pmurev = VAR_5->pub.pmucaps & VAR_1;
 }

 return 1;
}
