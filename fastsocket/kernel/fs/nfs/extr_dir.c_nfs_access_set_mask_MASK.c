
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfs_access_entry {int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_0(struct nfs_access_entry *VAR_9, u32 VAR_10)
{
 VAR_9->mask = 0;
 if (VAR_10 & VAR_8)
  VAR_9->mask |= VAR_1;
 if (VAR_10 &
     (VAR_7 | VAR_5 | VAR_3))
  VAR_9->mask |= VAR_2;
 if (VAR_10 & (VAR_6|VAR_4))
  VAR_9->mask |= VAR_0;
}
