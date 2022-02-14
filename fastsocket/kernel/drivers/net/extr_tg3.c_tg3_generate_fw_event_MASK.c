
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int last_event_jiffies; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct tg3 *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 VAR_4 |= VAR_0;
 FUNC_1(VAR_1, VAR_4);

 VAR_3->last_event_jiffies = VAR_2;
}
