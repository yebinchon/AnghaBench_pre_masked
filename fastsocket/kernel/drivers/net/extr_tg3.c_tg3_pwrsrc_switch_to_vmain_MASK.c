
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int grc_local_ctrl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct tg3*,int ) ;
 int FUNC_1 (struct tg3*,int ) ;
 scalar_t__ FUNC_2 (struct tg3*) ;
 int FUNC_3 (struct tg3*,int ) ;
 int FUNC_4 (struct tg3*,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_6(struct tg3 *VAR_9)
{
 if (!FUNC_3(VAR_9, VAR_5))
  return 0;

 if (FUNC_2(VAR_9) == VAR_0 ||
     FUNC_2(VAR_9) == VAR_1 ||
     FUNC_2(VAR_9) == VAR_2) {
  if (FUNC_0(VAR_9, VAR_6))
   return -VAR_3;

  FUNC_4(VAR_9, VAR_7);

  FUNC_5(VAR_4, VAR_9->grc_local_ctrl,
       VAR_8);

  FUNC_1(VAR_9, VAR_6);
 } else {
  FUNC_5(VAR_4, VAR_9->grc_local_ctrl,
       VAR_8);
 }

 return 0;
}
