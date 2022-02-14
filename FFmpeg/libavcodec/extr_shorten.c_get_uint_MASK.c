
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ version; int gb; } ;
typedef TYPE_1__ ShortenContext ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *,int) ;

__attribute__((used)) static inline unsigned int FUNC_1(ShortenContext *VAR_2, int VAR_3)
{
    if (VAR_2->version != 0) {
        VAR_3 = FUNC_0(&VAR_2->gb, VAR_1);
        if (VAR_3 > 31U)
            return VAR_0;
    }
    return FUNC_0(&VAR_2->gb, VAR_3);
}
