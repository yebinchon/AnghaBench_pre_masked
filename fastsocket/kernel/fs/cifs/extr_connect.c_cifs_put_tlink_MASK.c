
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcon_link {int tl_time; int tl_flags; int tl_count; } ;


 scalar_t__ FUNC_0 (struct tcon_link*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tcon_link*) ;
 int VAR_1 ;
 int FUNC_3 (struct tcon_link*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 struct tcon_link* FUNC_5 (struct tcon_link*) ;

void
FUNC_6(struct tcon_link *VAR_2)
{
 if (!VAR_2 || FUNC_0(VAR_2))
  return;

 if (!FUNC_1(&VAR_2->tl_count) ||
     FUNC_4(VAR_0, &VAR_2->tl_flags)) {
  VAR_2->tl_time = VAR_1;
  return;
 }

 if (!FUNC_0(FUNC_5(VAR_2)))
  FUNC_2(FUNC_5(VAR_2));
 FUNC_3(VAR_2);
 return;
}
