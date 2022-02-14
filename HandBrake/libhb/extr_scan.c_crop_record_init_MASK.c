
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* r; void* l; void* b; void* t; } ;
typedef TYPE_1__ crop_record_t ;


 void* FUNC_0 (int,int) ;

__attribute__((used)) static crop_record_t * FUNC_1( int VAR_0 )
{
    crop_record_t *VAR_1 = FUNC_0( 1, sizeof(*VAR_1) );

    VAR_1->t = FUNC_0( VAR_0, sizeof(int) );
    VAR_1->b = FUNC_0( VAR_0, sizeof(int) );
    VAR_1->l = FUNC_0( VAR_0, sizeof(int) );
    VAR_1->r = FUNC_0( VAR_0, sizeof(int) );

    return VAR_1;
}
