
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ applid; } ;
struct capidev {int list; int ncci_list_mtx; int recvqueue; TYPE_1__ ap; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct capidev*,int) ;
 int FUNC_2 (struct capidev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct capidev *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1->ap.applid) {
  FUNC_0(&VAR_1->ap);
  VAR_1->ap.applid = 0;
 }
 FUNC_6(&VAR_1->recvqueue);

 FUNC_4(&VAR_1->ncci_list_mtx);
 FUNC_1(VAR_1, 0xffffffff);
 FUNC_5(&VAR_1->ncci_list_mtx);

 FUNC_7(&VAR_0, VAR_2);
 FUNC_3(&VAR_1->list);
 FUNC_8(&VAR_0, VAR_2);
 FUNC_2(VAR_1);
}
