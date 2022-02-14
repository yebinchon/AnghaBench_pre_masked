
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* int32_t ;
struct TYPE_13__ {int numOfVnodes; int privateIp; TYPE_1__* vload; } ;
struct TYPE_12__ {int vnode; int sid; } ;
struct TYPE_11__ {int ** meterList; } ;
struct TYPE_10__ {int vgId; } ;
typedef TYPE_2__ SVgObj ;
typedef int STabObj ;
typedef TYPE_3__ SMeterCfgMsg ;
typedef TYPE_4__ SDnodeObj ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int,int) ;
 char* FUNC_2 (int *,char*,int) ;
 TYPE_2__* FUNC_3 (int) ;
 char* FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,char*,int) ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;

int FUNC_8(char *VAR_3, int VAR_4, SDnodeObj *VAR_5) {
  char * VAR_6, *VAR_7;
  int VAR_8 = 0;
  STabObj * VAR_9 = ((void*)0);
  SMeterCfgMsg *VAR_10 = (SMeterCfgMsg *)VAR_3;
  SVgObj * VAR_11;

  int VAR_12 = FUNC_0(VAR_10->vnode);
  int VAR_13 = FUNC_0(VAR_10->sid);

  VAR_7 = FUNC_4(VAR_5, VAR_2, 64000);
  if (VAR_7 == ((void*)0)) {
    FUNC_7(VAR_5, VAR_2, VAR_1);
    return 0;
  }
  VAR_6 = VAR_7;

  if (VAR_12 < VAR_5->numOfVnodes) {
    int VAR_14 = VAR_5->vload[VAR_12].vgId;

    VAR_11 = FUNC_3(VAR_14);
    if (VAR_11) VAR_9 = VAR_11->meterList[VAR_13];
  }

  if (VAR_9) {
    *VAR_6 = 0;
    VAR_6++;
    VAR_6 = FUNC_2(VAR_9, VAR_6, VAR_12);
  } else {
    FUNC_1("dnode:%s, vnode:%d sid:%d, meter not there", FUNC_5(VAR_5->privateIp), VAR_12, VAR_13);
    *VAR_6 = VAR_0;
    VAR_6++;

    *(int32_t *)VAR_6 = FUNC_0(VAR_12);
    VAR_6 += sizeof(int32_t);
    *(int32_t *)VAR_6 = FUNC_0(VAR_13);
    VAR_6 += sizeof(int32_t);
  }

  VAR_8 = VAR_6 - VAR_7;
  FUNC_6(VAR_5, VAR_7, VAR_8);

  return 0;
}
