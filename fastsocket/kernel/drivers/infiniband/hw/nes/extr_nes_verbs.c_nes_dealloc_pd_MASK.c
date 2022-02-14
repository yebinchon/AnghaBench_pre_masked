
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nes_vnic {struct nes_device* nesdev; } ;
struct nes_ucontext {size_t first_free_db; scalar_t__* mmap_db_index; int allocated_doorbells; } ;
struct nes_pd {size_t mmap_db_index; int pd_id; } ;
struct nes_device {struct nes_adapter* nesadapter; } ;
struct nes_adapter {int base_pd; int allocated_pds; } ;
struct ib_pd {TYPE_1__* uobject; int device; } ;
struct TYPE_2__ {scalar_t__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct nes_pd*) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct nes_adapter*,int ,int) ;
 struct nes_pd* FUNC_4 (struct ib_pd*) ;
 struct nes_ucontext* FUNC_5 (scalar_t__) ;
 struct nes_vnic* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ib_pd *VAR_2)
{
 struct nes_ucontext *VAR_3;
 struct nes_pd *VAR_4 = FUNC_4(VAR_2);
 struct nes_vnic *VAR_5 = FUNC_6(VAR_2->device);
 struct nes_device *VAR_6 = VAR_5->nesdev;
 struct nes_adapter *VAR_7 = VAR_6->nesadapter;

 if ((VAR_2->uobject) && (VAR_2->uobject->context)) {
  VAR_3 = FUNC_5(VAR_2->uobject->context);
  FUNC_2(VAR_0, "Clearing bit %u from allocated doorbells\n",
    VAR_4->mmap_db_index);
  FUNC_0(VAR_4->mmap_db_index, VAR_3->allocated_doorbells);
  VAR_3->mmap_db_index[VAR_4->mmap_db_index] = 0;
  if (VAR_3->first_free_db > VAR_4->mmap_db_index) {
   VAR_3->first_free_db = VAR_4->mmap_db_index;
  }
 }

 FUNC_2(VAR_0, "Deallocating PD%u structure located @%p.\n",
   VAR_4->pd_id, VAR_4);
 FUNC_3(VAR_7, VAR_7->allocated_pds,
   (VAR_4->pd_id-VAR_7->base_pd)>>(VAR_1-12));
 FUNC_1(VAR_4);

 return 0;
}
