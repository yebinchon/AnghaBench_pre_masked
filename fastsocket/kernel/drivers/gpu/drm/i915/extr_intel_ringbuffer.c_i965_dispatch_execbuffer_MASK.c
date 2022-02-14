
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_ring_buffer {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_ring_buffer*) ;
 int FUNC_1 (struct intel_ring_buffer*,int) ;
 int FUNC_2 (struct intel_ring_buffer*,int) ;

__attribute__((used)) static int
FUNC_3(struct intel_ring_buffer *VAR_4,
    u32 VAR_5, u32 VAR_6,
    unsigned VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, 2);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_4,
   VAR_1 |
   VAR_2 |
   (VAR_7 & VAR_0 ? 0 : VAR_3));
 FUNC_2(VAR_4, VAR_5);
 FUNC_0(VAR_4);

 return 0;
}
