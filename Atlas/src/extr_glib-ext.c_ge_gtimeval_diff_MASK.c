
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ gint64 ;
struct TYPE_4__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef TYPE_1__ GTimeVal ;


 scalar_t__ VAR_0 ;

void FUNC_0(GTimeVal *VAR_1, GTimeVal *VAR_2, gint64 *VAR_3) {
 *VAR_3 = (gint64) VAR_2->tv_sec - VAR_1->tv_sec;
 *VAR_3 *= VAR_0;
 *VAR_3 += (gint64) VAR_2->tv_usec - VAR_1->tv_usec;
}
