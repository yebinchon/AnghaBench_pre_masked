
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {long long tv_sec; int tv_usec; } ;
struct TYPE_10__ {long long tv_sec; int tv_usec; } ;
struct rusage {TYPE_2__ ru_stime; TYPE_1__ ru_utime; } ;
typedef int int64_t ;
struct TYPE_13__ {int user_usec; int sys_usec; int member_0; } ;
struct TYPE_12__ {int dwLowDateTime; scalar_t__ dwHighDateTime; } ;
typedef int HANDLE ;
typedef TYPE_3__ FILETIME ;
typedef TYPE_4__ BenchmarkTimeStamps ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct rusage*) ;

__attribute__((used)) static BenchmarkTimeStamps FUNC_4(void)
{
    BenchmarkTimeStamps VAR_1 = { FUNC_2() };
    VAR_1.user_usec = VAR_1.sys_usec = 0;

    return VAR_1;
}
