
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gc {TYPE_1__* pd; } ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct gc *VAR_9, unsigned char *VAR_10)
{
 int VAR_11;
 unsigned long VAR_12;





 FUNC_1(VAR_12);
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  FUNC_3(VAR_9->pd->port, VAR_6 | ((VAR_7 >> VAR_11) & 1 ? VAR_4 : 0));
  FUNC_4(VAR_2);
 }
 FUNC_0(VAR_12);





 FUNC_4(VAR_1);





 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  FUNC_3(VAR_9->pd->port, VAR_5);
  VAR_10[VAR_11] = FUNC_2(VAR_9->pd->port);
  FUNC_3(VAR_9->pd->port, VAR_5 | VAR_0);
  }






}
