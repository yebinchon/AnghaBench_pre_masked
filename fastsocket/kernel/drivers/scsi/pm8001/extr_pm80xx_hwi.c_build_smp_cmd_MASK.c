
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smp_req {void* len_ip_ir; void* device_id; int tag; } ;
typedef int __le32 ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(u32 VAR_1, __le32 VAR_2,
   struct smp_req *VAR_3, int VAR_4, int VAR_5)
{
 VAR_3->tag = VAR_2;
 VAR_3->device_id = FUNC_0(VAR_1);
 if (VAR_4 == VAR_0) {
  VAR_5 = VAR_5 - 4;
  VAR_3->len_ip_ir = FUNC_0(VAR_5 << 16);
 } else {
  VAR_3->len_ip_ir = FUNC_0(1|(1 << 1));
 }
}
