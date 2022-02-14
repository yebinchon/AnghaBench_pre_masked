
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int bd; } ;
typedef TYPE_2__ BlurayContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_2, unsigned char *VAR_3, int VAR_4)
{
    BlurayContext *VAR_5 = VAR_2->priv_data;
    int VAR_6;

    if (!VAR_5 || !VAR_5->bd) {
        return FUNC_0(VAR_1);
    }

    VAR_6 = FUNC_1(VAR_5->bd, VAR_3, VAR_4);

    return VAR_6 == 0 ? VAR_0 : VAR_6;
}
