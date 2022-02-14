
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int nodeid; int addr_count; struct sockaddr_storage** addr; int list; } ;
struct dlm_node_addr {int nodeid; int addr_count; struct dlm_node_addr** addr; int list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sockaddr_storage* FUNC_0 (int) ;
 int FUNC_1 (struct sockaddr_storage*) ;
 struct sockaddr_storage* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct sockaddr_storage*,struct sockaddr_storage*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(int VAR_6, struct sockaddr_storage *VAR_7, int VAR_8)
{
        struct sockaddr_storage *VAR_9;
        struct dlm_node_addr *VAR_10, *VAR_11;

        VAR_10 = FUNC_2(sizeof(struct dlm_node_addr), VAR_3);
        if (!VAR_10)
                return -VAR_1;

        VAR_9 = FUNC_2(sizeof(struct sockaddr_storage), VAR_3);
        if (!VAR_9) {
                FUNC_1(VAR_10);
                return -VAR_1;
        }

        FUNC_4(VAR_9, VAR_7, VAR_8);

        FUNC_5(&VAR_5);
        VAR_11 = FUNC_0(VAR_6);
        if (!VAR_11) {
                VAR_10->nodeid = VAR_6;
                VAR_10->addr[0] = VAR_9;
                VAR_10->addr_count = 1;
                FUNC_3(&VAR_10->list, &VAR_4);
                FUNC_6(&VAR_5);
                return 0;
        }

        if (VAR_11->addr_count >= VAR_0) {
                FUNC_6(&VAR_5);
                FUNC_1(VAR_9);
                FUNC_1(VAR_10);
                return -VAR_2;
        }

        VAR_11->addr[VAR_11->addr_count++] = VAR_9;
        FUNC_6(&VAR_5);
        FUNC_1(VAR_10);
        return 0;
}
