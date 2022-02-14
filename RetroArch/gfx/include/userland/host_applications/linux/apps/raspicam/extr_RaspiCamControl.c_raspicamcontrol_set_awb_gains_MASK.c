
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int param ;
struct TYPE_15__ {int control; } ;
struct TYPE_10__ {unsigned int num; int den; } ;
struct TYPE_9__ {unsigned int num; int den; } ;
struct TYPE_13__ {int member_1; int member_0; } ;
struct TYPE_12__ {int member_1; int member_0; } ;
struct TYPE_11__ {int member_1; int member_0; } ;
struct TYPE_14__ {int hdr; TYPE_2__ b_gain; TYPE_1__ r_gain; TYPE_5__ member_2; TYPE_4__ member_1; TYPE_3__ member_0; } ;
typedef TYPE_6__ MMAL_PARAMETER_AWB_GAINS_T ;
typedef TYPE_7__ MMAL_COMPONENT_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(MMAL_COMPONENT_T *VAR_1, float VAR_2, float VAR_3)
{
   MMAL_PARAMETER_AWB_GAINS_T VAR_4 = {{VAR_0,sizeof(VAR_4)}, {0,0}, {0,0}};

   if (!VAR_1)
      return 1;

   if (!VAR_2 || !VAR_3)
      return 0;

   VAR_4.r_gain.num = (unsigned int)(VAR_2 * 65536);
   VAR_4.b_gain.num = (unsigned int)(VAR_3 * 65536);
   VAR_4.r_gain.den = VAR_4.b_gain.den = 65536;
   return FUNC_1(FUNC_0(VAR_1->control, &VAR_4.hdr));
}
