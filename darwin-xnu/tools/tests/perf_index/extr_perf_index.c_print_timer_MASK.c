
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;


 int FUNC_0 (char*,int ,int ) ;

void FUNC_1(struct timeval *VAR_0) {
  FUNC_0("%ld.%06d\n", VAR_0->tv_sec, VAR_0->tv_usec);
}
