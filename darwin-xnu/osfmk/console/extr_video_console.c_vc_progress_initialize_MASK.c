
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int count; int width; int height; int time; } ;
typedef TYPE_1__ vc_progress_element ;
typedef scalar_t__ uint64_t ;
typedef void* uint32_t ;


 int FUNC_0 (int,int,scalar_t__*) ;
 int FUNC_1 (int *,int ,int *) ;
 unsigned char const* VAR_0 ;
 unsigned char const* VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned char const* VAR_3 ;
 int VAR_4 ;
 unsigned char const** VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;

void
FUNC_2( vc_progress_element * VAR_11,
   const unsigned char * VAR_12,
   const unsigned char * VAR_13,
   const unsigned char * VAR_14,
   const unsigned char * VAR_15 )
{
    uint64_t VAR_16;

    if( (!VAR_15) || (!VAR_11) || (!VAR_12))
 return;
    VAR_0 = VAR_15;
    VAR_1 = VAR_15;

    VAR_2 = VAR_11;
    VAR_5[0] = VAR_12;
    VAR_5[1] = VAR_13;
    VAR_5[2] = VAR_14;
    if( 2 & VAR_2->flags)
        VAR_3 = VAR_12
                            + VAR_2->count * VAR_2->width * VAR_2->height;
    else
        VAR_3 = ((void*)0);

    FUNC_1(&VAR_4, VAR_7, ((void*)0));
    FUNC_0(VAR_2->time, 1000 * 1000, &VAR_16);
    VAR_6 = (uint32_t)VAR_16;


    FUNC_1(&VAR_8, VAR_10, ((void*)0));
    FUNC_0(1000 / 8, 1000 * 1000, &VAR_16);
    VAR_9 = (uint32_t)VAR_16;


}
