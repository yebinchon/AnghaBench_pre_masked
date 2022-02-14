
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* channel; int devicename; } ;
struct TYPE_3__ {int eazlist; scalar_t__ eazclear; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,...) ;
 TYPE_2__** VAR_1 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(int VAR_2, unsigned long VAR_3, char *VAR_4)
{
 if(!FUNC_0(VAR_2)) {
  FUNC_1("Invalid param: %d is not a valid card id\n", VAR_2);
  return -VAR_0;
 }

 FUNC_2(VAR_1[VAR_2]->channel[VAR_3].eazlist, VAR_4);
 VAR_1[VAR_2]->channel[VAR_3].eazclear = 0;
 FUNC_1("%s: EAZ list for channel %lu set to: %s\n",
  VAR_1[VAR_2]->devicename, VAR_3+1,
  VAR_1[VAR_2]->channel[VAR_3].eazlist);
 return 0;
}
