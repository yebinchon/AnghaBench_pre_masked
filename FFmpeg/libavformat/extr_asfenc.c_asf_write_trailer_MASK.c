
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_16__ {int seekable; } ;
struct TYPE_13__ {scalar_t__ buf_ptr; scalar_t__ buffer; } ;
struct TYPE_15__ {int index_ptr; scalar_t__ data_offset; scalar_t__ is_streamed; scalar_t__ next_start_sec; int maximum_packet; scalar_t__ end_sec; TYPE_1__ pb; } ;
struct TYPE_14__ {TYPE_7__* pb; TYPE_3__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASFContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int,int ,int ) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_2)
{
    ASFContext *VAR_3 = VAR_2->priv_data;
    int64_t VAR_4, VAR_5;
    int VAR_6;


    if (VAR_3->pb.buf_ptr > VAR_3->pb.buffer)
        FUNC_6(VAR_2);


    VAR_5 = FUNC_5(VAR_2->pb);
    if (!VAR_3->is_streamed && VAR_3->next_start_sec) {
        if ((VAR_6 = FUNC_8(VAR_2, VAR_3->end_sec + 1, 0, 0, 0)) < 0)
            return VAR_6;
        FUNC_1(VAR_2, VAR_3->index_ptr, VAR_3->maximum_packet, VAR_3->next_start_sec);
    }
    FUNC_3(VAR_2->pb);

    if (VAR_3->is_streamed || !(VAR_2->pb->seekable & VAR_0)) {
        FUNC_7(VAR_2, 0x4524, 0, 0);
    } else {

        VAR_4 = FUNC_5(VAR_2->pb);
        FUNC_4(VAR_2->pb, 0, VAR_1);
        FUNC_0(VAR_2, VAR_4, VAR_5 - VAR_3->data_offset);
    }

    FUNC_2(&VAR_3->index_ptr);
    return 0;
}
