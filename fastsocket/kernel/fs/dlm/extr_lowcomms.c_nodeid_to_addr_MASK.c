
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct dlm_node_addr {scalar_t__ addr_count; struct sockaddr_storage** addr; } ;
struct TYPE_4__ {scalar_t__ ss_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dlm_node_addr* FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr_storage*,struct sockaddr_storage*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(int VAR_6, struct sockaddr_storage *VAR_7,
                          struct sockaddr *VAR_8)
{
        struct sockaddr_storage VAR_9;
        struct dlm_node_addr *VAR_10;

        if (!VAR_4)
                return -1;

        FUNC_2(&VAR_5);
        VAR_10 = FUNC_0(VAR_6);
        if (VAR_10 && VAR_10->addr_count)
                FUNC_1(&VAR_9, VAR_10->addr[0], sizeof(struct sockaddr_storage));
        FUNC_3(&VAR_5);

        if (!VAR_10)
                return -VAR_1;

        if (!VAR_10->addr_count)
                return -VAR_2;

        if (VAR_7)
                FUNC_1(VAR_7, &VAR_9, sizeof(struct sockaddr_storage));

        if (!VAR_8)
                return 0;

        if (VAR_3[0]->ss_family == VAR_0) {
                struct sockaddr_in *VAR_11 = (struct sockaddr_in *) &VAR_9;
                struct sockaddr_in *VAR_12 = (struct sockaddr_in *) VAR_8;
                VAR_12->sin_addr.s_addr = VAR_11->sin_addr.s_addr;
        } else {
                struct sockaddr_in6 *VAR_13 = (struct sockaddr_in6 *) &VAR_9;
                struct sockaddr_in6 *VAR_14 = (struct sockaddr_in6 *) VAR_8;
                VAR_14->sin6_addr = VAR_13->sin6_addr;
        }

        return 0;
}
