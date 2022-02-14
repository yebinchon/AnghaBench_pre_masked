
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int available; } ;
struct TYPE_5__ {int* nativeKeys; char const* keyName; int display; int * publicKeys; TYPE_1__ xkb; } ;
struct TYPE_6__ {TYPE_2__ x11; } ;
typedef scalar_t__ KeySym ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ,scalar_t__*,int ,char const*,int,int*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;

const char* FUNC_4(int VAR_3, int VAR_4)
{
    KeySym VAR_5;
    int VAR_6;

    if (!VAR_2.x11.xkb.available)
        return ((void*)0);

    if (VAR_3 != VAR_0)
        VAR_4 = VAR_2.x11.nativeKeys[VAR_3];

    if (!FUNC_2(VAR_2.x11.publicKeys[VAR_4]))
        return ((void*)0);

    VAR_5 = FUNC_0(VAR_2.x11.display, VAR_4, 0, 0);
    if (VAR_5 == VAR_1)
      return ((void*)0);

    FUNC_1(VAR_2.x11.display, &VAR_5, 0,
                       VAR_2.x11.keyName, sizeof(VAR_2.x11.keyName),
                       &VAR_6);

    if (!FUNC_3(VAR_2.x11.keyName))
        return ((void*)0);

    return VAR_2.x11.keyName;
}
