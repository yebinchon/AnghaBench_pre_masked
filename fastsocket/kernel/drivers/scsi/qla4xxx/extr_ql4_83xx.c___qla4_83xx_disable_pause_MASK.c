
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,struct scsi_qla_host*,char*) ;
 int FUNC_1 (struct scsi_qla_host*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct scsi_qla_host *VAR_10)
{
 int VAR_11;


 FUNC_1(VAR_10, VAR_9,
      VAR_7);

 for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {

  FUNC_1(VAR_10,
          VAR_1 + (VAR_11 * 0x4),
          VAR_7);

  FUNC_1(VAR_10,
          VAR_3 + (VAR_11 * 0x4),
          VAR_7);
 }

 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {

  FUNC_1(VAR_10,
         VAR_2 + (VAR_11 * 0x4),
         VAR_8);

  FUNC_1(VAR_10,
         VAR_4 + (VAR_11 * 0x4),
         VAR_8);
 }

 FUNC_1(VAR_10, VAR_5,
      VAR_7);
 FUNC_1(VAR_10, VAR_6,
      VAR_7);

 FUNC_0(VAR_0, VAR_10, "Disabled pause frames successfully.\n");
}
