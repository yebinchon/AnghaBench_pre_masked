
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmx {int activated; int setting; TYPE_1__* onmask; int * dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int mask; } ;


 int FUNC_0 (struct pmx**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct device*,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 struct pmx** VAR_3 ;
 struct pmx** VAR_4 ;
 int FUNC_5 (struct pmx*,int) ;

int FUNC_6(struct device *VAR_5, struct pmx *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 VAR_9 = 0;

 if (VAR_6 == ((void*)0) || VAR_5 == ((void*)0))
  return -VAR_0;

 FUNC_3(&VAR_2);


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {

  if (VAR_4[VAR_7]->dev == ((void*)0) || VAR_4[VAR_7] == VAR_6)
   continue;

  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++) {

   if (VAR_4[VAR_7]->onmask[VAR_8].mask & VAR_6->
    onmask[VAR_8].mask) {

    FUNC_1(1, "padmux: cannot activate "
     "setting. Bit conflict with "
     "an active setting\n");

    VAR_9 = -VAR_1;
    goto exit;
   }
  }
 }
 FUNC_5(VAR_6, 1);
 VAR_6->activated = 1;
 FUNC_2(VAR_5, "padmux: setting nr %d is activated\n",
  VAR_6->setting);

exit:
 FUNC_4(&VAR_2);
 return VAR_9;
}
