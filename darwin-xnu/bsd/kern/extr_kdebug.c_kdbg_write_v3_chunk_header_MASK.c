
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * vnode_t ;
typedef int * vfs_context_t ;
typedef int user_addr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int length; int sub_tag; int tag; } ;
typedef TYPE_1__ kd_chunk_header_v3 ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,int,int *,int *,int) ;

int
FUNC_3(user_addr_t VAR_2, uint32_t VAR_3, uint32_t VAR_4, uint64_t VAR_5, vnode_t VAR_6, vfs_context_t VAR_7)
{
 int VAR_8 = VAR_0;
 kd_chunk_header_v3 VAR_9 = {
  .tag = VAR_3,
  .sub_tag = VAR_4,
  .length = VAR_5,
 };


 FUNC_0(!VAR_2 ^ !VAR_6);
 FUNC_0((VAR_6 == ((void*)0)) || (VAR_7 != ((void*)0)));


 if (VAR_2 || VAR_6) {
  if (VAR_6) {
   VAR_8 = FUNC_2((caddr_t)&VAR_9, sizeof(kd_chunk_header_v3), VAR_6, VAR_7, VAR_1);
   if (VAR_8) {
    goto write_error;
   }
   VAR_1 += (sizeof(kd_chunk_header_v3));
  }
  else {
   VAR_8 = FUNC_1(&VAR_9, VAR_2, sizeof(kd_chunk_header_v3));
   if (VAR_8) {
    goto write_error;
   }
  }
 }
write_error:
 return VAR_8;
}
