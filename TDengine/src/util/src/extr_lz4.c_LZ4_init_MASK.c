
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * bufferStart; } ;
struct TYPE_6__ {TYPE_1__ internal_donotuse; } ;
typedef TYPE_2__ LZ4_stream_t ;
typedef int BYTE ;


 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_1(LZ4_stream_t* VAR_0, BYTE* VAR_1)
{
    FUNC_0(VAR_0, 0, sizeof(LZ4_stream_t));
    VAR_0->internal_donotuse.bufferStart = VAR_1;
}
