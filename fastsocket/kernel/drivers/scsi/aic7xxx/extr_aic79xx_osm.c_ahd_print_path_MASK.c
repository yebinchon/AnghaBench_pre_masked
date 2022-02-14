
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scb {int dummy; } ;
struct ahd_softc {TYPE_2__* platform_data; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int host_no; } ;


 char FUNC_0 (struct ahd_softc*,struct scb*) ;
 int FUNC_1 (struct scb*) ;
 int FUNC_2 (struct ahd_softc*,struct scb*) ;
 int FUNC_3 (char*,int ,char,int,int) ;

void
FUNC_4(struct ahd_softc *VAR_0, struct scb *VAR_1)
{
 FUNC_3("(scsi%d:%c:%d:%d): ",
        VAR_0->platform_data->host->host_no,
        VAR_1 != ((void*)0) ? FUNC_0(VAR_0, VAR_1) : 'X',
        VAR_1 != ((void*)0) ? FUNC_2(VAR_0, VAR_1) : -1,
        VAR_1 != ((void*)0) ? FUNC_1(VAR_1) : -1);
}
