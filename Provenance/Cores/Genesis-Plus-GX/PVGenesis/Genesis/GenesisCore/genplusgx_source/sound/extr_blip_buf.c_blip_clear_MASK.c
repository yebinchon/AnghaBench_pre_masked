
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf_t ;
struct TYPE_4__ {int offset; int factor; int size; scalar_t__ integrator; } ;
typedef TYPE_1__ blip_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2( blip_t* VAR_1 )
{






 VAR_1->offset = VAR_1->factor / 2;
 VAR_1->integrator = 0;
 FUNC_1( FUNC_0( VAR_1 ), 0, (VAR_1->size + VAR_0) * sizeof (buf_t) );
}
