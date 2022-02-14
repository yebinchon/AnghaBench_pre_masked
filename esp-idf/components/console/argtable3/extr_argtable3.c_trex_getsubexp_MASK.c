
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int _nsubexpr; int * _matches; } ;
typedef int TRexMatch ;
typedef int TRexBool ;
typedef TYPE_1__ TRex ;


 int VAR_0 ;
 int VAR_1 ;

TRexBool FUNC_0(TRex* VAR_2, int VAR_3, TRexMatch *VAR_4)
{
 if( VAR_3<0 || VAR_3 >= VAR_2->_nsubexpr) return VAR_0;
 *VAR_4 = VAR_2->_matches[VAR_3];
 return VAR_1;
}
