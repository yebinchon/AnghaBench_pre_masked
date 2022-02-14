
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int lst; } ;
typedef TYPE_1__ JsonBuf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int,char const*,size_t) ;

void FUNC_3(JsonBuf* VAR_1, const char* VAR_2, int VAR_3) {
  if (VAR_3 == 0 || VAR_3 >= VAR_0) {
    return;
  }

  if (VAR_3 > VAR_1->size) {
    FUNC_1(VAR_1, 0);
    FUNC_3(VAR_1, VAR_2, VAR_3);

    return;
  }
  FUNC_0(VAR_1, VAR_3 + 2);
  FUNC_2(VAR_1->lst, VAR_2, (size_t)VAR_3);
  VAR_1->lst += VAR_3;
}
