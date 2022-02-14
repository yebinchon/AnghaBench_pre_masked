
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t bpf_pc; int cur_ip; int * refs; } ;
typedef TYPE_1__ binary_stream ;
typedef int ULONG ;
typedef scalar_t__ UINT ;



void FUNC_0(binary_stream *VAR_0, ULONG VAR_1, UINT VAR_2)
{
 (VAR_0->refs)[VAR_0->bpf_pc]+=VAR_2;
 VAR_0->cur_ip+=VAR_2;
}
