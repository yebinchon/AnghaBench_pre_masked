
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_16__ {scalar_t__ expected_readorder; int ignore_readorder; scalar_t__ ssa_mode; } ;
struct TYPE_15__ {TYPE_4__* priv_data; } ;
struct TYPE_14__ {char* data; int pts; int duration; } ;
struct TYPE_13__ {scalar_t__ readorder; int line; } ;
typedef TYPE_1__ DialogueLine ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ ASSContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,long,int,int,int,int,int,int,int,int,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,int ,char*,scalar_t__) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (char*,char*,int) ;
 void* FUNC_8 (char*,char**,int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_2, AVPacket *VAR_3)
{
    ASSContext *VAR_4 = VAR_2->priv_data;

    long int VAR_5;
    char *VAR_6 = VAR_3->data;
    int64_t VAR_7 = VAR_3->pts;
    int64_t VAR_8 = VAR_7 + VAR_3->duration;
    int VAR_9, VAR_10, VAR_11, VAR_12;
    int VAR_13, VAR_14, VAR_15, VAR_16;
    DialogueLine *VAR_17 = FUNC_4(sizeof(*VAR_17));

    if (!VAR_17)
        return FUNC_0(VAR_1);

    VAR_17->readorder = FUNC_8(VAR_6, &VAR_6, 10);
    if (VAR_17->readorder < VAR_4->expected_readorder)
        FUNC_3(VAR_2, VAR_0, "Unexpected ReadOrder %d\n",
               VAR_17->readorder);
    if (*VAR_6 == ',')
        VAR_6++;

    if (VAR_4->ssa_mode && !FUNC_7(VAR_6, "Marked=", 7))
        VAR_6 += 7;

    VAR_5 = FUNC_8(VAR_6, &VAR_6, 10);
    if (*VAR_6 == ',')
        VAR_6++;
    VAR_9 = (int)(VAR_7 / 360000); VAR_10 = (int)(VAR_7 / 6000) % 60;
    VAR_13 = (int)(VAR_8 / 360000); VAR_14 = (int)(VAR_8 / 6000) % 60;
    VAR_11 = (int)(VAR_7 / 100) % 60; VAR_12 = (int)(VAR_7 % 100);
    VAR_15 = (int)(VAR_8 / 100) % 60; VAR_16 = (int)(VAR_8 % 100);
    if (VAR_9 > 9) VAR_9 = 9, VAR_10 = 59, VAR_11 = 59, VAR_12 = 99;
    if (VAR_13 > 9) VAR_13 = 9, VAR_14 = 59, VAR_15 = 59, VAR_16 = 99;

    VAR_17->line = FUNC_1("%s%ld,%d:%02d:%02d.%02d,%d:%02d:%02d.%02d,%s",
                                 VAR_4->ssa_mode ? "Marked=" : "",
                                 VAR_5, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_6);
    if (!VAR_17->line) {
        FUNC_2(VAR_17);
        return FUNC_0(VAR_1);
    }
    FUNC_5(VAR_4, VAR_17);
    FUNC_6(VAR_2, VAR_4->ignore_readorder);

    return 0;
}
