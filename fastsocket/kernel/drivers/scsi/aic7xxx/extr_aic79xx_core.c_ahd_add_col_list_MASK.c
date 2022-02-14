
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


 int FUNC_0 (struct scb*,size_t) ;
 struct scb* FUNC_1 (struct scb_list*) ;
 int FUNC_2 (struct scb*,struct scb*,int ) ;
 int FUNC_3 (struct scb_list*,struct scb*,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct scb_tailq*,struct scb*,int ) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct ahd_softc *VAR_3, struct scb *VAR_4, u_int VAR_5)
{
 struct scb_list *VAR_6;
 struct scb_tailq *VAR_7;
 struct scb *VAR_8;

 VAR_4->flags |= VAR_0;
 FUNC_0(VAR_4, VAR_5);
 VAR_6 = &VAR_3->scb_data.free_scb_lists[VAR_5];
 VAR_7 = &VAR_3->scb_data.free_scbs;
 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8 != ((void*)0)) {
  FUNC_2(VAR_8, VAR_4, VAR_1);
 } else {
  FUNC_3(VAR_6, VAR_4, VAR_1);
  FUNC_4(VAR_7, VAR_4, VAR_2.tqe);
 }
}
