
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ rotate_size; } ;
typedef TYPE_1__ LogContext ;


 int FUNC_0 (TYPE_1__*,char*) ;

void FUNC_1(LogContext *VAR_0, const int64_t VAR_1)
{
 if (VAR_1 > 0)
 {
  VAR_0->rotate_size = VAR_1;
  FUNC_0(VAR_0, "%Y%m%d_%H%M%S");
 }
 else
 {
  VAR_0->rotate_size = 0;
  FUNC_0(VAR_0, "%Y%m%d");
 }
}
