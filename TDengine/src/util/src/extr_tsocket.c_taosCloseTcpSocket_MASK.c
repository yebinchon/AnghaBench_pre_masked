
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linger {int l_onoff; scalar_t__ l_linger; } ;
typedef int linger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,int ,void*,int) ;

void FUNC_4(int VAR_3) {
  struct linger VAR_4;
  VAR_4.l_onoff = 1;
  VAR_4.l_linger = 0;
  if (FUNC_3(VAR_3, VAR_0, VAR_1, (void *)&VAR_4, sizeof(VAR_4)) < 0) {
    FUNC_0("setsockopt SO_LINGER failed: %d (%s)", VAR_2, FUNC_1(VAR_2));
  }

  FUNC_2(VAR_3);
}
