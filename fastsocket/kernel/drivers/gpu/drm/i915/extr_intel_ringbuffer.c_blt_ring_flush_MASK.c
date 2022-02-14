
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct intel_ring_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct intel_ring_buffer*) ;
 int FUNC_1 (struct intel_ring_buffer*,int) ;
 int FUNC_2 (struct intel_ring_buffer*,int) ;

__attribute__((used)) static int FUNC_3(struct intel_ring_buffer *VAR_8,
     u32 VAR_9, u32 VAR_10)
{
 uint32_t VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_8, 4);
 if (VAR_12)
  return VAR_12;

 VAR_11 = VAR_2;






 if (VAR_9 & VAR_0)
  VAR_11 |= VAR_6 | VAR_4 |
   VAR_3;
 FUNC_2(VAR_8, VAR_11);
 FUNC_2(VAR_8, VAR_1 | VAR_5);
 FUNC_2(VAR_8, 0);
 FUNC_2(VAR_8, VAR_7);
 FUNC_0(VAR_8);
 return 0;
}
