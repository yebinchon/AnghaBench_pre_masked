
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ write_crc; } ;
typedef TYPE_1__ MatroskaMuxContext ;
typedef int AVIOContext ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(AVIOContext *VAR_0, AVIOContext **VAR_1, MatroskaMuxContext *VAR_2,
                                   uint32_t VAR_3)
{
    int VAR_4;

    if ((VAR_4 = FUNC_0(VAR_1)) < 0)
        return VAR_4;

    FUNC_1(VAR_0, VAR_3);
    if (VAR_2->write_crc)
        FUNC_2(*VAR_1, 6);

    return 0;
}
