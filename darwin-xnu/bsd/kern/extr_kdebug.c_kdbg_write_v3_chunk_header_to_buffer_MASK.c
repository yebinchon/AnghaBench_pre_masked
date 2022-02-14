
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int length; int sub_tag; int tag; } ;
typedef TYPE_1__ kd_chunk_header_v3 ;


 int FUNC_0 (void*,TYPE_1__*,int) ;

int
FUNC_1(void * VAR_0, uint32_t VAR_1, uint32_t VAR_2, uint64_t VAR_3)
{
 kd_chunk_header_v3 VAR_4 = {
  .tag = VAR_1,
  .sub_tag = VAR_2,
  .length = VAR_3,
 };

 if (!VAR_0) {
  return 0;
 }

 FUNC_0(VAR_0, &VAR_4, sizeof(kd_chunk_header_v3));

 return (sizeof(kd_chunk_header_v3));
}
