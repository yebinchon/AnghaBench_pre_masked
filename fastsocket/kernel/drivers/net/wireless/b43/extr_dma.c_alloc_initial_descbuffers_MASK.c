
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43_dmaring {int nr_slots; int used_slots; int rx_buffersize; TYPE_2__* ops; TYPE_1__* dev; } ;
struct b43_dmadesc_meta {int skb; int dmaaddr; } ;
struct b43_dmadesc_generic {int dummy; } ;
struct TYPE_4__ {struct b43_dmadesc_generic* (* idx2desc ) (struct b43_dmaring*,int,struct b43_dmadesc_meta**) ;} ;
struct TYPE_3__ {int wl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct b43_dmaring*,struct b43_dmadesc_generic*,struct b43_dmadesc_meta*,int ) ;
 struct b43_dmadesc_generic* FUNC_4 (struct b43_dmaring*,int,struct b43_dmadesc_meta**) ;
 struct b43_dmadesc_generic* FUNC_5 (struct b43_dmaring*,int,struct b43_dmadesc_meta**) ;
 int FUNC_6 (struct b43_dmaring*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct b43_dmaring *VAR_2)
{
 int VAR_3, VAR_4 = -VAR_0;
 struct b43_dmadesc_generic *VAR_5;
 struct b43_dmadesc_meta *VAR_6;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_slots; VAR_3++) {
  VAR_5 = VAR_2->ops->idx2desc(VAR_2, VAR_3, &VAR_6);

  VAR_4 = FUNC_3(VAR_2, VAR_5, VAR_6, VAR_1);
  if (VAR_4) {
   FUNC_0(VAR_2->dev->wl,
          "Failed to allocate initial descbuffers\n");
   goto err_unwind;
  }
 }
 FUNC_2();
 VAR_2->used_slots = VAR_2->nr_slots;
 VAR_4 = 0;
      out:
 return VAR_4;

      err_unwind:
 for (VAR_3--; VAR_3 >= 0; VAR_3--) {
  VAR_5 = VAR_2->ops->idx2desc(VAR_2, VAR_3, &VAR_6);

  FUNC_6(VAR_2, VAR_6->dmaaddr, VAR_2->rx_buffersize, 0);
  FUNC_1(VAR_6->skb);
 }
 goto out;
}
