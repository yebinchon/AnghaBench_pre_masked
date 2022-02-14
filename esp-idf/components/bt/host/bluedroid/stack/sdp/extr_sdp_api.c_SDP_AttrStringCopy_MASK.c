
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ array; } ;
struct TYPE_6__ {TYPE_1__ v; } ;
struct TYPE_7__ {TYPE_2__ attr_value; int attr_len_type; } ;
typedef TYPE_3__ tSDP_DISC_ATTR ;
typedef int UINT16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, tSDP_DISC_ATTR *VAR_1, UINT16 VAR_2)
{
    if ( VAR_0 == ((void*)0) ) {
        return;
    }
    if ( VAR_1 ) {
        UINT16 VAR_3 = FUNC_0(VAR_1->attr_len_type);
        if ( VAR_3 > VAR_2 - 1 ) {
            VAR_3 = VAR_2 - 1;
        }
        FUNC_1(VAR_0, (char *)VAR_1->attr_value.v.array, VAR_3);
        VAR_0[VAR_3] = '\0';
    } else {
        VAR_0[0] = '\0';
    }
}
