
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int target; } ;
struct TYPE_4__ {scalar_t__ rspcode; TYPE_1__ servparams; } ;
struct fc_prli_s {scalar_t__ command; TYPE_2__ parampage; } ;
typedef enum fc_parse_status { ____Placeholder_fc_parse_status } fc_parse_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

enum fc_parse_status
FUNC_0(struct fc_prli_s *VAR_5, int VAR_6)
{
 if (VAR_6 < sizeof(struct fc_prli_s))
  return VAR_1;

 if (VAR_5->command != VAR_0)
  return VAR_1;

 if ((VAR_5->parampage.rspcode != VAR_4)
     && (VAR_5->parampage.rspcode != VAR_3))
  return VAR_1;

 if (VAR_5->parampage.servparams.target != 1)
  return VAR_1;

 return VAR_2;
}
