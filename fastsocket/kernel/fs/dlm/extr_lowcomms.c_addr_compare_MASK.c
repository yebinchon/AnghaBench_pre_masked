
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;




 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(struct sockaddr_storage *VAR_0, struct sockaddr_storage *VAR_1)
{
        switch (VAR_0->ss_family) {
        case 129: {
                struct sockaddr_in *VAR_2 = (struct sockaddr_in *)VAR_0;
                struct sockaddr_in *VAR_3 = (struct sockaddr_in *)VAR_1;
                if (VAR_2->sin_addr.s_addr != VAR_3->sin_addr.s_addr)
                        return 0;
                if (VAR_2->sin_port != VAR_3->sin_port)
                        return 0;
                break;
        }
        case 128: {
                struct sockaddr_in6 *VAR_4 = (struct sockaddr_in6 *)VAR_0;
                struct sockaddr_in6 *VAR_5 = (struct sockaddr_in6 *)VAR_1;
                if (!FUNC_0(&VAR_4->sin6_addr, &VAR_5->sin6_addr))
                        return 0;
                if (VAR_4->sin6_port != VAR_5->sin6_port)
                        return 0;
                break;
        }
        default:
                return 0;
        }
        return 1;
}
