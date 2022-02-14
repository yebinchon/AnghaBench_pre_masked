
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int interp; int remap_line; } ;
typedef TYPE_1__ V360Context ;


 scalar_t__ VAR_0 ;




 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_1(V360Context *VAR_7, int VAR_8)
{
    switch (VAR_7->interp) {
    case 128:
        VAR_7->remap_line = VAR_8 <= 8 ? VAR_2 : VAR_1;
        break;
    case 130:
        VAR_7->remap_line = VAR_8 <= 8 ? VAR_4 : VAR_3;
        break;
    case 131:
    case 129:
        VAR_7->remap_line = VAR_8 <= 8 ? VAR_6 : VAR_5;
        break;
    }

    if (VAR_0)
        FUNC_0(VAR_7, VAR_8);
}
