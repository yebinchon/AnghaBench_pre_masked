
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__ handle; } ;
struct peer_dsc {TYPE_1__ dsc; } ;
struct peer_chr {int dscs; } ;


 struct peer_dsc* FUNC_0 (int *) ;
 struct peer_dsc* FUNC_1 (struct peer_dsc*,int ) ;
 int VAR_0 ;
 struct peer_dsc* FUNC_2 (struct peer_chr const*,scalar_t__) ;

__attribute__((used)) static struct peer_dsc *
FUNC_3(const struct peer_chr *VAR_1, uint16_t VAR_2,
              struct peer_dsc **VAR_3)
{
    struct peer_dsc *VAR_4;
    struct peer_dsc *VAR_5;

    VAR_4 = FUNC_2(VAR_1, VAR_2);
    if (VAR_4 == ((void*)0)) {
        VAR_5 = FUNC_0(&VAR_1->dscs);
    } else {
        VAR_5 = FUNC_1(VAR_4, VAR_0);
    }

    if (VAR_5 != ((void*)0) && VAR_5->dsc.handle != VAR_2) {
        VAR_5 = ((void*)0);
    }

    if (VAR_3 != ((void*)0)) {
        *VAR_3 = VAR_4;
    }
    return VAR_5;
}
