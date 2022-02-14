
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_7__ {TYPE_1__ timestamp; } ;
struct TYPE_8__ {TYPE_2__ buf; } ;
typedef TYPE_3__ V4L2Buffer ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;

__attribute__((used)) static inline int64_t FUNC_2(V4L2Buffer *VAR_2)
{
    int64_t VAR_3;


    VAR_3 = (int64_t)VAR_2->buf.timestamp.tv_sec * VAR_0 +
                        VAR_2->buf.timestamp.tv_usec;

    return FUNC_0(VAR_3, VAR_1, FUNC_1(VAR_2));
}
