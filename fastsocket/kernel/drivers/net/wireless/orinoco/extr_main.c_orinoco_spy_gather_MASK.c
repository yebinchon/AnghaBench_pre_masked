
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct net_device {int dummy; } ;
struct iw_quality {int level; int noise; int qual; int updated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int *,struct iw_quality*) ;

__attribute__((used)) static inline void FUNC_1(struct net_device *VAR_2, u_char *VAR_3,
          int VAR_4, int VAR_5)
{
 struct iw_quality VAR_6;
 VAR_6.level = VAR_4 - 0x95;
 VAR_6.noise = VAR_5 - 0x95;
 VAR_6.qual = (VAR_4 > VAR_5) ? (VAR_4 - VAR_5) : 0;
 VAR_6.updated = VAR_0 | VAR_1;

 FUNC_0(VAR_2, VAR_3, &VAR_6);
}
