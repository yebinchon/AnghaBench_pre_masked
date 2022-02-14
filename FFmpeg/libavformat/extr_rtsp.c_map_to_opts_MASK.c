
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {int buffer_size; int pkt_size; } ;
typedef TYPE_1__ RTSPState ;
typedef int AVDictionary ;


 int FUNC_0 (int **,char*,char*,int ) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static AVDictionary *FUNC_2(RTSPState *VAR_0)
{
    AVDictionary *VAR_1 = ((void*)0);
    char VAR_2[256];

    FUNC_1(VAR_2, sizeof(VAR_2), "%d", VAR_0->buffer_size);
    FUNC_0(&VAR_1, "buffer_size", VAR_2, 0);
    FUNC_1(VAR_2, sizeof(VAR_2), "%d", VAR_0->pkt_size);
    FUNC_0(&VAR_1, "pkt_size", VAR_2, 0);

    return VAR_1;
}
