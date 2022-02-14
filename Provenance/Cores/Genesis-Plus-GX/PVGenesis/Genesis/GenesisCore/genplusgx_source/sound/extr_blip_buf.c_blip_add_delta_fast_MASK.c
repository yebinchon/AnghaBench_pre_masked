
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf_t ;
struct TYPE_4__ {unsigned int factor; unsigned int offset; size_t size; } ;
typedef TYPE_1__ blip_t ;


 int* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

void FUNC_2( blip_t* VAR_5, unsigned VAR_6, int VAR_7 )
{
 unsigned VAR_8 = (unsigned) ((VAR_6 * VAR_5->factor + VAR_5->offset) >> VAR_4);
 buf_t* VAR_9 = FUNC_0( VAR_5 ) + (VAR_8 >> VAR_3);

 int VAR_10 = VAR_8 >> (VAR_3 - VAR_0) & (VAR_1 - 1);
 int VAR_11 = VAR_7 * VAR_10;






 VAR_9 [7] += VAR_7 * VAR_1 - VAR_11;
 VAR_9 [8] += VAR_11;
}
