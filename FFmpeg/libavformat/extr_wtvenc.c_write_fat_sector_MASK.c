
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int pb; } ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static int64_t FUNC_2(AVFormatContext *VAR_2, int64_t VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int64_t VAR_7 = VAR_3 >> VAR_0;
    int VAR_8 = VAR_5 - VAR_0;

    int64_t VAR_9 = FUNC_0(VAR_2->pb);
    FUNC_1(VAR_2->pb, VAR_7, VAR_4, VAR_8);

    if (VAR_6 == 2) {
        int64_t VAR_10 = VAR_9 >> VAR_0;
        int VAR_11 = ((VAR_4 << 2) + VAR_1 - 1) / VAR_1;
        int64_t VAR_12 = FUNC_0(VAR_2->pb);

       FUNC_1(VAR_2->pb, VAR_10, VAR_11, 0);
       return VAR_12;
    }

    return VAR_9;
}
