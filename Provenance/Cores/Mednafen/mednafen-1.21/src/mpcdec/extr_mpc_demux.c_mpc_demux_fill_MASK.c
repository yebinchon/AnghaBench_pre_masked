
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ mpc_uint32_t ;
typedef scalar_t__ mpc_int32_t ;
struct TYPE_6__ {int count; scalar_t__ buff; } ;
struct TYPE_7__ {scalar_t__ bytes_total; scalar_t__ buffer; TYPE_3__* r; TYPE_1__ bits_reader; } ;
typedef TYPE_2__ mpc_demux ;
struct TYPE_8__ {scalar_t__ (* read ) (TYPE_3__*,scalar_t__,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static mpc_uint32_t
FUNC_5(mpc_demux * VAR_3, mpc_uint32_t VAR_4, int VAR_5)
{
 mpc_uint32_t VAR_6 = (mpc_uint32_t) FUNC_3(VAR_3);
 int VAR_7 = 0;

 if ((mpc_int32_t) VAR_6 < 0)
  return 0;

 if (VAR_4 == 0 || VAR_4 > VAR_0 ||
      (VAR_6 < VAR_4 && (VAR_5 & VAR_1) != 0 ))
  VAR_4 = VAR_0;

 if (VAR_6 < VAR_4) {
  mpc_uint32_t VAR_8 = VAR_4 - VAR_6;
  mpc_uint32_t VAR_9 = VAR_0 - VAR_3->bytes_total;
  mpc_uint32_t VAR_10;

  if (VAR_5 & VAR_2) {
   VAR_8 &= -1 << 2;
   VAR_7 = (VAR_6 + 3) & ( -1 << 2);
   VAR_7 -= VAR_6;
  }

  if (VAR_8 > VAR_9) {
   if (VAR_3->bits_reader.count == 0) {
    VAR_3->bits_reader.count = 8;
    VAR_3->bits_reader.buff++;
   }
   FUNC_0(VAR_3->buffer + VAR_7, VAR_3->bits_reader.buff, VAR_6);
   VAR_3->bits_reader.buff = VAR_3->buffer + VAR_7;
   VAR_3->bytes_total = VAR_6 + VAR_7;
  }
  VAR_10 = VAR_3->r->read(VAR_3->r, VAR_3->buffer + VAR_3->bytes_total, VAR_8);
  if (VAR_10 < VAR_8) {
   FUNC_1(VAR_3->buffer + VAR_3->bytes_total + VAR_10, 0, VAR_8 - VAR_10);
  }
  if (VAR_5 & VAR_2) {
   unsigned int VAR_11, * VAR_12 = (unsigned int *) (VAR_3->buffer + VAR_3->bytes_total);
   for(VAR_11 = 0 ;VAR_11 < (VAR_8 >> 2); VAR_11++)
    VAR_12[VAR_11] = FUNC_2(VAR_12[VAR_11]);
  }
  VAR_3->bytes_total += VAR_10;
  VAR_6 += VAR_10;
 }

 return VAR_6;
}
