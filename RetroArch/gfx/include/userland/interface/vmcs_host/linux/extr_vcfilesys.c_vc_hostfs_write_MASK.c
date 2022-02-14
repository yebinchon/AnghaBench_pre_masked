
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,void const*,unsigned int,int) ;
 scalar_t__ FUNC_1 (int,void const*,unsigned int) ;

int FUNC_2(int VAR_0, const void *VAR_1, unsigned int VAR_2)
{
   int VAR_3 = (int) FUNC_1(VAR_0, VAR_1, VAR_2);
   FUNC_0("vc_hostfs_write(%d,%p,%u) = %d", VAR_0, VAR_1, VAR_2, VAR_3);
   return VAR_3;
}
