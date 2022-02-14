
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mpc_uint_t ;
typedef int mpc_uint64_t ;
typedef int mpc_uint32_t ;
typedef int mpc_status ;
typedef int mpc_seek_t ;
struct TYPE_4__ {int block_pwr; int samples; scalar_t__ header_position; } ;
struct TYPE_5__ {int* seek_table; int seek_pwr; int seek_table_size; TYPE_1__ si; int bits_reader; } ;
typedef TYPE_2__ mpc_demux ;
typedef int mpc_bits_reader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (size_t) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static mpc_status FUNC_4(mpc_demux * VAR_3)
{
 mpc_uint64_t VAR_4;
 mpc_seek_t * VAR_5, VAR_6[2];
 mpc_bits_reader VAR_7 = VAR_3->bits_reader;
 mpc_uint_t VAR_8, VAR_9 = 0, VAR_10;
 mpc_uint32_t VAR_11;

 if (VAR_3->seek_table != 0)
  return VAR_2;

 FUNC_1(&VAR_7, &VAR_4);
 VAR_11 = (mpc_seek_t) VAR_4;
 VAR_3->seek_pwr = VAR_3->si.block_pwr + FUNC_3(&VAR_7, 4);

 VAR_4 = 2 + VAR_3->si.samples / (VAR_1 << VAR_3->seek_pwr);
 while (VAR_4 > VAR_0) {
  VAR_3->seek_pwr++;
  VAR_9++;
  VAR_4 = 2 + VAR_3->si.samples / (VAR_1 << VAR_3->seek_pwr);
 }
 if ((VAR_11 >> VAR_9) > VAR_4)
  VAR_11 = VAR_4 << VAR_9;
 VAR_3->seek_table = FUNC_0((size_t) (VAR_4 * sizeof(mpc_seek_t)));
 VAR_3->seek_table_size = (VAR_11 + ((1 << VAR_9) - 1)) >> VAR_9;

 VAR_5 = VAR_3->seek_table;
 FUNC_1(&VAR_7, &VAR_4);
 VAR_5[0] = VAR_6[0] = (mpc_seek_t) (VAR_4 + VAR_3->si.header_position) * 8;

 if (VAR_3->seek_table_size == 1)
  return VAR_2;

 FUNC_1(&VAR_7, &VAR_4);
 VAR_6[1] = (mpc_seek_t) (VAR_4 + VAR_3->si.header_position) * 8;
 if (VAR_9 == 0) VAR_5[1] = VAR_6[1];

 VAR_10 = (1 << VAR_9) - 1;
 for (VAR_8 = 2; VAR_8 < VAR_11; VAR_8++) {
  int VAR_12 = FUNC_2(&VAR_7, 12);
  if (VAR_12 & 1)
   VAR_12 = -(VAR_12 & (-1 << 1));
  VAR_12 <<= 2;
  VAR_6[VAR_8 & 1] = VAR_12 + 2 * VAR_6[(VAR_8-1) & 1] - VAR_6[VAR_8 & 1];
  if ((VAR_8 & VAR_10) == 0)
   VAR_5[VAR_8 >> VAR_9] = VAR_6[VAR_8 & 1];
 }
 return VAR_2;
}
