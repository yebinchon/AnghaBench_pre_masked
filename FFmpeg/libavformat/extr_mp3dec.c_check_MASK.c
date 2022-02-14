
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint32_t ;
typedef int int64_t ;
struct TYPE_3__ {int frame_size; } ;
typedef TYPE_1__ MPADecodeHeader ;
typedef int AVIOContext ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_3, int64_t VAR_4, uint32_t *VAR_5)
{
    int64_t VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_2);
    uint8_t VAR_7[4];
    unsigned VAR_8;
    MPADecodeHeader VAR_9;
    if (VAR_6 < 0)
        return VAR_0;

    VAR_6 = FUNC_1(VAR_3, &VAR_7[0], 4);

    if (VAR_6 < 4)
        return VAR_0;

    VAR_8 = FUNC_0(&VAR_7[0]);
    if (FUNC_4(VAR_8) < 0)
        return VAR_1;
    if (FUNC_3(&VAR_9, VAR_8) == 1)
        return VAR_1;

    if (VAR_5)
        *VAR_5 = VAR_8;
    return VAR_9.frame_size;
}
