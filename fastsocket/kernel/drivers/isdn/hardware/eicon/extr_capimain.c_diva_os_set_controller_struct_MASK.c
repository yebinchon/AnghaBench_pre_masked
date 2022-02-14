
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct capi_ctr {int owner; int ctr_read_proc; int * reset_ctr; int * load_firmware; int driver_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct capi_ctr *VAR_3)
{
 VAR_3->driver_name = VAR_0;
 VAR_3->load_firmware = ((void*)0);
 VAR_3->reset_ctr = ((void*)0);
 VAR_3->ctr_read_proc = VAR_2;
 VAR_3->owner = VAR_1;
}
