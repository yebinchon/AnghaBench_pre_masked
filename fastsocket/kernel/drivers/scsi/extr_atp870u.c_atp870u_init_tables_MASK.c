
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atp_unit {int* host_id; int* last_cmd; int** sp; TYPE_1__** id; int *** quereq; scalar_t__* in_int; scalar_t__* in_snd; scalar_t__* quend; scalar_t__* quhd; scalar_t__* wide_id; scalar_t__* active_id; int pdev; } ;
struct Scsi_Host {int hostdata; } ;
struct TYPE_2__ {int devsp; int devtype; int * curr_req; int prd_bus; int prdaddr; int prd_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct Scsi_Host *VAR_2)
{
 struct atp_unit *VAR_3 = (struct atp_unit *)&VAR_2->hostdata;
 int VAR_4,VAR_5;
 for(VAR_4=0;VAR_4 < 2;VAR_4++) {
     for(VAR_5=0;VAR_5<16;VAR_5++) {
       VAR_3->id[VAR_4][VAR_5].prd_table = FUNC_1(VAR_3->pdev, 1024, &(VAR_3->id[VAR_4][VAR_5].prd_bus));
       if (!VAR_3->id[VAR_4][VAR_5].prd_table) {
        FUNC_2("atp870u_init_tables fail\n");
    FUNC_0(VAR_2);
    return -VAR_0;
   }
   VAR_3->id[VAR_4][VAR_5].prdaddr = VAR_3->id[VAR_4][VAR_5].prd_bus;
   VAR_3->id[VAR_4][VAR_5].devsp=0x20;
   VAR_3->id[VAR_4][VAR_5].devtype = 0x7f;
   VAR_3->id[VAR_4][VAR_5].curr_req = ((void*)0);
     }

     VAR_3->active_id[VAR_4] = 0;
     VAR_3->wide_id[VAR_4] = 0;
     VAR_3->host_id[VAR_4] = 0x07;
     VAR_3->quhd[VAR_4] = 0;
     VAR_3->quend[VAR_4] = 0;
     VAR_3->last_cmd[VAR_4] = 0xff;
     VAR_3->in_snd[VAR_4] = 0;
     VAR_3->in_int[VAR_4] = 0;

     for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        VAR_3->quereq[VAR_4][VAR_5] = ((void*)0);
     }
     for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
      VAR_3->id[VAR_4][VAR_5].curr_req = ((void*)0);
      VAR_3->sp[VAR_4][VAR_5] = 0x04;
     }
 }
 return 0;
}
