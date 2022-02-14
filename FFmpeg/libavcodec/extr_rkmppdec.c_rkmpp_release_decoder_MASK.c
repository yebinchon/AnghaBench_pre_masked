
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int device_ref; int frames_ref; int * frame_group; int * ctx; TYPE_1__* mpi; } ;
struct TYPE_4__ {int (* reset ) (int *) ;} ;
typedef TYPE_2__ RKMPPDecoder ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, uint8_t *VAR_1)
{
    RKMPPDecoder *VAR_2 = (RKMPPDecoder *)VAR_1;

    if (VAR_2->mpi) {
        VAR_2->mpi->reset(VAR_2->ctx);
        FUNC_3(VAR_2->ctx);
        VAR_2->ctx = ((void*)0);
    }

    if (VAR_2->frame_group) {
        FUNC_2(VAR_2->frame_group);
        VAR_2->frame_group = ((void*)0);
    }

    FUNC_0(&VAR_2->frames_ref);
    FUNC_0(&VAR_2->device_ref);

    FUNC_1(VAR_2);
}
