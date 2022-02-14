
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int,char*,int) ;

int FUNC_4(int VAR_2, int VAR_3, int64_t VAR_4) {
  int64_t VAR_5;
  int VAR_6, VAR_7;
  char VAR_8[VAR_0];

  VAR_5 = VAR_4;

  while (VAR_5 > 0) {
    if (VAR_5 < VAR_0)
      VAR_6 = (int)VAR_5;
    else
      VAR_6 = VAR_0;

    int VAR_9 = FUNC_2(VAR_2, VAR_8, (int)VAR_6);
    if (VAR_6 != VAR_9) {
      FUNC_0("read error, readLen:%d retLen:%d len:%ld leftLen:%ld, reason:%s", VAR_6, VAR_9, VAR_4, VAR_5,
             FUNC_1(VAR_1));
      return -1;
    }

    VAR_7 = FUNC_3(VAR_3, VAR_8, VAR_6);

    if (VAR_6 != VAR_7) {
      FUNC_0("copy error, readLen:%d writeLen:%d len:%ld leftLen:%ld, reason:%s", VAR_6, VAR_7, VAR_4, VAR_5,
             FUNC_1(VAR_1));
      return -1;
    }

    VAR_5 -= VAR_6;
  }

  return 0;
}
