
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int int64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct timespec*) ;

__attribute__((used)) static int64
FUNC_1()
{
    struct timespec VAR_2;
    FUNC_0(VAR_0, &VAR_2);
    return (int64)(VAR_2.tv_sec)*VAR_1 + VAR_2.tv_nsec;
}
