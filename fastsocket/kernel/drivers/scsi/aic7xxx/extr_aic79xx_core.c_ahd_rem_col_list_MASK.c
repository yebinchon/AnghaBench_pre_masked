
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct scb_tailq {int dummy; } ;
struct scb_list {int dummy; } ;
struct scb {int flags; } ;
struct TYPE_3__ {struct scb_tailq free_scbs; struct scb_list* free_scb_lists; } ;
struct ahd_softc {TYPE_1__ scb_data; } ;
struct TYPE_4__ {int tqe; } ;


 size_t FUNC_0 (struct ahd_softc*,struct scb*) ;
 struct scb* FUNC_1 (struct scb_list*) ;
 struct scb* FUNC_2 (struct scb*,int ) ;
 int FUNC_3 (struct scb*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct scb_tailq*,struct scb*,struct scb*,int ) ;
 int FUNC_5 (struct scb_tailq*,struct scb*,int ) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_6(struct ahd_softc *VAR_3, struct scb *VAR_4)
{
 struct scb_list *VAR_5;
 struct scb_tailq *VAR_6;
 struct scb *VAR_7;
 u_int VAR_8;

 VAR_4->flags &= ~VAR_0;
 VAR_8 = FUNC_0(VAR_3, VAR_4);
 VAR_5 = &VAR_3->scb_data.free_scb_lists[VAR_8];
 VAR_6 = &VAR_3->scb_data.free_scbs;
 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 == VAR_4) {
  struct scb *VAR_9;






  VAR_9 = FUNC_2(VAR_4, VAR_1);
  if (VAR_9 != ((void*)0)) {
   FUNC_4(VAR_6, VAR_4,
        VAR_9, VAR_2.tqe);
  }
  FUNC_5(VAR_6, VAR_4, VAR_2.tqe);
 }
 FUNC_3(VAR_4, VAR_1);
}
