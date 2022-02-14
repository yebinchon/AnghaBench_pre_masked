
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3_napi {int last_tag; int coal_now; int int_mbox; struct tg3* tp; } ;
struct tg3 {int coalesce_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct tg3*,int ) ;
 scalar_t__ FUNC_2 (struct tg3_napi*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct tg3_napi *VAR_3)
{
 struct tg3 *VAR_4 = VAR_3->tp;

 FUNC_4(VAR_3->int_mbox, VAR_3->last_tag << 24);
 FUNC_0();





 if (!FUNC_1(VAR_4, VAR_2) && FUNC_2(VAR_3))
  FUNC_3(VAR_0, VAR_4->coalesce_mode |
       VAR_1 | VAR_3->coal_now);
}
