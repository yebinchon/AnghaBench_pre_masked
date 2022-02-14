
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(unsigned *VAR_2)
{
 if (*VAR_2 == 0)
  *VAR_2 = ((VAR_1 << VAR_0) >> 13) /
    sizeof(struct fuse_req);

 if (*VAR_2 >= 1 << 16)
  *VAR_2 = (1 << 16) - 1;
}
