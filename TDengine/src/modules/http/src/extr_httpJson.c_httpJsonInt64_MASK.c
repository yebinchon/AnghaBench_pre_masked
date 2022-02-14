
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int lst; } ;
typedef TYPE_1__ JsonBuf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,char*,int ) ;

void FUNC_3(JsonBuf* VAR_1, int64_t VAR_2) {
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_0);
  VAR_1->lst += FUNC_2(VAR_1->lst, VAR_0, "%ld", VAR_2);
}
