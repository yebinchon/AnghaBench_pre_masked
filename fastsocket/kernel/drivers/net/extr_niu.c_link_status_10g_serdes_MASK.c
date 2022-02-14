
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct niu_link_config {int active_duplex; int active_speed; } ;
struct niu {int flags; int lock; struct niu_link_config link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct niu*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct niu *VAR_6, int *VAR_7)
{
 unsigned long VAR_8;
 struct niu_link_config *VAR_9 = &VAR_6->link_config;
 int VAR_10 = 0;
 int VAR_11 = 1;
 u64 VAR_12, VAR_13;
 u16 VAR_14;
 u8 VAR_15;

 if (!(VAR_6->flags & VAR_2))
  return FUNC_1(VAR_6, VAR_7);

 VAR_14 = VAR_4;
 VAR_15 = VAR_1;
 FUNC_4(&VAR_6->lock, VAR_8);

 VAR_12 = FUNC_3(FUNC_0(0));
 VAR_13 = FUNC_2(VAR_5);
 if (VAR_13 & 0x01000000)
  VAR_11 = 0;

 if ((VAR_12 & 0x1000ULL) && VAR_11) {
  VAR_10 = 1;
  VAR_14 = VAR_3;
  VAR_15 = VAR_0;
 }
 VAR_9->active_speed = VAR_14;
 VAR_9->active_duplex = VAR_15;
 FUNC_5(&VAR_6->lock, VAR_8);
 *VAR_7 = VAR_10;
 return 0;
}
