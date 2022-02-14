
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_family; struct addrinfo* ai_next; } ;
typedef int socklen_t ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {scalar_t__ udplite_coverage; int local_port; int dest_addr; } ;
typedef TYPE_2__ UDPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct addrinfo* FUNC_1 (TYPE_1__*,char const*,int ,int ,int,int ) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct addrinfo*) ;
 int FUNC_5 (struct sockaddr_storage*,int ,int ) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_5, struct sockaddr_storage *VAR_6,
                             socklen_t *VAR_7, const char *VAR_8)
{
    UDPContext *VAR_9 = VAR_5->priv_data;
    int VAR_10 = -1;
    struct addrinfo *VAR_11, *VAR_12;
    int VAR_13 = VAR_0;

    if (((struct sockaddr *) &VAR_9->dest_addr)->sa_family)
        VAR_13 = ((struct sockaddr *) &VAR_9->dest_addr)->sa_family;
    VAR_11 = FUNC_1(VAR_5, (VAR_8 && VAR_8[0]) ? VAR_8 : ((void*)0),
                            VAR_9->local_port,
                            VAR_4, VAR_13, VAR_1);
    if (!VAR_11)
        goto fail;
    for (VAR_12 = VAR_11; VAR_12; VAR_12=VAR_12->ai_next) {
        if (VAR_9->udplite_coverage)
            VAR_10 = FUNC_3(VAR_12->ai_family, VAR_4, VAR_3);
        else
            VAR_10 = FUNC_3(VAR_12->ai_family, VAR_4, 0);
        if (VAR_10 != -1) break;
        FUNC_2(((void*)0), VAR_2, "socket");
    }

    if (VAR_10 < 0)
        goto fail;

    FUNC_5(VAR_6, VAR_12->ai_addr, VAR_12->ai_addrlen);
    *VAR_7 = VAR_12->ai_addrlen;

    FUNC_4(VAR_11);

    return VAR_10;

 fail:
    if (VAR_10 >= 0)
        FUNC_0(VAR_10);
    if(VAR_11)
        FUNC_4(VAR_11);
    return -1;
}
