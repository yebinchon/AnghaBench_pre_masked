
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int db; } ;
struct c4iw_qp {TYPE_4__* rhp; TYPE_3__ wq; } ;
struct TYPE_5__ {int dbfifo_int_thresh; int * ports; } ;
struct TYPE_6__ {TYPE_1__ lldi; } ;
struct TYPE_8__ {int db_mutex; TYPE_2__ rdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct c4iw_qp *VAR_2, u32 VAR_3, u16 VAR_4)
{
 int VAR_5 = VAR_1;

 FUNC_4(&VAR_2->rhp->db_mutex);
 do {





  if (FUNC_2(VAR_2->rhp->rdev.lldi.ports[0], 1) <
      (VAR_2->rhp->rdev.lldi.dbfifo_int_thresh << 5)) {
   FUNC_9(FUNC_1(VAR_3) | FUNC_0(VAR_4), VAR_2->wq.db);
   break;
  }
  FUNC_7(VAR_0);
  FUNC_6(FUNC_8(VAR_5));
  VAR_5 = FUNC_3(VAR_5 << 1, 2000);
 } while (1);
 FUNC_5(&VAR_2->rhp->db_mutex);
 return 0;
}
