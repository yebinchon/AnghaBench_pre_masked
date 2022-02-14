
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LZ4_stream_t_internal ;
typedef int LZ4_stream_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,int *) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

LZ4_stream_t* FUNC_4(void)
{
    LZ4_stream_t* VAR_1 = (LZ4_stream_t*)FUNC_0(sizeof(LZ4_stream_t));
    FUNC_2(VAR_0 >= sizeof(LZ4_stream_t_internal));
    FUNC_1(4, "LZ4_createStream %p", VAR_1);
    if (VAR_1 == ((void*)0)) return ((void*)0);
    FUNC_3(VAR_1);
    return VAR_1;
}
