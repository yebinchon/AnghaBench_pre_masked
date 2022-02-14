
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
typedef int buffer ;
struct TYPE_5__ {int pb; int ctx_flags; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int header_state; int imkh_cctv; int sofdec; } ;
typedef TYPE_1__ MpegDemuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2)
{
    MpegDemuxContext *VAR_3 = VAR_2->priv_data;
    char VAR_4[7] = { 0 };
    int64_t VAR_5 = FUNC_2(VAR_2->pb);

    VAR_3->header_state = 0xff;
    VAR_2->ctx_flags |= VAR_0;

    FUNC_0(VAR_2->pb, 6, VAR_4, sizeof(VAR_4));
    if (!FUNC_3("IMKH", VAR_4, 4)) {
        VAR_3->imkh_cctv = 1;
    } else if (!FUNC_3("Sofdec", VAR_4, 6)) {
        VAR_3->sofdec = 1;
    } else
       FUNC_1(VAR_2->pb, VAR_5, VAR_1);


    return 0;
}
