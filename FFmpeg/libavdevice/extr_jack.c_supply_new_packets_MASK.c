
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pkt ;
struct TYPE_3__ {int buffer_size; int nports; int new_pkts; } ;
typedef TYPE_1__ JackData ;
typedef int AVPacket ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char*,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(JackData *VAR_1, AVFormatContext *VAR_2)
{
    AVPacket VAR_3;
    int VAR_4, VAR_5 = VAR_1->buffer_size * VAR_1->nports * sizeof(float);




    while (FUNC_1(VAR_1->new_pkts) >= sizeof(VAR_3)) {
        if ((VAR_4 = FUNC_3(&VAR_3, VAR_5)) < 0) {
            FUNC_2(VAR_2, VAR_0, "Could not create packet of size %d\n", VAR_5);
            return VAR_4;
        }
        FUNC_0(VAR_1->new_pkts, &VAR_3, sizeof(VAR_3), ((void*)0));
    }
    return 0;
}
