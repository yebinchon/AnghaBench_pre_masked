
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3_fiber_aneginfo {int flags; int txconfig; scalar_t__ cur_time; int state; } ;
struct tg3 {int mac_mode; } ;
typedef int aninfo ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct tg3_fiber_aneginfo*,int ,int) ;
 int FUNC_1 (struct tg3*,struct tg3_fiber_aneginfo*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct tg3 *VAR_12, u32 *VAR_13, u32 *VAR_14)
{
 int VAR_15 = 0;
 struct tg3_fiber_aneginfo VAR_16;
 int VAR_17 = VAR_1;
 unsigned int VAR_18;
 u32 VAR_19;

 FUNC_2(VAR_7, 0);

 VAR_19 = VAR_12->mac_mode & ~VAR_5;
 FUNC_2(VAR_3, VAR_19 | VAR_4);
 FUNC_3(40);

 FUNC_2(VAR_3, VAR_12->mac_mode | VAR_6);
 FUNC_3(40);

 FUNC_0(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.flags |= VAR_9;
 VAR_16.state = VAR_2;
 VAR_16.cur_time = 0;
 VAR_18 = 0;
 while (++VAR_18 < 195000) {
  VAR_17 = FUNC_1(VAR_12, &VAR_16);
  if (VAR_17 == VAR_0 || VAR_17 == VAR_1)
   break;

  FUNC_3(1);
 }

 VAR_12->mac_mode &= ~VAR_6;
 FUNC_2(VAR_3, VAR_12->mac_mode);
 FUNC_3(40);

 *VAR_13 = VAR_16.txconfig;
 *VAR_14 = VAR_16.flags;

 if (VAR_17 == VAR_0 &&
     (VAR_16.flags & (VAR_8 | VAR_10 |
        VAR_11)))
  VAR_15 = 1;

 return VAR_15;
}
