
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_ring_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_ring_buffer*) ;
 int FUNC_1 (struct intel_ring_buffer*,int) ;
 int FUNC_2 (struct intel_ring_buffer*,int ) ;

__attribute__((used)) static int
FUNC_3(struct intel_ring_buffer *VAR_2,
        u32 VAR_3,
        u32 VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, 2);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_2, VAR_0);
 FUNC_2(VAR_2, VAR_1);
 FUNC_0(VAR_2);
 return 0;
}
