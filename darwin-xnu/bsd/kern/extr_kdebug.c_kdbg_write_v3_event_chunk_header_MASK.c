
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vnode_t ;
typedef int * vfs_context_t ;
typedef int user_addr_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int kd_chunk_header_v3 ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int,int) ;
 int FUNC_2 (int ,int,int *,int *,int) ;
 scalar_t__ FUNC_3 (int,int ,int ,int,int *,int *) ;

user_addr_t
FUNC_4(user_addr_t VAR_2, uint32_t VAR_3, uint64_t VAR_4, vnode_t VAR_5, vfs_context_t VAR_6)
{
        uint64_t VAR_7 = 0;
        VAR_4 += sizeof(uint64_t);

        if (FUNC_3(VAR_2, VAR_3, VAR_1, VAR_4, VAR_5, VAR_6)) {
                return 0;
        }
        if (VAR_2) {
                VAR_2 += sizeof(kd_chunk_header_v3);
        }


        FUNC_0(!VAR_2 ^ !VAR_5);
        FUNC_0((VAR_5 == ((void*)0)) || (VAR_6 != ((void*)0)));


        if (VAR_2 || VAR_5) {
                if (VAR_5) {
                        int VAR_8 = FUNC_2((caddr_t)&VAR_7, sizeof(uint64_t), VAR_5, VAR_6, VAR_0);
                        if (!VAR_8) {
                                VAR_0 += (sizeof(uint64_t));
                        }
                }
                else {
                        if (FUNC_1(&VAR_7, VAR_2, sizeof(uint64_t))) {
                                return 0;
                        }
                }
        }

        return (VAR_2 + sizeof(uint64_t));
}
