
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ ST; } ;
struct TYPE_6__ {TYPE_2__ OPN; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static u32 FUNC_3(void)
{
  int VAR_4 = FUNC_2() << 8;

  FUNC_1();

  FUNC_0(VAR_0, "timer z80 read %i, sched %i, %i @ %i|%i", VAR_3,
      VAR_1>>8, VAR_2>>8, VAR_4 >> 8, (VAR_4 >> 8) / 228);
  return VAR_3;
}
