
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_7__ {TYPE_1__ timestamp; } ;
struct TYPE_8__ {TYPE_2__ buf; } ;
typedef TYPE_3__ V4L2Buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_2(V4L2Buffer *VAR_3, int64_t VAR_4)
{
    int64_t VAR_5;

    if (VAR_4 == VAR_0)
        VAR_4 = 0;


    VAR_5 = FUNC_0(VAR_4, FUNC_1(VAR_3), VAR_2);
    VAR_3->buf.timestamp.tv_usec = VAR_5 % VAR_1;
    VAR_3->buf.timestamp.tv_sec = VAR_5 / VAR_1;
}
