
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int smd_channel_t ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,int) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(smd_channel_t *VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3 < 0)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 > 0)
  FUNC_1();

 return VAR_4;
}
