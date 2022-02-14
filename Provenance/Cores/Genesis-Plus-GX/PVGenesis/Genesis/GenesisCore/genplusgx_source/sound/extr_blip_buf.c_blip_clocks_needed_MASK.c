
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fixed_t ;
struct TYPE_3__ {int offset; int size; int factor; } ;
typedef TYPE_1__ blip_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1( const blip_t* VAR_2, int VAR_3 )
{
 fixed_t VAR_4;






  VAR_4 = (fixed_t) VAR_3 * VAR_1;
 if ( VAR_4 < VAR_2->offset )
  return 0;

 return (VAR_4 - VAR_2->offset + VAR_2->factor - 1) / VAR_2->factor;
}
