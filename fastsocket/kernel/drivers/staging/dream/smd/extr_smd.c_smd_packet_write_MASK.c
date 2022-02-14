
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int smd_channel_t ;
typedef int hdr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,void const*,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(smd_channel_t *VAR_3, const void *VAR_4, int VAR_5)
{
 unsigned VAR_6[5];

 if (VAR_5 < 0)
  return -VAR_0;

 if (FUNC_1(VAR_3) < (VAR_5 + VAR_2))
  return -VAR_1;

 VAR_6[0] = VAR_5;
 VAR_6[1] = VAR_6[2] = VAR_6[3] = VAR_6[4] = 0;

 FUNC_0(VAR_3, VAR_6, sizeof(VAR_6));
 FUNC_0(VAR_3, VAR_4, VAR_5);

 return VAR_5;
}
