
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__ start_handle; } ;
struct peer_svc {TYPE_1__ svc; } ;
struct peer {int svcs; } ;


 struct peer_svc* FUNC_0 (int *) ;
 struct peer_svc* FUNC_1 (struct peer_svc*,int ) ;
 int VAR_0 ;
 struct peer_svc* FUNC_2 (struct peer*,scalar_t__) ;

__attribute__((used)) static struct peer_svc *
FUNC_3(struct peer *VAR_1, uint16_t VAR_2,
              struct peer_svc **VAR_3)
{
    struct peer_svc *VAR_4;
    struct peer_svc *VAR_5;

    VAR_4 = FUNC_2(VAR_1, VAR_2);
    if (VAR_4 == ((void*)0)) {
        VAR_5 = FUNC_0(&VAR_1->svcs);
    } else {
        VAR_5 = FUNC_1(VAR_4, VAR_0);
    }

    if (VAR_5 != ((void*)0) && VAR_5->svc.start_handle != VAR_2) {
        VAR_5 = ((void*)0);
    }

    if (VAR_3 != ((void*)0)) {
        *VAR_3 = VAR_4;
    }
    return VAR_5;
}
