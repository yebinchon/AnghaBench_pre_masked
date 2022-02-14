
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct niu_link_config {int active_duplex; int active_speed; } ;
struct niu {int lock; struct niu_link_config link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_6, int *VAR_7)
{
 struct niu_link_config *VAR_8 = &VAR_6->link_config;
 int VAR_9;
 u64 VAR_10;
 u16 VAR_11;
 unsigned long VAR_12;
 u8 VAR_13;

 VAR_9 = 0;
 VAR_11 = VAR_5;
 VAR_13 = VAR_1;

 FUNC_1(&VAR_6->lock, VAR_12);

 VAR_10 = FUNC_0(VAR_2);

 if (VAR_10 & VAR_3) {
  VAR_9 = 1;
  VAR_11 = VAR_4;
  VAR_13 = VAR_0;
 }

 VAR_8->active_speed = VAR_11;
 VAR_8->active_duplex = VAR_13;
 FUNC_2(&VAR_6->lock, VAR_12);

 *VAR_7 = VAR_9;
 return 0;
}
