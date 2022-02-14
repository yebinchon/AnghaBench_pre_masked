
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int mpi_limb_t ;
struct TYPE_5__ {unsigned int nbits; int nlimbs; int* d; scalar_t__ sign; } ;
typedef TYPE_1__* MPI ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int,...) ;

MPI
FUNC_2(const void *VAR_3, unsigned *VAR_4)
{
  const uint8_t *VAR_5 = VAR_3;
  int VAR_6, VAR_7;
  unsigned VAR_8, VAR_9, VAR_10, VAR_11=0;
  mpi_limb_t VAR_12;
  MPI VAR_13 = VAR_2;

  if( *VAR_4 < 2 )
    goto leave;
  VAR_8 = VAR_5[0] << 8 | VAR_5[1];

  if( VAR_8 > VAR_1 ) {
    FUNC_1("MPI: mpi too large (%u bits)\n", VAR_8);
    goto leave;
  }
  VAR_5 += 2;
  VAR_11 = 2;

  VAR_9 = (VAR_8+7) / 8;
  VAR_10 = (VAR_9+VAR_0-1) / VAR_0;
  VAR_13 = FUNC_0( VAR_10 );
  if (!VAR_13)
   return VAR_2;
  VAR_6 = VAR_0 - VAR_9 % VAR_0;
  VAR_6 %= VAR_0;
  VAR_13->nbits = VAR_8;
  VAR_7= VAR_13->nlimbs = VAR_10;
  VAR_13->sign = 0;
  for( ; VAR_7 > 0; VAR_7-- ) {
    VAR_12 = 0;
    for(; VAR_6 < VAR_0; VAR_6++ ) {
      if( ++VAR_11 > *VAR_4 ) {
 FUNC_1("MPI: mpi larger than buffer nread=%d ret_nread=%d\n", VAR_11, *VAR_4);
 goto leave;
      }
      VAR_12 <<= 8;
      VAR_12 |= *VAR_5++;
    }
    VAR_6 = 0;
    VAR_13->d[VAR_7-1] = VAR_12;
  }

 leave:
  *VAR_4 = VAR_11;
  return VAR_13;
}
