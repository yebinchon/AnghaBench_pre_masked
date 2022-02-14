
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int * dts_options; } ;
typedef TYPE_1__ dtrace_state_t ;
struct TYPE_6__ {int dtms_access; size_t dtms_scratch_ptr; size_t dtms_scratch_base; size_t dtms_scratch_size; } ;
typedef TYPE_2__ dtrace_mstate_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void const*,void*,size_t) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static
uintptr_t
FUNC_3(uintptr_t VAR_3, dtrace_state_t *VAR_4,
    dtrace_mstate_t *VAR_5)
{
 uint64_t VAR_6 = VAR_4->dts_options[VAR_1];
 uintptr_t VAR_7;
 size_t VAR_8;





 if ((VAR_5->dtms_access & VAR_2) != 0)
  return (VAR_3);







 VAR_8 = FUNC_2((char *)VAR_3, VAR_6) + 1;

 if (VAR_5->dtms_scratch_ptr + VAR_8 >
     VAR_5->dtms_scratch_base + VAR_5->dtms_scratch_size) {
  FUNC_0(VAR_0);
  return (0);
 }

 FUNC_1((const void *)VAR_3, (void *)VAR_5->dtms_scratch_ptr,
     VAR_8);
 VAR_7 = VAR_5->dtms_scratch_ptr;
 VAR_5->dtms_scratch_ptr += VAR_8;
 return (VAR_7);
}
