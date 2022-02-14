
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* ttl; char const* buffer_size; char const* pkt_size; char const* dscp; scalar_t__ connect; } ;
typedef TYPE_1__ RTPContext ;


 int FUNC_0 (char*,int,char*,int *,char const*,int,int *) ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_2(RTPContext *VAR_0,
                          char *VAR_1, int VAR_2,
                          const char *VAR_3,
                          int VAR_4, int VAR_5,
                          const char *VAR_6,
                          const char *VAR_7)
{
    FUNC_0(VAR_1, VAR_2, "udp", ((void*)0), VAR_3, VAR_4, ((void*)0));
    if (VAR_5 >= 0)
        FUNC_1(VAR_1, VAR_2, "localport=%d", VAR_5);
    if (VAR_0->ttl >= 0)
        FUNC_1(VAR_1, VAR_2, "ttl=%d", VAR_0->ttl);
    if (VAR_0->buffer_size >= 0)
        FUNC_1(VAR_1, VAR_2, "buffer_size=%d", VAR_0->buffer_size);
    if (VAR_0->pkt_size >= 0)
        FUNC_1(VAR_1, VAR_2, "pkt_size=%d", VAR_0->pkt_size);
    if (VAR_0->connect)
        FUNC_1(VAR_1, VAR_2, "connect=1");
    if (VAR_0->dscp >= 0)
        FUNC_1(VAR_1, VAR_2, "dscp=%d", VAR_0->dscp);
    FUNC_1(VAR_1, VAR_2, "fifo_size=0");
    if (VAR_6 && VAR_6[0])
        FUNC_1(VAR_1, VAR_2, "sources=%s", VAR_6);
    if (VAR_7 && VAR_7[0])
        FUNC_1(VAR_1, VAR_2, "block=%s", VAR_7);
}
