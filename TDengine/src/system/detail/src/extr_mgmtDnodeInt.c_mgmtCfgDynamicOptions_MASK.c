
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int customScore; int bandwidthMb; int privateIp; } ;
typedef TYPE_1__ SDnodeObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,char**,int*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int ) ;

int FUNC_8(SDnodeObj *VAR_2, char *VAR_3) {
  char *VAR_4, *VAR_5;
  int VAR_6, VAR_7;

  FUNC_5(VAR_3, &VAR_4, &VAR_6);
  if (FUNC_6(VAR_4, "unremove", 8) == 0) {
    FUNC_2(VAR_2);
    return VAR_1;
  } else if (FUNC_6(VAR_4, "score", 5) == 0) {
    FUNC_5(VAR_4 + VAR_6 + 1, &VAR_5, &VAR_7);
    if (VAR_7 > 0) {
      int VAR_8 = FUNC_0(VAR_5);
      FUNC_1("dnode:%s, custom score set from:%d to:%d", FUNC_7(VAR_2->privateIp), VAR_2->customScore, VAR_8);
      VAR_2->customScore = VAR_8;
      FUNC_4(VAR_2);
      FUNC_3(15);
    }
    return VAR_0;
  } else if (FUNC_6(VAR_4, "bandwidth", 9) == 0) {
    FUNC_5(VAR_3, &VAR_5, &VAR_7);
    if (VAR_7 > 0) {
      int VAR_9 = FUNC_0(VAR_5);
      if (VAR_9 >= 0 && VAR_9 < 10000000) {
        FUNC_1("dnode:%s, bandwidth(Mb) set from:%d to:%d", FUNC_7(VAR_2->privateIp), VAR_2->bandwidthMb, VAR_9);
        VAR_2->bandwidthMb = VAR_9;
        FUNC_4(VAR_2);
        return VAR_1;
      }
    }
    return VAR_0;
  }

  return -1;
}
