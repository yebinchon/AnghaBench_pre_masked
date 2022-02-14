
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_wldev {TYPE_1__* dev; } ;
struct b43_pio_rxqueue {scalar_t__ mmio_base; int rev; struct b43_wldev* dev; } ;
struct TYPE_2__ {int core_rev; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,unsigned int,int) ;
 scalar_t__ FUNC_1 (struct b43_wldev*,unsigned int) ;
 struct b43_pio_rxqueue* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (struct b43_wldev*) ;

__attribute__((used)) static struct b43_pio_rxqueue *FUNC_4(struct b43_wldev *VAR_1,
           unsigned int VAR_2)
{
 struct b43_pio_rxqueue *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->dev = VAR_1;
 VAR_3->rev = VAR_1->dev->core_rev;
 VAR_3->mmio_base = FUNC_1(VAR_1, VAR_2) +
         FUNC_3(VAR_1);


 FUNC_0(VAR_1, VAR_2, 1);

 return VAR_3;
}
