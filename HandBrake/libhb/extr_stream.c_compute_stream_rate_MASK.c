
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long uint64_t ;
struct pts_pos {scalar_t__ pts; scalar_t__ pos; } ;
typedef int rates ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double*,int,int,int ) ;

__attribute__((used)) static double FUNC_1( struct pts_pos *VAR_2, int VAR_3 )
{
    int VAR_4, VAR_5;
    double VAR_6[VAR_0 * VAR_0 / 8];
    double *VAR_7 = VAR_6;


    *VAR_7 = 0;
    for ( VAR_4 = 0; VAR_4 < VAR_3-1; ++VAR_4 )
    {
        int VAR_8 = VAR_4 + ( VAR_3 >> 3 );
        if ( VAR_8 > VAR_3 )
            VAR_8 = VAR_3;
        for ( VAR_5 = VAR_4+1; VAR_5 < VAR_8; ++VAR_5 )
        {
            if ( (uint64_t)(VAR_2[VAR_5].pts - VAR_2[VAR_4].pts) > 90000LL*3600*6 )
                break;
            if ( VAR_2[VAR_5].pts != VAR_2[VAR_4].pts && VAR_2[VAR_5].pos > VAR_2[VAR_4].pos )
            {
                *VAR_7 = ((double)( VAR_2[VAR_5].pts - VAR_2[VAR_4].pts )) /
                      ((double)( VAR_2[VAR_5].pos - VAR_2[VAR_4].pos ));
                ++VAR_7;
            }
        }
    }


    int VAR_9 = VAR_7 - VAR_6;
    FUNC_0( VAR_6, VAR_9, sizeof (VAR_6[0] ), VAR_1 );
    return VAR_6[VAR_9 >> 1];
}
