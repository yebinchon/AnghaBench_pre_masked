
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_cmd {unsigned int nbytes; unsigned int nleft; int * cursg; scalar_t__ cursg_ofs; } ;



void FUNC_0(struct ide_cmd *VAR_0, unsigned int VAR_1)
{
 VAR_0->nbytes = VAR_0->nleft = VAR_1;
 VAR_0->cursg_ofs = 0;
 VAR_0->cursg = ((void*)0);
}
