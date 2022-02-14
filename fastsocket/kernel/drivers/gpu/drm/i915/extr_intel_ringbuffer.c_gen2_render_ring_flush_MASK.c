
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_ring_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct intel_ring_buffer*) ;
 int FUNC_1 (struct intel_ring_buffer*,int) ;
 int FUNC_2 (struct intel_ring_buffer*,int) ;

__attribute__((used)) static int
FUNC_3(struct intel_ring_buffer *VAR_6,
         u32 VAR_7,
         u32 VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 VAR_9 = VAR_2;
 if (((VAR_7|VAR_8) & VAR_0) == 0)
  VAR_9 |= VAR_4;

 if (VAR_7 & VAR_1)
  VAR_9 |= VAR_5;

 VAR_10 = FUNC_1(VAR_6, 2);
 if (VAR_10)
  return VAR_10;

 FUNC_2(VAR_6, VAR_9);
 FUNC_2(VAR_6, VAR_3);
 FUNC_0(VAR_6);

 return 0;
}
