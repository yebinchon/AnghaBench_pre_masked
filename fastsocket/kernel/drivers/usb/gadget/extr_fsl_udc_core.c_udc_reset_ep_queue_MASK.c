
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fsl_udc {int dummy; } ;
struct fsl_ep {scalar_t__ name; } ;


 int VAR_0 ;
 struct fsl_ep* FUNC_0 (struct fsl_udc*,int ) ;
 int FUNC_1 (struct fsl_ep*,int ) ;

__attribute__((used)) static void FUNC_2(struct fsl_udc *VAR_1, u8 VAR_2)
{
 struct fsl_ep *VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3->name)
  FUNC_1(VAR_3, -VAR_0);
}
