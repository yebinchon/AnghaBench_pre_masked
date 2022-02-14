
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; int id; } ;
typedef TYPE_1__ Token ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(Token *VAR_4) {
    if (VAR_4->kind != VAR_3)
        return 0;
    switch (VAR_4->id) {
    case 138: return '+';
    case 129: return '-';
    case 134: return '*';
    case 136: return '/';
    case 135: return '%';
    case 137: return '&';
    case 133: return '|';
    case 128: return '^';
    case 132: return VAR_0;
    case 131: return VAR_1;
    case 130: return VAR_2;
    default: return 0;
    }
}
