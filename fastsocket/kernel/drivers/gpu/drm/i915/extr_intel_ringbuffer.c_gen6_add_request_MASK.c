
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_ring_buffer {int outstanding_lazy_request; int * signal_mbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_ring_buffer*) ;
 int FUNC_1 (struct intel_ring_buffer*,int) ;
 int FUNC_2 (struct intel_ring_buffer*,int) ;
 int FUNC_3 (struct intel_ring_buffer*,int ) ;

__attribute__((used)) static int
FUNC_4(struct intel_ring_buffer *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, 10);
 if (VAR_7)
  return VAR_7;

 VAR_5 = VAR_4->signal_mbox[0];
 VAR_6 = VAR_4->signal_mbox[1];

 FUNC_3(VAR_4, VAR_5);
 FUNC_3(VAR_4, VAR_6);
 FUNC_2(VAR_4, VAR_1);
 FUNC_2(VAR_4, VAR_0 << VAR_2);
 FUNC_2(VAR_4, VAR_4->outstanding_lazy_request);
 FUNC_2(VAR_4, VAR_3);
 FUNC_0(VAR_4);

 return 0;
}
