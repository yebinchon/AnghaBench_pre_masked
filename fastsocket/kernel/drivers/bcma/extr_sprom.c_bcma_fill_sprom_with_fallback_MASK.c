
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_sprom {int dummy; } ;
struct TYPE_2__ {int revision; } ;
struct bcma_bus {TYPE_1__ sprom; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcma_bus*,char*,int ) ;
 int FUNC_1 (struct bcma_bus*,char*,int) ;
 int FUNC_2 (struct bcma_bus*,struct ssb_sprom*) ;

__attribute__((used)) static int FUNC_3(struct bcma_bus *VAR_1,
      struct ssb_sprom *VAR_2)
{
 int VAR_3;

 if (!&FUNC_2) {
  VAR_3 = -VAR_0;
  goto fail;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3)
  goto fail;

 FUNC_0(VAR_1, "Using SPROM revision %d provided by platform.\n",
     VAR_1->sprom.revision);
 return 0;
fail:
 FUNC_1(VAR_1, "Using fallback SPROM failed (err %d)\n", VAR_3);
 return VAR_3;
}
