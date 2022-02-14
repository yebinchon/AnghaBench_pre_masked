
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct peer_svc {int chrs; } ;
struct TYPE_2__ {scalar_t__ val_handle; } ;
struct peer_chr {TYPE_1__ chr; } ;


 struct peer_chr* FUNC_0 (int *) ;
 struct peer_chr* FUNC_1 (struct peer_chr*,int ) ;
 int VAR_0 ;
 struct peer_chr* FUNC_2 (struct peer_svc const*,scalar_t__) ;

__attribute__((used)) static struct peer_chr *
FUNC_3(const struct peer_svc *VAR_1, uint16_t VAR_2,
              struct peer_chr **VAR_3)
{
    struct peer_chr *VAR_4;
    struct peer_chr *VAR_5;

    VAR_4 = FUNC_2(VAR_1, VAR_2);
    if (VAR_4 == ((void*)0)) {
        VAR_5 = FUNC_0(&VAR_1->chrs);
    } else {
        VAR_5 = FUNC_1(VAR_4, VAR_0);
    }

    if (VAR_5 != ((void*)0) && VAR_5->chr.val_handle != VAR_2) {
        VAR_5 = ((void*)0);
    }

    if (VAR_3 != ((void*)0)) {
        *VAR_3 = VAR_4;
    }
    return VAR_5;
}
