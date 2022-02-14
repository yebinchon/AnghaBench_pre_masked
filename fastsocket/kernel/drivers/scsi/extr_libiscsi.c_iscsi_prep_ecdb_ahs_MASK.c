
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {unsigned int cmd_len; unsigned int cmnd; } ;
struct iscsi_task {int hdr_len; TYPE_1__* conn; struct scsi_cmnd* sc; } ;
struct iscsi_ecdb_ahdr {int * ecdb; scalar_t__ reserved; int ahstype; int ahslength; } ;
struct TYPE_2__ {int session; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,unsigned int,unsigned short,int ) ;
 int FUNC_2 (unsigned short) ;
 int FUNC_3 (struct iscsi_task*,int) ;
 struct iscsi_ecdb_ahdr* FUNC_4 (struct iscsi_task*) ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (int *,unsigned int,unsigned int) ;
 int FUNC_7 (int *,int ,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct iscsi_task *VAR_2)
{
 struct scsi_cmnd *VAR_3 = VAR_2->sc;
 unsigned VAR_4, VAR_5;
 unsigned short VAR_6;
 struct iscsi_ecdb_ahdr *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_2);
 VAR_4 = VAR_3->cmd_len - VAR_1;

 FUNC_0(VAR_4 > sizeof(VAR_7->ecdb));
 VAR_6 = VAR_4 + sizeof(VAR_7->reserved);

 VAR_5 = FUNC_5(VAR_4);

 VAR_8 = FUNC_3(VAR_2, sizeof(VAR_7->ahslength) +
                    sizeof(VAR_7->ahstype) + VAR_6 + VAR_5);
 if (VAR_8)
  return VAR_8;

 if (VAR_5)
  FUNC_7(&VAR_7->ecdb[VAR_4], 0, VAR_5);

 VAR_7->ahslength = FUNC_2(VAR_6);
 VAR_7->ahstype = VAR_0;
 VAR_7->reserved = 0;
 FUNC_6(VAR_7->ecdb, VAR_3->cmnd + VAR_1, VAR_4);

 FUNC_1(VAR_2->conn->session,
     "iscsi_prep_ecdb_ahs: varlen_cdb_len %d "
            "rlen %d pad_len %d ahs_length %d iscsi_headers_size "
            "%u\n", VAR_3->cmd_len, VAR_4, VAR_5, VAR_6,
            VAR_2->hdr_len);
 return 0;
}
