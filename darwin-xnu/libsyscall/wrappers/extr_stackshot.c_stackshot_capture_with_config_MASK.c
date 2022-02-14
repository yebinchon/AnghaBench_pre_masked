
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sc_buffer; uintptr_t sc_out_buffer_addr; uintptr_t sc_out_size_addr; scalar_t__ sc_size; } ;
typedef TYPE_1__ stackshot_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,uintptr_t,int) ;
 int VAR_2 ;

int
FUNC_1(stackshot_config_t *VAR_3)
{
 int VAR_4;
 stackshot_config_t *VAR_5;

 if (VAR_3 == ((void*)0)) {
  return VAR_0;
 }

 VAR_5 = (stackshot_config_t *) VAR_3;
 if (VAR_5->sc_buffer != 0) {
  return VAR_0;
 }

 VAR_5->sc_out_buffer_addr = (uintptr_t)&VAR_5->sc_buffer;
 VAR_5->sc_out_size_addr = (uintptr_t)&VAR_5->sc_size;
 VAR_4 = FUNC_0(VAR_1, (uintptr_t)VAR_5, sizeof(stackshot_config_t));

 if (VAR_4 != 0) {
  VAR_4 = VAR_2;
  VAR_5->sc_buffer = 0;
  VAR_5->sc_size = 0;
 }

 return VAR_4;
}
