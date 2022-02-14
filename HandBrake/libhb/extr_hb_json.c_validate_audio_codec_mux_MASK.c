
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int codec; int muxers; int short_name; } ;
typedef TYPE_1__ hb_encoder_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int ,int ) ;

__attribute__((used)) static int FUNC_3(int VAR_1, int VAR_2, int VAR_3)
{
    const hb_encoder_t *VAR_4 = ((void*)0);
    while ((VAR_4 = FUNC_0(VAR_4)) != ((void*)0))
    {
        if ((VAR_4->codec == VAR_1) && (VAR_4->muxers & VAR_2) == 0)
        {
            if (VAR_1 != VAR_0)
            {
                FUNC_2("track %d: incompatible encoder '%s' for muxer '%s'",
                         VAR_3 + 1, VAR_4->short_name,
                         FUNC_1(VAR_2));
            }
            return -1;
        }
    }
    return 0;
}
