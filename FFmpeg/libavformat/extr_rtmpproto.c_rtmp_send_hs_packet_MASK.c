
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int stream; } ;
typedef TYPE_1__ RTMPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(RTMPContext* VAR_3, uint32_t VAR_4,
                               uint32_t VAR_5, char *VAR_6, int VAR_7)
{
    int VAR_8;

    FUNC_1(VAR_6, VAR_4);
    FUNC_1(VAR_6 + 4, VAR_5);
    VAR_8 = FUNC_3(VAR_3->stream, VAR_6,
                            VAR_2);
    if (VAR_8 != VAR_2) {
        FUNC_2(VAR_3, VAR_0, "Unable to write answer\n");
        return FUNC_0(VAR_1);
    }

    return 0;
}
