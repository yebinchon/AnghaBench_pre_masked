
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lg_cpu {TYPE_2__* lg; } ;
struct TYPE_9__ {int pgdir; int reserve_mem; int kernel_address; } ;
struct TYPE_8__ {TYPE_3__* kernel_address; TYPE_3__* lguest_data; TYPE_1__* pgdirs; } ;
struct TYPE_7__ {int gpgdir; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (struct lg_cpu*,char*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int,int *) ;

void FUNC_5(struct lg_cpu *VAR_3)
{

 if (FUNC_0(VAR_3->lg->kernel_address,
  &VAR_3->lg->lguest_data->kernel_address)




  || FUNC_4(VAR_0 * 1024 * 1024,
   &VAR_3->lg->lguest_data->reserve_mem)
  || FUNC_4(VAR_3->lg->pgdirs[0].gpgdir,
   &VAR_3->lg->lguest_data->pgdir))
  FUNC_1(VAR_3, "bad guest page %p", VAR_3->lg->lguest_data);
 if (FUNC_2(VAR_3->lg->kernel_address) >= VAR_1)

  FUNC_1(VAR_3, "bad kernel address %#lx",
     VAR_3->lg->kernel_address);
}
