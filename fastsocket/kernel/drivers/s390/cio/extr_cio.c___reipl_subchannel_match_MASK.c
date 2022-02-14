
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct subchannel_id {scalar_t__ ssid; } ;
struct TYPE_3__ {scalar_t__ st; scalar_t__ dev; scalar_t__ dnv; } ;
struct schib {TYPE_1__ pmcw; } ;
struct TYPE_4__ {scalar_t__ devno; scalar_t__ ssid; } ;
struct sch_match_id {scalar_t__ rc; struct subchannel_id schid; TYPE_2__ devid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct subchannel_id,struct schib*) ;

__attribute__((used)) static int FUNC_1(struct subchannel_id VAR_2, void *VAR_3)
{
 struct schib VAR_4;
 struct sch_match_id *VAR_5 = VAR_3;

 if (FUNC_0(VAR_2, &VAR_4))
  return -VAR_0;
 if ((VAR_4.pmcw.st == VAR_1) && VAR_4.pmcw.dnv &&
     (VAR_4.pmcw.dev == VAR_5->devid.devno) &&
     (VAR_2.ssid == VAR_5->devid.ssid)) {
  VAR_5->schid = VAR_2;
  VAR_5->rc = 0;
  return 1;
 }
 return 0;
}
