
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ start; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
typedef TYPE_2__ hb_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,float) ;

__attribute__((used)) static void FUNC_1( int * VAR_9, hb_buffer_t * VAR_10 )
{

    int VAR_11 = 0;
    for (VAR_11 = 11; VAR_11 > 0; VAR_11--)
    {
        VAR_9[VAR_11] = VAR_9[VAR_11-1];
    }

    if (!(VAR_10->s.flags & VAR_3) && !(VAR_10->s.flags & VAR_8))
    {





        VAR_9[0] = VAR_0;
    }
    else if (!(VAR_10->s.flags & VAR_3) && (VAR_10->s.flags & VAR_8))
    {




        VAR_9[0] = VAR_5;
    }
    else if ((VAR_10->s.flags & VAR_3) &&
             !(VAR_10->s.flags & VAR_8) && !(VAR_10->s.flags & VAR_4))
    {





        VAR_9[0] = VAR_2;
    }
    else if ((VAR_10->s.flags & VAR_3) &&
             !(VAR_10->s.flags & VAR_8) && (VAR_10->s.flags & VAR_4))
    {





        VAR_9[0] = VAR_1;
    }
    else if ((VAR_10->s.flags & VAR_3) &&
             (VAR_10->s.flags & VAR_8) && !(VAR_10->s.flags & VAR_4))
    {





        VAR_9[0] = VAR_7;
    }
    else if ((VAR_10->s.flags & VAR_3) &&
             (VAR_10->s.flags & VAR_8) && (VAR_10->s.flags & VAR_4))
    {





        VAR_9[0] = VAR_6;
    }

    if ((VAR_9[2] <= VAR_5) && (VAR_9[1] <= VAR_5) &&
        (VAR_9[0] > VAR_5) && (VAR_9[11]))
    {
        FUNC_0("%fs: Video -> Film", (float)VAR_10->s.start / 90000);
    }
    if ((VAR_9[2] > VAR_5) && (VAR_9[1] <= VAR_5) &&
        (VAR_9[0] <= VAR_5) && (VAR_9[11]))
    {
        FUNC_0("%fs: Film -> Video", (float)VAR_10->s.start / 90000);
    }
}
