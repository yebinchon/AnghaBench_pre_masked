
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
 int VAR_8 ;
 int FUNC_0 (struct intel_ring_buffer*) ;
 int FUNC_1 (struct intel_ring_buffer*,int) ;
 int FUNC_2 (struct intel_ring_buffer*,int) ;

__attribute__((used)) static int FUNC_3(struct intel_ring_buffer *VAR_9,
      u32 VAR_10, u32 VAR_11)
{
 uint32_t VAR_12;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_9, 4);
 if (VAR_13)
  return VAR_13;

 VAR_12 = VAR_2;






 if (VAR_10 & VAR_0)
  VAR_12 |= VAR_7 | VAR_6 |
   VAR_4 | VAR_3;
 FUNC_2(VAR_9, VAR_12);
 FUNC_2(VAR_9, VAR_1 | VAR_5);
 FUNC_2(VAR_9, 0);
 FUNC_2(VAR_9, VAR_8);
 FUNC_0(VAR_9);
 return 0;
}
