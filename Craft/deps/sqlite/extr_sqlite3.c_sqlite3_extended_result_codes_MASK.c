
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int errMask; int mutex; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(sqlite3 *VAR_1, int VAR_2){
  FUNC_0(VAR_1->mutex);
  VAR_1->errMask = VAR_2 ? 0xffffffff : 0xff;
  FUNC_1(VAR_1->mutex);
  return VAR_0;
}
