
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ channel; int ssid_len; int ssid; } ;
struct lbs_private {scalar_t__ connect_status; TYPE_1__ curbssparams; } ;
struct assoc_request {scalar_t__ mode; scalar_t__ channel; int flags; int ssid_len; int ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct lbs_private *VAR_5,
                             struct assoc_request * VAR_6)
{
 FUNC_0(VAR_4);

 if (VAR_5->connect_status != VAR_3)
  return 0;

 if (FUNC_2(VAR_5->curbssparams.ssid,
                       VAR_5->curbssparams.ssid_len,
                       VAR_6->ssid, VAR_6->ssid_len) != 0)
  return 1;


 if (FUNC_3(VAR_1, &VAR_6->flags)) {
  if (VAR_6->mode != VAR_2)
   return 1;
 }

 if (FUNC_3(VAR_0, &VAR_6->flags)) {
  if (VAR_6->channel != VAR_5->curbssparams.channel)
   return 1;
 }

 FUNC_1(VAR_4);
 return 0;
}
