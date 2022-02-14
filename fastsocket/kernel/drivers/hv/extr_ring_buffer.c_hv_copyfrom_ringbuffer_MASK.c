
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hv_ring_buffer_info {int dummy; } ;


 void* FUNC_0 (struct hv_ring_buffer_info*) ;
 scalar_t__ FUNC_1 (struct hv_ring_buffer_info*) ;
 int FUNC_2 (void*,void*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(
 struct hv_ring_buffer_info *VAR_0,
 void *VAR_1,
 u32 VAR_2,
 u32 VAR_3)
{
 void *VAR_4 = FUNC_0(VAR_0);
 u32 VAR_5 = FUNC_1(VAR_0);

 u32 VAR_6;


 if (VAR_2 > VAR_5 - VAR_3) {
  VAR_6 = VAR_5 - VAR_3;

  FUNC_2(VAR_1, VAR_4 + VAR_3, VAR_6);
  FUNC_2(VAR_1 + VAR_6, VAR_4, VAR_2 - VAR_6);
 } else

  FUNC_2(VAR_1, VAR_4 + VAR_3, VAR_2);


 VAR_3 += VAR_2;
 VAR_3 %= VAR_5;

 return VAR_3;
}
