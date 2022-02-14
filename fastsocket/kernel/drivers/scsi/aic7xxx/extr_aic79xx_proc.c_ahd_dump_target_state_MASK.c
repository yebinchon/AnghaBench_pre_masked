
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct scsi_target {int dummy; } ;
struct scsi_device {int dummy; } ;
struct info_str {int dummy; } ;
struct ahd_tmode_tstate {int dummy; } ;
struct ahd_softc {TYPE_1__* platform_data; } ;
struct ahd_initiator_tinfo {int curr; int goal; int user; } ;
struct TYPE_2__ {struct scsi_target** starget; } ;


 int VAR_0 ;
 int FUNC_0 (struct info_str*,struct scsi_device*) ;
 struct ahd_initiator_tinfo* FUNC_1 (struct ahd_softc*,char,size_t,size_t,struct ahd_tmode_tstate**) ;
 int FUNC_2 (struct info_str*,int *) ;
 int FUNC_3 (struct info_str*,char*,...) ;
 struct scsi_device* FUNC_4 (struct scsi_target*,int) ;

__attribute__((used)) static void
FUNC_5(struct ahd_softc *VAR_1, struct info_str *VAR_2,
        u_int VAR_3, char VAR_4, u_int VAR_5)
{
 struct scsi_target *VAR_6;
 struct ahd_initiator_tinfo *VAR_7;
 struct ahd_tmode_tstate *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_1, VAR_4, VAR_3,
        VAR_5, &VAR_8);
 FUNC_3(VAR_2, "Target %d Negotiation Settings\n", VAR_5);
 FUNC_3(VAR_2, "\tUser: ");
 FUNC_2(VAR_2, &VAR_7->user);
 VAR_6 = VAR_1->platform_data->starget[VAR_5];
 if (VAR_6 == ((void*)0))
  return;

 FUNC_3(VAR_2, "\tGoal: ");
 FUNC_2(VAR_2, &VAR_7->goal);
 FUNC_3(VAR_2, "\tCurr: ");
 FUNC_2(VAR_2, &VAR_7->curr);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  struct scsi_device *VAR_10;

  VAR_10 = FUNC_4(VAR_6, VAR_9);

  if (VAR_10 == ((void*)0))
   continue;

  FUNC_0(VAR_2, VAR_10);
 }
}
