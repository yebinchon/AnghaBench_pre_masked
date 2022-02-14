
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mpc_status ;
typedef scalar_t__ mpc_seek_t ;
struct TYPE_5__ {int block_pwr; int samples; } ;
struct TYPE_6__ {int seek_pwr; int seek_table_size; scalar_t__* seek_table; TYPE_1__ si; } ;
typedef TYPE_2__ mpc_demux ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static mpc_status FUNC_2(mpc_demux * VAR_4)
{
 size_t VAR_5;
 if (VAR_4->seek_table != 0)
  return VAR_3;

 VAR_4->seek_pwr = 6;
 if (VAR_4->si.block_pwr > VAR_4->seek_pwr)
  VAR_4->seek_pwr = VAR_4->si.block_pwr;
 VAR_5 = (2 + VAR_4->si.samples / (VAR_1 << VAR_4->seek_pwr));
 while (VAR_5 > VAR_0) {
  VAR_4->seek_pwr++;
  VAR_5 = (2 + VAR_4->si.samples / (VAR_1 << VAR_4->seek_pwr));
 }
 VAR_4->seek_table = FUNC_0((size_t)(VAR_5 * sizeof(mpc_seek_t)));
 if (VAR_4->seek_table == 0)
  return VAR_2;
 VAR_4->seek_table[0] = (mpc_seek_t)FUNC_1(VAR_4);
 VAR_4->seek_table_size = 1;

 return VAR_3;
}
