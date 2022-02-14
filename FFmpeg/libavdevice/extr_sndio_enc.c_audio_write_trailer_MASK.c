
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int buffer_offset; int buffer; int hdl; } ;
typedef TYPE_1__ SndioData ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0)
{
    SndioData *VAR_1 = VAR_0->priv_data;

    FUNC_1(VAR_1->hdl, VAR_1->buffer, VAR_1->buffer_offset);

    FUNC_0(VAR_1);

    return 0;
}
