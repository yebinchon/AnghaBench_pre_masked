
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mpc_seek_t ;
struct TYPE_5__ {int buff; int count; } ;
struct TYPE_6__ {int bytes_total; int buffer; TYPE_1__ bits_reader; TYPE_3__* r; } ;
typedef TYPE_2__ mpc_demux ;
struct TYPE_7__ {scalar_t__ (* tell ) (TYPE_3__*) ;} ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;

mpc_seek_t FUNC_1(mpc_demux * VAR_0)
{
 return (((mpc_seek_t)(VAR_0->r->tell(VAR_0->r)) - VAR_0->bytes_total +
          VAR_0->bits_reader.buff - VAR_0->buffer) << 3) + 8 - VAR_0->bits_reader.count;
}
