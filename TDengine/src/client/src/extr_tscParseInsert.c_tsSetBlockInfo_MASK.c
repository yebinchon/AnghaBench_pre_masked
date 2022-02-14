
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_6__ {int sversion; int uid; int sid; } ;
struct TYPE_5__ {int numOfRows; int sversion; int uid; int sid; } ;
typedef TYPE_1__ SShellSubmitBlock ;
typedef TYPE_2__ SMeterMeta ;



__attribute__((used)) static void FUNC_0(SShellSubmitBlock *VAR_0, const SMeterMeta *VAR_1, int32_t VAR_2) {
  VAR_0->sid = VAR_1->sid;
  VAR_0->uid = VAR_1->uid;
  VAR_0->sversion = VAR_1->sversion;
  VAR_0->numOfRows += VAR_2;
}
