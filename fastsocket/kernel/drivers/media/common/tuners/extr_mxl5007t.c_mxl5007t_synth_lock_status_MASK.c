
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mxl5007t_state {int dummy; } ;


 int FUNC_0 (struct mxl5007t_state*,int,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct mxl5007t_state *VAR_0,
          int *VAR_1, int *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 *VAR_1 = 0;
 *VAR_2 = 0;

 VAR_4 = FUNC_0(VAR_0, 0xd8, &VAR_3);
 if (FUNC_1(VAR_4))
  goto fail;

 if ((VAR_3 & 0x0c) == 0x0c)
  *VAR_1 = 1;

 if ((VAR_3 & 0x03) == 0x03)
  *VAR_2 = 1;
fail:
 return VAR_4;
}
