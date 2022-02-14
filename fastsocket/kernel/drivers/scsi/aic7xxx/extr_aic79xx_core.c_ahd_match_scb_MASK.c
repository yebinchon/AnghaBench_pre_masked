
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct scb {TYPE_3__* io_ctx; } ;
struct ahd_softc {int dummy; } ;
typedef scalar_t__ role_t ;
struct TYPE_5__ {scalar_t__ tag_id; } ;
struct TYPE_4__ {int func_code; } ;
struct TYPE_6__ {TYPE_2__ csio; TYPE_1__ ccb_h; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char FUNC_0 (struct ahd_softc*,struct scb*) ;
 int FUNC_1 (struct scb*) ;
 scalar_t__ FUNC_2 (struct scb*) ;
 int FUNC_3 (struct ahd_softc*,struct scb*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_5(struct ahd_softc *VAR_7, struct scb *VAR_8, int VAR_9,
       char VAR_10, int VAR_11, u_int VAR_12, role_t VAR_13)
{
 int VAR_14 = FUNC_3(VAR_7, VAR_8);
 char VAR_15 = FUNC_0(VAR_7, VAR_8);
 int VAR_16 = FUNC_1(VAR_8);
 int VAR_17;

 VAR_17 = ((VAR_15 == VAR_10) || (VAR_10 == VAR_0));
 if (VAR_17 != 0)
  VAR_17 = ((VAR_14 == VAR_9) || (VAR_9 == VAR_2));
 if (VAR_17 != 0)
  VAR_17 = ((VAR_11 == VAR_16) || (VAR_11 == VAR_1));
 if (VAR_17 != 0) {
  VAR_17 = ((VAR_12 == FUNC_2(VAR_8)) || (VAR_12 == VAR_5));

 }

 return VAR_17;
}
