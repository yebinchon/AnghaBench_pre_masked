
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort ;
struct TYPE_3__ {scalar_t__ err_code; int iop_base; } ;
typedef TYPE_1__ ASC_DVC_VAR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(ASC_DVC_VAR *VAR_1, ushort VAR_2)
{
 if (VAR_1->err_code == 0) {
  VAR_1->err_code = VAR_2;
  FUNC_0(VAR_1->iop_base, VAR_0,
     VAR_2);
 }
 return VAR_2;
}
