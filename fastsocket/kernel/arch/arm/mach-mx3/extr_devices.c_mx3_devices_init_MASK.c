
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {void* end; void* start; } ;
struct TYPE_5__ {void* end; void* start; } ;
struct TYPE_4__ {void* end; void* start; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 TYPE_3__* VAR_5 ;
 int FUNC_2 (int *,int *) ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int FUNC_3(void)
{
 if (FUNC_0()) {
  VAR_5[0].start = VAR_0;
  VAR_5[0].end = VAR_0 + 0xfff;
  FUNC_2(&VAR_6, ((void*)0));
 }
 if (FUNC_1()) {
  VAR_5[0].start = VAR_1;
  VAR_5[0].end = VAR_1 + 0xfff;
  VAR_8[0].start = VAR_2;
  VAR_8[0].end = VAR_2 + 0x1ff;
  VAR_8[1].start = VAR_4;
  VAR_8[1].end = VAR_4;
  VAR_7[0].start = VAR_2 + 0x400;
  VAR_7[0].end = VAR_2 + 0x5ff;
  VAR_7[1].start = VAR_3;
  VAR_7[1].end = VAR_3;
 }

 return 0;
}
