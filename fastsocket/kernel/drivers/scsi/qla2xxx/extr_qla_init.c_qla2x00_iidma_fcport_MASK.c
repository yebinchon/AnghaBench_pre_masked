
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct qla_hw_data {scalar_t__ link_data_rate; } ;
struct TYPE_7__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;
struct TYPE_8__ {scalar_t__ fp_speed; int * port_name; int loop_id; int state; } ;
typedef TYPE_2__ fc_port_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_1__*,int,char*,int ,int ,int ,int ,int ,int ,int ,int ,int,...) ;
 int VAR_3 ;
 int FUNC_3 (struct qla_hw_data*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_5(scsi_qla_host_t *VAR_4, fc_port_t *VAR_5)
{
 int VAR_6;
 uint16_t VAR_7[4];
 struct qla_hw_data *VAR_8 = VAR_4->hw;

 if (!FUNC_0(VAR_8))
  return;

 if (FUNC_1(&VAR_5->state) != VAR_0)
  return;

 if (VAR_5->fp_speed == VAR_1 ||
     VAR_5->fp_speed > VAR_8->link_data_rate)
  return;

 VAR_6 = FUNC_4(VAR_4, VAR_5->loop_id, VAR_5->fp_speed,
     VAR_7);
 if (VAR_6 != VAR_2) {
  FUNC_2(VAR_3, VAR_4, 0x2004,
      "Unable to adjust iIDMA "
      "%02x%02x%02x%02x%02x%02x%02x%02x -- %04x %x %04x "
      "%04x.\n", VAR_5->port_name[0], VAR_5->port_name[1],
      VAR_5->port_name[2], VAR_5->port_name[3],
      VAR_5->port_name[4], VAR_5->port_name[5],
      VAR_5->port_name[6], VAR_5->port_name[7], VAR_6,
      VAR_5->fp_speed, VAR_7[0], VAR_7[1]);
 } else {
  FUNC_2(VAR_3, VAR_4, 0x2005,
      "iIDMA adjusted to %s GB/s "
      "on %02x%02x%02x%02x%02x%02x%02x%02x.\n",
      FUNC_3(VAR_8, VAR_5->fp_speed),
      VAR_5->port_name[0], VAR_5->port_name[1],
      VAR_5->port_name[2], VAR_5->port_name[3],
      VAR_5->port_name[4], VAR_5->port_name[5],
      VAR_5->port_name[6], VAR_5->port_name[7]);
 }
}
