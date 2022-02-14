
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int offset; } ;
typedef TYPE_1__ rc_parse_state_t ;


 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (int,char const**,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4(const char* VAR_2) {
  VAR_0* VAR_1;
  rc_parse_state_t VAR_3;
  FUNC_2(&VAR_3, 0, 0, 0);

  VAR_1 = FUNC_0(VAR_0, &VAR_3);
  FUNC_3(VAR_1, &VAR_2, &VAR_3);

  FUNC_1(&VAR_3);
  return VAR_3.offset;
}
