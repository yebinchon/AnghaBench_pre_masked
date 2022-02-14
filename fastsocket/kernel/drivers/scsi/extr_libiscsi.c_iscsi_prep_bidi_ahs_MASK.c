
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct iscsi_task {TYPE_1__* conn; struct scsi_cmnd* sc; } ;
struct iscsi_rlength_ahdr {int ahslength; int read_length; scalar_t__ reserved; int ahstype; } ;
struct TYPE_4__ {int length; } ;
struct TYPE_3__ {int session; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iscsi_task*,int) ;
 struct iscsi_rlength_ahdr* FUNC_6 (struct iscsi_task*) ;
 TYPE_2__* FUNC_7 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_8(struct iscsi_task *VAR_1)
{
 struct scsi_cmnd *VAR_2 = VAR_1->sc;
 struct iscsi_rlength_ahdr *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_6(VAR_1);
 VAR_4 = FUNC_5(VAR_1, sizeof(*VAR_3));
 if (VAR_4)
  return VAR_4;

 VAR_3->ahslength =
  FUNC_3(sizeof(VAR_3->read_length) +
        sizeof(VAR_3->reserved));
 VAR_3->ahstype = VAR_0;
 VAR_3->reserved = 0;
 VAR_3->read_length = FUNC_4(FUNC_7(VAR_2)->length);

 FUNC_0(VAR_1->conn->session,
     "bidi-in rlen_ahdr->read_length(%d) "
            "rlen_ahdr->ahslength(%d)\n",
            FUNC_2(VAR_3->read_length),
            FUNC_1(VAR_3->ahslength));
 return 0;
}
