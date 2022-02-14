
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct b43_dmaring {int type; TYPE_2__* dev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int dma_dev; } ;





 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct b43_dmaring*,int ,size_t,int) ;

__attribute__((used)) static bool FUNC_3(struct b43_dmaring *VAR_0,
      dma_addr_t VAR_1,
      size_t VAR_2, bool VAR_3)
{
 if (FUNC_1(FUNC_0(VAR_0->dev->dev->dma_dev, VAR_1)))
  return 1;

 switch (VAR_0->type) {
 case 130:
  if ((u64)VAR_1 + VAR_2 > (1ULL << 30))
   goto address_error;
  break;
 case 129:
  if ((u64)VAR_1 + VAR_2 > (1ULL << 32))
   goto address_error;
  break;
 case 128:


  break;
 }


 return 0;

address_error:

 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

 return 1;
}
