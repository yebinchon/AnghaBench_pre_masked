
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int TA; int TB; } ;
struct TYPE_5__ {TYPE_1__ ST; } ;
struct TYPE_6__ {TYPE_2__ OPN; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,int,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__ VAR_8 ;

void FUNC_3(void)
{

  int VAR_9, VAR_10 = 0, VAR_11, VAR_12 = 0;
  VAR_9 = 1024 - VAR_8;
  VAR_11 = 256 - VAR_8;
  if (VAR_4 != VAR_3)
    VAR_10 = (int)((double)(VAR_5 - VAR_4) / (double)VAR_5 * VAR_9 * 65536);
  if (VAR_6 != VAR_3)
    VAR_12 = (int)((double)(VAR_7 - VAR_6) / (double)VAR_7 * VAR_11 * 65536);
  FUNC_2(VAR_0, "save: timer a %i/%i", VAR_10 >> 16, VAR_9);
  FUNC_2(VAR_0, "save: timer b %i/%i", VAR_12 >> 16, VAR_11);






    FUNC_0(VAR_10, VAR_12);
}
