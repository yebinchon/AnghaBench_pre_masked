
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wwn_t ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct TYPE_4__ {int rxsz; int class_valid; } ;
struct TYPE_3__ {scalar_t__ els_code; } ;
struct fc_logi_s {TYPE_2__ class3; int port_name; TYPE_1__ els_cmd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

u16
FUNC_2(struct fchs_s *VAR_8, int VAR_9, wwn_t VAR_10)
{
 struct fc_logi_s *VAR_11 = (struct fc_logi_s *) (VAR_8 + 1);

 if (VAR_9 < sizeof(struct fc_logi_s))
  return VAR_3;

 if (VAR_11->els_cmd.els_code != VAR_0)
  return VAR_2;

 if (!FUNC_1(VAR_11->port_name, VAR_10))
  return VAR_6;

 if (!VAR_11->class3.class_valid)
  return VAR_4;

 if (FUNC_0(VAR_11->class3.rxsz) < (VAR_1))
  return VAR_7;

 return VAR_5;
}
