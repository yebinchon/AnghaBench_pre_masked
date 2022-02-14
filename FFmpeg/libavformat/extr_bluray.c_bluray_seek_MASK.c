
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int bd; } ;
typedef TYPE_2__ BlurayContext ;


 int FUNC_0 (int ) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (TYPE_1__*,int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int64_t FUNC_4(URLContext *VAR_3, int64_t VAR_4, int VAR_5)
{
    BlurayContext *VAR_6 = VAR_3->priv_data;

    if (!VAR_6 || !VAR_6->bd) {
        return FUNC_0(VAR_1);
    }

    switch (VAR_5) {
    case 128:
    case 130:
    case 129:
        return FUNC_3(VAR_6->bd, VAR_4);

    case 131:
        return FUNC_2(VAR_6->bd);
    }

    FUNC_1(VAR_3, VAR_0, "Unsupported whence operation %d\n", VAR_5);
    return FUNC_0(VAR_2);
}
