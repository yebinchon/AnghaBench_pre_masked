
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vme_width_t ;
typedef int vme_cycle_t ;
typedef int vme_address_t ;
struct vme_master_resource {int kern_base; int lock; TYPE_1__* parent; } ;
struct vme_bus_error {int address; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int parent; } ;


 int FUNC_0 (struct vme_master_resource*,int*,unsigned long long*,unsigned long long*,int *,int *,int *) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (void*,int,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,size_t) ;
 struct vme_bus_error* FUNC_6 (int ,int,size_t) ;

ssize_t FUNC_7(struct vme_master_resource *VAR_1, void *VAR_2,
 size_t VAR_3, loff_t VAR_4)
{
 int VAR_5, VAR_6;
 unsigned long long VAR_7, VAR_8;
 vme_address_t VAR_9;
 vme_cycle_t VAR_10;
 vme_width_t VAR_11;
 struct vme_bus_error *VAR_12 = ((void*)0);

 FUNC_3(&(VAR_1->lock));

 FUNC_2(VAR_2, VAR_1->kern_base + VAR_4, (unsigned int)VAR_3);
 VAR_5 = VAR_3;

 if (!VAR_0)
  goto skip_chk;

 FUNC_0(VAR_1, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10,
  &VAR_11);

 VAR_12 = FUNC_6(VAR_9, VAR_7 + VAR_4, VAR_3);
 if(VAR_12 != ((void*)0)) {
  FUNC_1(VAR_1->parent->parent, "First VME read error detected "
   "an at address 0x%llx\n", VAR_12->address);
  VAR_5 = VAR_12->address - (VAR_7 + VAR_4);

  FUNC_5(VAR_9, VAR_7 + VAR_4, VAR_3);
 }

skip_chk:
 FUNC_4(&(VAR_1->lock));

 return VAR_5;
}
