
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_2__* ifbond_ref ;
typedef TYPE_3__* bondport_ref ;
struct TYPE_16__ {scalar_t__ verbose; } ;
struct TYPE_15__ {scalar_t__ po_selected; int po_media_info; TYPE_1__* po_lag; TYPE_2__* po_bond; } ;
struct TYPE_14__ {scalar_t__ ifb_mode; TYPE_1__* ifb_active_lag; } ;
struct TYPE_13__ {scalar_t__ lag_active_media; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int *) ;
 int FUNC_4 (TYPE_3__*,int ,int *) ;
 int FUNC_5 (TYPE_3__*,int ,int *) ;
 int FUNC_6 (TYPE_3__*,scalar_t__) ;
 TYPE_4__* VAR_3 ;
 char* FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (char*,int ,...) ;

__attribute__((used)) static void
FUNC_12(bondport_ref VAR_4)
{
    ifbond_ref VAR_5 = VAR_4->po_bond;

    if (VAR_3->verbose) {
 if (FUNC_8(&VAR_4->po_media_info)) {
     FUNC_11("[%s] Link UP %d Mbit/s %s duplex\n",
        FUNC_2(VAR_4),
        FUNC_10(&VAR_4->po_media_info),
        FUNC_9(&VAR_4->po_media_info)
        ? "full" : "half");
 }
 else {
     FUNC_11("[%s] Link DOWN\n", FUNC_2(VAR_4));
 }
    }
    if (VAR_5->ifb_mode == VAR_0) {
 if (FUNC_8(&VAR_4->po_media_info)
     && VAR_5->ifb_active_lag != ((void*)0)
     && VAR_4->po_lag == VAR_5->ifb_active_lag
     && VAR_4->po_selected != VAR_2) {
     if (FUNC_10(&VAR_4->po_media_info) != VAR_4->po_lag->lag_active_media) {
  if (VAR_3->verbose) {
      FUNC_11("[%s] Port speed %d differs from LAG %d\n",
         FUNC_2(VAR_4),
         FUNC_10(&VAR_4->po_media_info),
         FUNC_7(VAR_4->po_lag->lag_active_media));
  }
  FUNC_6(VAR_4, VAR_2);
     }
 }
 FUNC_5(VAR_4, VAR_1, ((void*)0));
 FUNC_3(VAR_4, VAR_1, ((void*)0));
 FUNC_4(VAR_4, VAR_1, ((void*)0));
    }
    else {
 if (FUNC_8(&VAR_4->po_media_info)) {
     FUNC_1(VAR_4);
 }
 else {
     FUNC_0(VAR_4);
 }
    }
    return;
}
