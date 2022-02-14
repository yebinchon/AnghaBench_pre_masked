
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union hv_synic_sint {int masked; int as_uint64; } ;
union hv_synic_simp {int as_uint64; scalar_t__ base_simp_gpa; scalar_t__ simp_enabled; } ;
union hv_synic_siefp {int as_uint64; scalar_t__ base_siefp_gpa; scalar_t__ siefp_enabled; } ;
struct TYPE_2__ {scalar_t__* synic_event_page; scalar_t__* synic_message_page; int synic_initialized; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned long) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int ) ;

void FUNC_4(void *VAR_5)
{
 union hv_synic_sint VAR_6;
 union hv_synic_simp VAR_7;
 union hv_synic_siefp VAR_8;
 int VAR_9 = FUNC_2();

 if (!VAR_4.synic_initialized)
  return;

 FUNC_1(VAR_2 + VAR_3, VAR_6.as_uint64);

 VAR_6.masked = 1;



 FUNC_3(VAR_2 + VAR_3, VAR_6.as_uint64);

 FUNC_1(VAR_1, VAR_7.as_uint64);
 VAR_7.simp_enabled = 0;
 VAR_7.base_simp_gpa = 0;

 FUNC_3(VAR_1, VAR_7.as_uint64);

 FUNC_1(VAR_0, VAR_8.as_uint64);
 VAR_8.siefp_enabled = 0;
 VAR_8.base_siefp_gpa = 0;

 FUNC_3(VAR_0, VAR_8.as_uint64);

 FUNC_0((unsigned long)VAR_4.synic_message_page[VAR_9]);
 FUNC_0((unsigned long)VAR_4.synic_event_page[VAR_9]);
}
