
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ mfxU16 ;
struct TYPE_3__ {scalar_t__ rc_mode; char const* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_1(mfxU16 VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
        if (VAR_1 == VAR_0[VAR_2].rc_mode)
            return VAR_0[VAR_2].name;
    return "unknown";
}
