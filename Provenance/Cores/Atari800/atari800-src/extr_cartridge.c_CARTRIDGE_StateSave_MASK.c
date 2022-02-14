
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; int state; int filename; } ;
struct TYPE_3__ {int type; int state; int filename; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int) ;

void FUNC_2(void)
{
 int VAR_3 = VAR_1.type;

 if (VAR_2.type != VAR_0)


  VAR_3 = -VAR_3;


 FUNC_1(&VAR_3, 1);
 if (VAR_1.type != VAR_0) {
  FUNC_0(VAR_1.filename);
  FUNC_1(&VAR_1.state, 1);
 }

 if (VAR_2.type != VAR_0) {

  FUNC_1(&VAR_2.type, 1);
  FUNC_0(VAR_2.filename);
  FUNC_1(&VAR_2.state, 1);
 }
}
