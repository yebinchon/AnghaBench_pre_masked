
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {TYPE_1__* codecpar; } ;
struct TYPE_4__ {scalar_t__ format; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(AVIOContext *VAR_2, AVStream *VAR_3)
{
    int64_t VAR_4 = 0;

    FUNC_0(VAR_2, VAR_1);
    FUNC_0(VAR_2, 8);
    if (VAR_3->codecpar->format == VAR_0)
        VAR_4 |= 0x01;
    VAR_4 |= 0x40000000;
    FUNC_1(VAR_2, VAR_4);
    return 8;
}
