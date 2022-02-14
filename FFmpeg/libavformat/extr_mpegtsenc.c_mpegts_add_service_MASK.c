
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int default_service_name ;
struct TYPE_17__ {char* value; } ;
struct TYPE_16__ {TYPE_2__* priv_data; } ;
struct TYPE_13__ {int cc; int discontinuity; TYPE_4__* opaque; int write_packet; scalar_t__ pid; } ;
struct TYPE_15__ {int sid; int pcr_pid; int * program; TYPE_1__ pmt; int name; int provider_name; } ;
struct TYPE_14__ {int flags; scalar_t__ nb_services; int services; scalar_t__ pmt_start_pid; } ;
typedef TYPE_2__ MpegTSWrite ;
typedef TYPE_3__ MpegTSService ;
typedef int AVProgram ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (int const*,char*,int *,int ) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 TYPE_3__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,char const*) ;
 int VAR_4 ;
 int FUNC_6 (char*,int,char*,char*,scalar_t__) ;

__attribute__((used)) static MpegTSService *FUNC_7(AVFormatContext *VAR_5, int VAR_6,
                                         const AVDictionary *VAR_7,
                                         AVProgram *VAR_8)
{
    MpegTSWrite *VAR_9 = VAR_5->priv_data;
    MpegTSService *VAR_10;
    AVDictionaryEntry *VAR_11, *VAR_12;
    char VAR_13[32];
    const char *VAR_14;
    const char *VAR_15;

    VAR_11 = FUNC_0(VAR_7, "service_name", ((void*)0), 0);
    if (!VAR_11)
        VAR_11 = FUNC_0(VAR_7, "title", ((void*)0), 0);
    FUNC_6(VAR_13, sizeof(VAR_13), "%s%02d", VAR_2, VAR_9->nb_services + 1);
    VAR_14 = VAR_11 ? VAR_11->value : VAR_13;
    VAR_12 = FUNC_0(VAR_7, "service_provider", ((void*)0), 0);
    VAR_15 = VAR_12 ? VAR_12->value : VAR_1;

    VAR_10 = FUNC_4(sizeof(MpegTSService));
    if (!VAR_10)
        return ((void*)0);
    VAR_10->pmt.pid = VAR_9->pmt_start_pid + VAR_9->nb_services;
    VAR_10->sid = VAR_6;
    VAR_10->pcr_pid = 0x1fff;
    if (FUNC_5(VAR_10->provider_name, VAR_15) < 0 ||
        FUNC_5(VAR_10->name, VAR_14) < 0) {
        FUNC_3(VAR_5, VAR_0, "Too long service or provider name\n");
        goto fail;
    }
    if (FUNC_1(&VAR_9->services, &VAR_9->nb_services, VAR_10) < 0)
        goto fail;

    VAR_10->pmt.write_packet = VAR_4;
    VAR_10->pmt.opaque = VAR_5;
    VAR_10->pmt.cc = 15;
    VAR_10->pmt.discontinuity= VAR_9->flags & VAR_3;
    VAR_10->program = VAR_8;

    return VAR_10;
fail:
    FUNC_2(VAR_10);
    return ((void*)0);
}
