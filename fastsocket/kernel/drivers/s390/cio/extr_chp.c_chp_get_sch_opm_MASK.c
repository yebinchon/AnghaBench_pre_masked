
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int * chpid; } ;
struct TYPE_4__ {TYPE_1__ pmcw; } ;
struct subchannel {TYPE_2__ schib; } ;
struct chp_id {int id; } ;


 scalar_t__ FUNC_0 (struct chp_id) ;
 int FUNC_1 (struct chp_id*) ;

u8 FUNC_2(struct subchannel *VAR_0)
{
 struct chp_id VAR_1;
 int VAR_2;
 int VAR_3;

 VAR_2 = 0;
 FUNC_1(&VAR_1);
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  VAR_2 <<= 1;
  VAR_1.id = VAR_0->schib.pmcw.chpid[VAR_3];
  if (FUNC_0(VAR_1) != 0)
   VAR_2 |= 1;
 }
 return VAR_2;
}
