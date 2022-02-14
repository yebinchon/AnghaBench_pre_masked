
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int rbuf ;
struct TYPE_15__ {TYPE_1__* priv_data; } ;
struct TYPE_14__ {scalar_t__ seq; } ;
struct TYPE_13__ {scalar_t__ seq; scalar_t__* session_id; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ RTSPMessageHeader ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,char*,scalar_t__,...) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,char*,TYPE_1__*,char const*) ;
 int FUNC_4 (TYPE_3__*,char*,int,int*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static inline int FUNC_6(AVFormatContext *VAR_3,
                                    RTSPMessageHeader *VAR_4,
                                    const char *VAR_5)
{
    RTSPState *VAR_6 = VAR_3->priv_data;
    char VAR_7[1024];
    int VAR_8, VAR_9;
    do {
        VAR_9 = FUNC_4(VAR_3, VAR_7, sizeof(VAR_7), &VAR_8);
        if (VAR_9)
            return VAR_9;
        if (VAR_8 > 1) {
            FUNC_1(VAR_3, VAR_1, "Parsing[%d]: %s\n", VAR_8, VAR_7);
            FUNC_3(VAR_3, VAR_4, VAR_7, VAR_6, VAR_5);
        }
    } while (VAR_8 > 0);
    if (VAR_4->seq != VAR_6->seq + 1) {
        FUNC_1(VAR_3, VAR_0, "Unexpected Sequence number %d\n",
               VAR_4->seq);
        return FUNC_0(VAR_2);
    }
    if (VAR_6->session_id[0] && FUNC_5(VAR_5, "OPTIONS")) {
        VAR_9 = FUNC_2(VAR_3, VAR_4);
        if (VAR_9)
            return VAR_9;
    }

    return 0;
}
