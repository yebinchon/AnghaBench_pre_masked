
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef enum AVFieldOrder { ____Placeholder_AVFieldOrder } AVFieldOrder ;
struct TYPE_12__ {int nb_streams; TYPE_4__** streams; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {int size; } ;
struct TYPE_9__ {TYPE_7__* fc; } ;
struct TYPE_8__ {int field_order; } ;
typedef TYPE_2__ MOVContext ;
typedef TYPE_3__ MOVAtom ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_7__*,int ,char*,unsigned int) ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(MOVContext *VAR_8, AVIOContext *VAR_9, MOVAtom VAR_10)
{
    AVStream *VAR_11;
    unsigned VAR_12;
    enum AVFieldOrder VAR_13 = VAR_6;

    if (VAR_8->fc->nb_streams < 1)
        return 0;
    VAR_11 = VAR_8->fc->streams[VAR_8->fc->nb_streams-1];
    if (VAR_10.size < 2)
        return VAR_0;
    VAR_12 = FUNC_1(VAR_9);
    if ((VAR_12 & 0xFF00) == 0x0100)
        VAR_13 = VAR_3;
    else if ((VAR_12 & 0xFF00) == 0x0200) {
        switch (VAR_12 & 0xFF) {
        case 0x01: VAR_13 = VAR_5;
                   break;
        case 0x06: VAR_13 = VAR_1;
                   break;
        case 0x09: VAR_13 = VAR_4;
                   break;
        case 0x0E: VAR_13 = VAR_2;
                   break;
        }
    }
    if (VAR_13 == VAR_6 && VAR_12) {
        FUNC_0(VAR_8->fc, VAR_7, "Unknown MOV field order 0x%04x\n", VAR_12);
    }
    VAR_11->codecpar->field_order = VAR_13;

    return 0;
}
