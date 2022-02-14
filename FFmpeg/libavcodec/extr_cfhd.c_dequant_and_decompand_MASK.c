
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(int VAR_0, int VAR_1, int VAR_2)
{
    if (VAR_2 == 0 || VAR_2 == 1) {
        int64_t VAR_3 = FUNC_1(VAR_0);
        if (VAR_0 < 264)
            return (VAR_3 + ((768 * VAR_3 * VAR_3 * VAR_3) / (255 * 255 * 255))) *
               FUNC_0(VAR_0) * VAR_1;
        else
            return VAR_0 * VAR_1;
    } else
        return VAR_0 * VAR_1;
}
