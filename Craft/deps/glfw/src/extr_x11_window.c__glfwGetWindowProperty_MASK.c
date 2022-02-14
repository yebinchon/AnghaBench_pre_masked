
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int Window ;
struct TYPE_3__ {int display; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;
typedef scalar_t__ Atom ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,int ,int ,scalar_t__,scalar_t__*,int*,unsigned long*,unsigned long*,unsigned char**) ;
 TYPE_2__ VAR_3 ;

unsigned long FUNC_1(Window VAR_4,
                                     Atom VAR_5,
                                     Atom VAR_6,
                                     unsigned char** VAR_7)
{
    Atom VAR_8;
    int VAR_9;
    unsigned long VAR_10, VAR_11;

    FUNC_0(VAR_3.x11.display,
                       VAR_4,
                       VAR_5,
                       0,
                       VAR_2,
                       VAR_1,
                       VAR_6,
                       &VAR_8,
                       &VAR_9,
                       &VAR_10,
                       &VAR_11,
                       VAR_7);

    if (VAR_6 != VAR_0 && VAR_8 != VAR_6)
        return 0;

    return VAR_10;
}
