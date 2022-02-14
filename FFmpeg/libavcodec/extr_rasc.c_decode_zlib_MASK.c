
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int avail_out; scalar_t__ next_out; int avail_in; scalar_t__ next_in; } ;
struct TYPE_11__ {TYPE_1__* priv_data; } ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_9__ {TYPE_4__ zstream; int delta_size; scalar_t__ delta; int gb; } ;
typedef TYPE_1__ RASCContext ;
typedef int GetByteContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (scalar_t__*,int *,unsigned int) ;
 int FUNC_3 (TYPE_3__*,int ,char*,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_7, AVPacket *VAR_8,
                       unsigned VAR_9, unsigned VAR_10)
{
    RASCContext *VAR_11 = VAR_7->priv_data;
    GetByteContext *VAR_12 = &VAR_11->gb;
    int VAR_13;

    VAR_13 = FUNC_7(&VAR_11->zstream);
    if (VAR_13 != VAR_5) {
        FUNC_3(VAR_7, VAR_2, "Inflate reset error: %d\n", VAR_13);
        return VAR_0;
    }

    FUNC_2(&VAR_11->delta, &VAR_11->delta_size, VAR_10);
    if (!VAR_11->delta)
        return FUNC_0(VAR_3);

    VAR_11->zstream.next_in = VAR_8->data + FUNC_5(VAR_12);
    VAR_11->zstream.avail_in = FUNC_1(VAR_9, FUNC_4(VAR_12));

    VAR_11->zstream.next_out = VAR_11->delta;
    VAR_11->zstream.avail_out = VAR_11->delta_size;

    VAR_13 = FUNC_6(&VAR_11->zstream, VAR_4);
    if (VAR_13 != VAR_6) {
        FUNC_3(VAR_7, VAR_2,
               "Inflate failed with return code: %d.\n", VAR_13);
        return VAR_1;
    }

    return 0;
}
