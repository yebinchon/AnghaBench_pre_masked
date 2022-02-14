
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe {int dummy; } ;
struct page_list {struct page_list* next; int page; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct stripe*,int) ;
 unsigned int VAR_1 ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 struct page_list* FUNC_5 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct stripe *VAR_2, int VAR_3,
    unsigned VAR_4, unsigned VAR_5)
{
 unsigned VAR_6 = VAR_4 / VAR_1, VAR_7 = FUNC_2(VAR_5);

 struct page_list *VAR_8 = FUNC_5(FUNC_1(VAR_2, VAR_3), VAR_6);

 FUNC_0(!VAR_8);
 while (VAR_8 && VAR_7--) {
  FUNC_0(!VAR_8->page);
  FUNC_3(FUNC_4(VAR_8->page), 0, VAR_0);
  VAR_8 = VAR_8->next;
 }
}
