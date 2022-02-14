
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timeval {int tv_usec; int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;

uint64_t
FUNC_1(
 struct timeval *VAR_2)
{
 uint64_t VAR_3, VAR_4;

 FUNC_0(
      VAR_2->tv_sec, VAR_0, &VAR_3);
 FUNC_0(
      VAR_2->tv_usec, VAR_1, &VAR_4);

 return (VAR_3 + VAR_4);
}
