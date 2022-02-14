
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ new_chap; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_2__ video; } ;
typedef TYPE_3__ sync_stream_t ;
struct TYPE_7__ {scalar_t__ new_chap; } ;
struct TYPE_10__ {TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0( sync_stream_t * VAR_1, hb_buffer_t * VAR_2 )
{
    if (VAR_1->type != VAR_0 || VAR_2 == ((void*)0))
    {
        return;
    }
    if (VAR_1->video.new_chap > 0 && VAR_2->s.new_chap <= 0)
    {
        VAR_2->s.new_chap = VAR_1->video.new_chap;
        VAR_1->video.new_chap = 0;
    }
}
