
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mpi_limb_t ;
struct TYPE_5__ {unsigned int alloced; int nlimbs; int sign; int* d; } ;
typedef TYPE_1__* MPI ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (char const*) ;

int
FUNC_4(MPI VAR_3, const char *VAR_4)
{
    int VAR_5=0, VAR_6=0, VAR_7=0, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    unsigned VAR_13, VAR_14, VAR_15;
    mpi_limb_t VAR_16;

    if( *VAR_4 == '-' ) {
 VAR_6 = 1;
 VAR_4++;
    }
    if( *VAR_4 == '0' && VAR_4[1] == 'x' )
 VAR_5 = 1;
    else
 return -VAR_1;
    VAR_4 += 2;

    VAR_13 = FUNC_3(VAR_4)*4;
    if( VAR_13 % 8 )
 VAR_7 = 1;
    VAR_14 = (VAR_13+7) / 8;
    VAR_15 = (VAR_14+VAR_0-1) / VAR_0;
    if( VAR_3->alloced < VAR_15 )
     if (!FUNC_2(VAR_3, VAR_15 ))
      return -VAR_2;
    VAR_8 = VAR_0 - VAR_14 % VAR_0;
    VAR_8 %= VAR_0;
    VAR_9= VAR_3->nlimbs = VAR_15;
    VAR_3->sign = VAR_6;
    for( ; VAR_9 > 0; VAR_9-- ) {
 VAR_16 = 0;
 for(; VAR_8 < VAR_0; VAR_8++ ) {
     if( VAR_7 ) {
  VAR_11 = '0';
  VAR_7 = 0;
     }
     else
  VAR_11 = *VAR_4++;
     FUNC_0(VAR_11);
     VAR_12 = *VAR_4++;
     FUNC_0(VAR_12);
     if( VAR_11 >= '0' && VAR_11 <= '9' )
  VAR_10 = VAR_11 - '0';
     else if( VAR_11 >= 'a' && VAR_11 <= 'f' )
  VAR_10 = VAR_11 - 'a' + 10;
     else if( VAR_11 >= 'A' && VAR_11 <= 'F' )
  VAR_10 = VAR_11 - 'A' + 10;
     else {
  FUNC_1(VAR_3);
  return 1;
     }
     VAR_10 <<= 4;
     if( VAR_12 >= '0' && VAR_12 <= '9' )
  VAR_10 |= VAR_12 - '0';
     else if( VAR_12 >= 'a' && VAR_12 <= 'f' )
  VAR_10 |= VAR_12 - 'a' + 10;
     else if( VAR_12 >= 'A' && VAR_12 <= 'F' )
  VAR_10 |= VAR_12 - 'A' + 10;
     else {
  FUNC_1(VAR_3);
  return 1;
     }
     VAR_16 <<= 8;
     VAR_16 |= VAR_10;
 }
 VAR_8 = 0;

 VAR_3->d[VAR_9-1] = VAR_16;
    }

    return 0;
}
