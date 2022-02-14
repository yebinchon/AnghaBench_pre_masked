
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct scb {TYPE_4__* hscb; TYPE_3__* io_ctx; } ;
struct ahc_softc {int dummy; } ;
typedef scalar_t__ role_t ;
struct TYPE_8__ {scalar_t__ tag; } ;
struct TYPE_6__ {scalar_t__ tag_id; } ;
struct TYPE_5__ {int func_code; } ;
struct TYPE_7__ {TYPE_2__ csio; TYPE_1__ ccb_h; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char FUNC_0 (struct ahc_softc*,struct scb*) ;
 int FUNC_1 (struct scb*) ;
 int FUNC_2 (struct ahc_softc*,struct scb*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;

int
FUNC_4(struct ahc_softc *VAR_7, struct scb *VAR_8, int VAR_9,
       char VAR_10, int VAR_11, u_int VAR_12, role_t VAR_13)
{
 int VAR_14 = FUNC_2(VAR_7, VAR_8);
 char VAR_15 = FUNC_0(VAR_7, VAR_8);
 int VAR_16 = FUNC_1(VAR_8);
 int VAR_17;

 VAR_17 = ((VAR_15 == VAR_10) || (VAR_10 == VAR_0));
 if (VAR_17 != 0)
  VAR_17 = ((VAR_14 == VAR_9) || (VAR_9 == VAR_2));
 if (VAR_17 != 0)
  VAR_17 = ((VAR_11 == VAR_16) || (VAR_11 == VAR_1));
 if (VAR_17 != 0) {
  VAR_17 = ((VAR_12 == VAR_8->hscb->tag) || (VAR_12 == VAR_5));

 }

 return VAR_17;
}
