
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_0(struct nfs_fattr *VAR_10)
{
 if (!(((VAR_10->valid & VAR_3) ||
        (VAR_10->valid & VAR_0)) &&
       (VAR_10->valid & VAR_1) &&
       (VAR_10->valid & VAR_6)))
  return;

 VAR_10->valid |= VAR_5 | VAR_2 |
  VAR_4;
 VAR_10->mode = VAR_7 | VAR_8 | VAR_9;
 VAR_10->nlink = 2;
}
