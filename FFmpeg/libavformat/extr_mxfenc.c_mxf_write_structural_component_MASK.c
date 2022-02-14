
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_25__ {TYPE_5__* pb; TYPE_3__* priv_data; } ;
struct TYPE_24__ {scalar_t__ buf_ptr; } ;
struct TYPE_23__ {scalar_t__ index; } ;
struct TYPE_22__ {int track_instance_count; } ;
struct TYPE_21__ {scalar_t__ type; TYPE_1__* ref; } ;
struct TYPE_20__ {int instance; } ;
typedef TYPE_2__ MXFPackage ;
typedef TYPE_3__ MXFContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (TYPE_6__*,char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_5__*,scalar_t__) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,int,int) ;
 int FUNC_6 (TYPE_5__*,int) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 int FUNC_8 (TYPE_5__*,int ,int ) ;

__attribute__((used)) static void FUNC_9(AVFormatContext *VAR_2, AVStream *VAR_3, MXFPackage *VAR_4)
{
    MXFContext *VAR_5 = VAR_2->priv_data;
    AVIOContext *VAR_6 = VAR_2->pb;
    int VAR_7;

    FUNC_6(VAR_6, 0x011100);
    FUNC_0(VAR_2, "sturctural component key", VAR_6->buf_ptr - 16);
    FUNC_3(VAR_6, 108);


    FUNC_5(VAR_6, 16, 0x3C0A);
    FUNC_8(VAR_6, VAR_0, VAR_5->track_instance_count);

    FUNC_0(VAR_2, "structural component uid", VAR_6->buf_ptr - 16);
    FUNC_4(VAR_2, VAR_3);


    FUNC_5(VAR_6, 8, 0x1201);
    FUNC_2(VAR_6, 0);


    FUNC_5(VAR_6, 32, 0x1101);
    if (!VAR_4->ref) {
        for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
            FUNC_2(VAR_6, 0);
    } else
        FUNC_7(VAR_2, VAR_4->ref->instance);


    FUNC_5(VAR_6, 4, 0x1102);
    if (VAR_4->type == VAR_1 && !VAR_4->ref)
        FUNC_1(VAR_6, 0);
    else
        FUNC_1(VAR_6, VAR_3->index+2);
}
