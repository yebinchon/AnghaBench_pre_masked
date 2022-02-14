
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
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(RTMPContext* VAR_4, uint32_t *VAR_5,
                                  uint32_t *VAR_6, char *VAR_7,
                                  int VAR_8)
{
    int VAR_9;

    VAR_9 = FUNC_3(VAR_4->stream, VAR_7,
                                    VAR_3);
    if (VAR_9 <= 0)
        return FUNC_0(VAR_2);
    if (VAR_9 != VAR_3) {
        FUNC_2(VAR_4, VAR_0, "Erroneous Message size %d"
               " not following standard\n", (int)VAR_9);
        return FUNC_0(VAR_1);
    }

    *VAR_5 = FUNC_1(VAR_7);
    *VAR_6 = FUNC_1(VAR_7 + 4);
    return 0;
}
