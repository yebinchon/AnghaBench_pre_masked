
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int mpc_uint32_t ;
typedef int mpc_status ;
typedef int mpc_seek_t ;
typedef int mpc_int_t ;
typedef int mpc_int32_t ;
struct TYPE_10__ {int count; scalar_t__ buff; } ;
struct TYPE_9__ {int stream_version; int header_position; } ;
struct TYPE_11__ {int bytes_total; TYPE_2__ bits_reader; TYPE_1__ si; TYPE_4__* r; scalar_t__ block_frames; scalar_t__ block_bits; scalar_t__ buffer; } ;
typedef TYPE_3__ mpc_demux ;
struct TYPE_12__ {int (* seek ) (TYPE_4__*,int ) ;scalar_t__ (* tell ) (TYPE_4__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;

__attribute__((used)) static mpc_status
FUNC_4(mpc_demux * VAR_3, mpc_seek_t VAR_4, mpc_uint32_t VAR_5) {
 mpc_seek_t VAR_6, VAR_7;
 mpc_int_t VAR_8;


 VAR_7 = ((mpc_seek_t)(VAR_3->r->tell(VAR_3->r))) << 3;
 VAR_6 = VAR_7 - (VAR_3->bytes_total << 3);

 if (VAR_4 >= VAR_6 && VAR_4 < VAR_7) {
  VAR_3->bits_reader.buff = VAR_3->buffer + ((VAR_4 - VAR_6) >> 3);
  VAR_8 = VAR_4 & 7;
  VAR_3->block_bits = 0;
  VAR_3->block_frames = 0;
 } else {
  mpc_seek_t VAR_9 = VAR_4 >> 3;
  if (VAR_3->si.stream_version == 7)
   VAR_9 = ((VAR_9 - VAR_3->si.header_position) & (-1 << 2)) + VAR_3->si.header_position;
  VAR_8 = (int) (VAR_4 - (VAR_9 << 3));

  FUNC_0(VAR_3);
  if (!VAR_3->r->seek(VAR_3->r, (mpc_int32_t) VAR_9))
   return VAR_1;
 }

 if (VAR_3->si.stream_version == 7)
  FUNC_1(VAR_3, (VAR_5 + ((VAR_8 + 7) >> 3) + 3) & (~3), VAR_0);
 else
  FUNC_1(VAR_3, VAR_5 + ((VAR_8 + 7) >> 3), 0);
 VAR_3->bits_reader.buff += VAR_8 >> 3;
 VAR_3->bits_reader.count = 8 - (VAR_8 & 7);

 return VAR_2;
}
