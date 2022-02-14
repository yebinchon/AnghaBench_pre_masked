
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int OSMT_attr; } ;
typedef TYPE_1__* OSMallocTag ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 void* FUNC_2 (int ,int ) ;

void *
FUNC_3(
 uint32_t VAR_2,
 OSMallocTag VAR_3)
{
 void *VAR_4=((void*)0);

 if (VAR_3->OSMT_attr & VAR_0)
  return(((void*)0));

 FUNC_0(VAR_3);
 VAR_4 = FUNC_2((vm_size_t)VAR_2, VAR_1);
 if (VAR_4 == ((void*)0))
  FUNC_1(VAR_3);

 return(VAR_4);
}
