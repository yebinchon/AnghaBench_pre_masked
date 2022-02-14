
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log2_chroma_w; int flags; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline
int FUNC_1(int VAR_3, int VAR_4,
                       int VAR_5, int VAR_6,
                       const AVPixFmtDescriptor *VAR_7)
{
    int VAR_8, VAR_9, VAR_10;

    if (!VAR_7)
        return FUNC_0(VAR_1);

    if (VAR_3 < 0)
        return FUNC_0(VAR_1);
    VAR_8 = (VAR_6 == 1 || VAR_6 == 2) ? VAR_7->log2_chroma_w : 0;
    VAR_9 = ((VAR_3 + (1 << VAR_8) - 1)) >> VAR_8;
    if (VAR_9 && VAR_5 > VAR_2 / VAR_9)
        return FUNC_0(VAR_1);
    VAR_10 = VAR_5 * VAR_9;

    if (VAR_7->flags & VAR_0)
        VAR_10 = (VAR_10 + 7) >> 3;
    return VAR_10;
}
