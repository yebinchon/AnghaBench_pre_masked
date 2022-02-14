
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; int buff; } ;
struct TYPE_5__ {scalar_t__ block_frames; scalar_t__ block_bits; TYPE_1__ bits_reader; int buffer; scalar_t__ bytes_total; } ;
typedef TYPE_2__ mpc_demux ;



__attribute__((used)) static void FUNC_0(mpc_demux * VAR_0)
{
 VAR_0->bytes_total = 0;
 VAR_0->bits_reader.buff = VAR_0->buffer;
 VAR_0->bits_reader.count = 8;
 VAR_0->block_bits = 0;
 VAR_0->block_frames = 0;
}
