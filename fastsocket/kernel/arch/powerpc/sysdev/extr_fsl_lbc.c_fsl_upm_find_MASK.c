
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fsl_upm {int width; int * mxmr; } ;
typedef int phys_addr_t ;
typedef int __be32 ;
struct TYPE_4__ {int mcmr; int mbmr; int mamr; TYPE_1__* bank; } ;
struct TYPE_3__ {int br; } ;


 int VAR_0 ;



 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int *) ;

int FUNC_2(phys_addr_t VAR_4, struct fsl_upm *VAR_5)
{
 int VAR_6;
 __be32 VAR_7;

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_7 = FUNC_1(&VAR_3->bank[VAR_6].br);

 switch (VAR_7 & VAR_0) {
 case 133:
  VAR_5->mxmr = &VAR_3->mamr;
  break;
 case 132:
  VAR_5->mxmr = &VAR_3->mbmr;
  break;
 case 131:
  VAR_5->mxmr = &VAR_3->mcmr;
  break;
 default:
  return -VAR_2;
 }

 switch (VAR_7 & VAR_1) {
 case 128:
  VAR_5->width = 8;
  break;
 case 130:
  VAR_5->width = 16;
  break;
 case 129:
  VAR_5->width = 32;
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
