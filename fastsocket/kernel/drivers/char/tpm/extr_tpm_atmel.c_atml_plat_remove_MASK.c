
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iobase; int region_size; int base; scalar_t__ have_region; } ;
struct tpm_chip {int dev; TYPE_1__ vendor; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct tpm_chip* FUNC_2 (int *) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct tpm_chip *VAR_1 = FUNC_2(&VAR_0->dev);

 if (VAR_1) {
  if (VAR_1->vendor.have_region)
   FUNC_1(VAR_1->vendor.base,
          VAR_1->vendor.region_size);
  FUNC_0(VAR_1->vendor.iobase);
  FUNC_4(VAR_1->dev);
  FUNC_3(VAR_0);
 }
}
