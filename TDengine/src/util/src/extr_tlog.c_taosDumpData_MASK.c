
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,char*,unsigned char) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,char*,unsigned int) ;

void FUNC_4(unsigned char *VAR_6, int VAR_7) {
  if (VAR_5 != 0 && VAR_3 < VAR_4) {
    FUNC_1("server disk:%s space remain %.3f GB, total %.1f GB, stop dump log.\n", VAR_0, VAR_3, VAR_5);
    FUNC_0(VAR_2);
    return;
  }

  char VAR_8[256];
  int VAR_9, VAR_10 = 0, VAR_11 = 0;

  for (VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9) {
    FUNC_2(VAR_8 + VAR_10, "%02x ", VAR_6[VAR_9]);
    VAR_11++;
    VAR_10 += 3;
    if (VAR_11 >= 16) {
      VAR_8[VAR_10++] = '\n';
      FUNC_3(VAR_1->fd, VAR_8, (unsigned int)VAR_10);
      VAR_11 = 0;
      VAR_10 = 0;
    }
  }

  VAR_8[VAR_10++] = '\n';

  FUNC_3(VAR_1->fd, VAR_8, (unsigned int)VAR_10);

  return;
}
