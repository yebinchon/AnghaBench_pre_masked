
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vme_width_t ;
typedef int vme_cycle_t ;
typedef int vme_address_t ;
struct vme_master_resource {int kern_base; int lock; } ;
struct vme_bus_error {int address; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {scalar_t__ kern_base; } ;


 int FUNC_0 (struct vme_master_resource*,int*,unsigned long long*,unsigned long long*,int *,int *,int *) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,void*,unsigned int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int,size_t) ;
 struct vme_bus_error* FUNC_7 (int ,int,size_t) ;

ssize_t FUNC_8(struct vme_master_resource *VAR_2, void *VAR_3,
 size_t VAR_4, loff_t VAR_5)
{
 int VAR_6 = 0, VAR_7;
 unsigned long long VAR_8, VAR_9;
 vme_address_t VAR_10;
 vme_cycle_t VAR_11;
 vme_width_t VAR_12;

 struct vme_bus_error *VAR_13 = ((void*)0);

 FUNC_4(&(VAR_2->lock));

 FUNC_2(VAR_2->kern_base + VAR_5, VAR_3, (unsigned int)VAR_4);
 VAR_6 = VAR_4;
 if (!VAR_0)
  goto skip_chk;





 FUNC_0(VAR_2, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11,
  &VAR_12);

 FUNC_1(VAR_1->kern_base + 0x7F000);

 VAR_13 = FUNC_7(VAR_10, VAR_8 + VAR_5, VAR_4);
 if(VAR_13 != ((void*)0)) {
  FUNC_3("First VME write error detected an at address 0x%llx\n",
   VAR_13->address);
  VAR_6 = VAR_13->address - (VAR_8 + VAR_5);

  FUNC_6(VAR_10, VAR_8 + VAR_5, VAR_4);
 }

skip_chk:
 FUNC_5(&(VAR_2->lock));

 return VAR_6;
}
