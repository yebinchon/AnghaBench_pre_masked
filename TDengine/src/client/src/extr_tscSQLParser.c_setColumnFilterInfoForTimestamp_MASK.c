
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int nLen; int pz; } ;
typedef TYPE_2__ tVariant ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {TYPE_1__* pMeterMeta; } ;
struct TYPE_9__ {int precision; } ;
typedef int SSqlCmd ;
typedef TYPE_3__ SMeterMetaInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,char,int ,int) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__*,int ,int ) ;
 TYPE_3__* FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(SSqlCmd* VAR_3, tVariant* VAR_4) {
  int64_t VAR_5 = 0;
  const char* VAR_6 = "invalid timestamp";

  FUNC_1(VAR_4->pz);
  char* VAR_7 = FUNC_2(VAR_4->pz, '-', VAR_4->nLen, 0);
  SMeterMetaInfo* VAR_8 = FUNC_7(VAR_3, 0);

  if (VAR_7 != ((void*)0)) {
    if (FUNC_6(VAR_4->pz, &VAR_5, VAR_4->nLen, VAR_8->pMeterMeta->precision) != VAR_1) {
      FUNC_0(VAR_3, VAR_6);
      return VAR_0;
    }
  } else {
    if (FUNC_5(VAR_4, (char*)&VAR_5, VAR_2)) {
      FUNC_0(VAR_3, VAR_6);
      return VAR_0;
    }
  }

  FUNC_4(VAR_4);
  FUNC_3(VAR_4, (char*)&VAR_5, 0, VAR_2);

  return VAR_1;
}
