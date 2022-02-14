
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_len; int sin6_addr; int sin6_port; } ;
struct TYPE_12__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_5__ sin_addr; int sin_port; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_10__ {int s_addr; } ;
struct TYPE_11__ {TYPE_3__ ia46_addr4; } ;
struct TYPE_14__ {int addr6; TYPE_4__ addr46; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_9__ {TYPE_1__ ia46_addr4; } ;
struct TYPE_13__ {int addr6; TYPE_2__ addr46; } ;
struct cfil_hash_entry {int cfentry_family; TYPE_7__ cfentry_faddr; int cfentry_fport; TYPE_6__ cfentry_laddr; int cfentry_lport; } ;




 int VAR_0 ;
 int VAR_1 ;
 struct sockaddr_in* FUNC_0 (struct sockaddr*) ;
 struct sockaddr_in6* FUNC_1 (struct sockaddr*) ;

__attribute__((used)) static bool
FUNC_2(struct cfil_hash_entry *VAR_2, bool VAR_3, struct sockaddr *VAR_4)
{
    struct sockaddr_in *VAR_5 = ((void*)0);
    struct sockaddr_in6 *VAR_6 = ((void*)0);

    if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    switch (VAR_4->sa_family) {
        case 129:
            VAR_5 = FUNC_0(VAR_4);
            if (VAR_5->sin_len != sizeof(*VAR_5)) {
                return VAR_0;
            }
            if (VAR_3 == VAR_1) {
                VAR_2->cfentry_lport = VAR_5->sin_port;
                VAR_2->cfentry_laddr.addr46.ia46_addr4.s_addr = VAR_5->sin_addr.s_addr;
            } else {
                VAR_2->cfentry_fport = VAR_5->sin_port;
                VAR_2->cfentry_faddr.addr46.ia46_addr4.s_addr = VAR_5->sin_addr.s_addr;
            }
            VAR_2->cfentry_family = 129;
            return VAR_1;
        case 128:
            VAR_6 = FUNC_1(VAR_4);
            if (VAR_6->sin6_len != sizeof(*VAR_6)) {
                return VAR_0;
            }
            if (VAR_3 == VAR_1) {
                VAR_2->cfentry_lport = VAR_6->sin6_port;
                VAR_2->cfentry_laddr.addr6 = VAR_6->sin6_addr;
            } else {
                VAR_2->cfentry_fport = VAR_6->sin6_port;
                VAR_2->cfentry_faddr.addr6 = VAR_6->sin6_addr;
            }
            VAR_2->cfentry_family = 128;
            return VAR_1;
        default:
            return VAR_0;
    }
}
