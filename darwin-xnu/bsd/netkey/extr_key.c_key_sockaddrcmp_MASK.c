
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_family; scalar_t__ sa_len; } ;
struct in6_addr {int dummy; } ;
struct TYPE_5__ {struct sockaddr s_addr; } ;
struct TYPE_8__ {int sin_port; TYPE_1__ sin_addr; } ;
struct TYPE_6__ {struct sockaddr* s6_addr; } ;
struct TYPE_7__ {int sin6_port; TYPE_2__ sin6_addr; int sin6_scope_id; } ;




 int FUNC_0 (struct sockaddr*,struct sockaddr*,int) ;
 TYPE_4__* FUNC_1 (struct sockaddr*) ;
 TYPE_3__* FUNC_2 (struct sockaddr*) ;

__attribute__((used)) static int
FUNC_3(
    struct sockaddr *VAR_0,
    struct sockaddr *VAR_1,
    int VAR_2)
{
    int VAR_3 = 0;
    int VAR_4 = 0;

 if (VAR_0->sa_family != VAR_1->sa_family || VAR_0->sa_len != VAR_1->sa_len)
  return 2;

    if (VAR_0->sa_len == 0)
        return 0;

 switch (VAR_0->sa_family) {
        case 129:
            if (VAR_0->sa_len != sizeof(struct sockaddr_in))
                return 2;

            VAR_3 = FUNC_0(&FUNC_1(VAR_0)->sin_addr.s_addr, &FUNC_1(VAR_1)->sin_addr.s_addr, sizeof(FUNC_1(VAR_0)->sin_addr.s_addr));

            if (VAR_2) {
                if (FUNC_1(VAR_0)->sin_port < FUNC_1(VAR_1)->sin_port) {
                    VAR_4 = -1;
                } else if (FUNC_1(VAR_0)->sin_port > FUNC_1(VAR_1)->sin_port) {
                    VAR_4 = 1;
                }

                if (VAR_3 == 0)
                    VAR_3 = VAR_4;
                else if ((VAR_3 > 0 && VAR_4 < 0) || (VAR_3 < 0 && VAR_4 > 0))
                    return 2;
            }

            break;
        case 128:
            if (VAR_0->sa_len != sizeof(struct sockaddr_in6))
                return 2;

            if (FUNC_2(VAR_0)->sin6_scope_id !=
                FUNC_2(VAR_1)->sin6_scope_id) {
                return 2;
            }

            VAR_3 = FUNC_0(&FUNC_2(VAR_0)->sin6_addr.s6_addr[0], &FUNC_2(VAR_1)->sin6_addr.s6_addr[0], sizeof(struct in6_addr));

            if (VAR_2) {
                if (FUNC_2(VAR_0)->sin6_port < FUNC_2(VAR_1)->sin6_port) {
                    VAR_4 = -1;
                } else if (FUNC_2(VAR_0)->sin6_port > FUNC_2(VAR_1)->sin6_port) {
                    VAR_4 = 1;
                }

                if (VAR_3 == 0)
                    VAR_3 = VAR_4;
                else if ((VAR_3 > 0 && VAR_4 < 0) || (VAR_3 < 0 && VAR_4 > 0))
                    return 2;
            }

            break;
        default:
            VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_0->sa_len);
            break;
 }

    if (VAR_3 < 0) VAR_3 = -1;
    else if (VAR_3 > 0) VAR_3 = 1;

 return VAR_3;
}
