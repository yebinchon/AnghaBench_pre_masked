
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct agp_bridge_data {int major_version; int mode; int minor_version; TYPE_1__* dev; scalar_t__ capndx; } ;
struct TYPE_7__ {scalar_t__ capndx; TYPE_1__* dev; int minor_version; int major_version; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct agp_bridge_data*) ;
 TYPE_3__* VAR_4 ;
 int FUNC_1 (TYPE_3__*,int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,int*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,int) ;

void FUNC_7(struct agp_bridge_data *VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8;

 FUNC_4(VAR_4);

 FUNC_3(&VAR_4->dev->dev, "AGP %d.%d bridge\n",
   VAR_4->major_version, VAR_4->minor_version);

 FUNC_5(VAR_4->dev,
        VAR_4->capndx + VAR_3, &VAR_7);

 VAR_7 = FUNC_1(VAR_4, VAR_6, VAR_7);
 if (VAR_7 == 0)

  return;

 VAR_7 |= VAR_1;


 if (VAR_5->major_version >= 3) {
  if (VAR_5->mode & VAR_2) {

   if (VAR_5->minor_version >= 5)
    FUNC_0(VAR_5);
   FUNC_2(VAR_7, 1);
   return;
  } else {

      VAR_7 &= ~(7<<10) ;
      FUNC_5(VAR_5->dev,
     VAR_5->capndx+VAR_0, &VAR_8);
      VAR_8 |= (1<<9);
      FUNC_6(VAR_5->dev,
     VAR_5->capndx+VAR_0, VAR_8);

      FUNC_3(&VAR_5->dev->dev, "bridge is in legacy mode, falling back to 2.x\n");
  }
 }


 FUNC_2(VAR_7, 0);
}
