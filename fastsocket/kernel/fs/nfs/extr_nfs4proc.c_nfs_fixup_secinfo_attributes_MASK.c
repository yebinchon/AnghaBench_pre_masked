
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fattr {int valid; int mode; int nlink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_0(struct nfs_fattr *VAR_7)
{
 VAR_7->valid |= VAR_3 | VAR_0 |
  VAR_2 | VAR_1;
 VAR_7->mode = VAR_4 | VAR_5 | VAR_6;
 VAR_7->nlink = 2;
}
