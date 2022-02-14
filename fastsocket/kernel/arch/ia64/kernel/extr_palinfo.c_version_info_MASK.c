
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pv_pal_vendor; int pv_pal_a_model; int pv_pal_a_rev; int pv_pal_b_model; int pv_pal_b_rev; } ;
struct TYPE_6__ {TYPE_1__ pal_version_s; } ;
typedef TYPE_2__ pal_version_u_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (char*,char*,int,int,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0)
{
 pal_version_u_t VAR_1, VAR_2;
 char *VAR_3 = VAR_0;

 if (FUNC_0(&VAR_1, &VAR_2) != 0)
  return 0;

 VAR_3 += FUNC_1(VAR_3,
       "PAL_vendor : 0x%02x (min=0x%02x)\n"
       "PAL_A      : %02x.%02x (min=%02x.%02x)\n"
       "PAL_B      : %02x.%02x (min=%02x.%02x)\n",
       VAR_2.pal_version_s.pv_pal_vendor,
       VAR_1.pal_version_s.pv_pal_vendor,
       VAR_2.pal_version_s.pv_pal_a_model,
       VAR_2.pal_version_s.pv_pal_a_rev,
       VAR_1.pal_version_s.pv_pal_a_model,
       VAR_1.pal_version_s.pv_pal_a_rev,
       VAR_2.pal_version_s.pv_pal_b_model,
       VAR_2.pal_version_s.pv_pal_b_rev,
       VAR_1.pal_version_s.pv_pal_b_model,
       VAR_1.pal_version_s.pv_pal_b_rev);
 return VAR_3 - VAR_0;
}
