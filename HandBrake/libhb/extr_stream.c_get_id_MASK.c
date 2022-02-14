
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stream_id_ext; int stream_id; } ;
typedef TYPE_1__ hb_pes_stream_t ;



__attribute__((used)) static int FUNC_0(hb_pes_stream_t *VAR_0)
{
    return ( VAR_0->stream_id_ext << 16 ) + VAR_0->stream_id;
}
