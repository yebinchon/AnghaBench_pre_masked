
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs_blob {scalar_t__ csb_platform_binary; } ;



int
FUNC_0(struct cs_blob *VAR_0)
{
    if (VAR_0 && VAR_0->csb_platform_binary)
 return 1;
    return 0;
}
