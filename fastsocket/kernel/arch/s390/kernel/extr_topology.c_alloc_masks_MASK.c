
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_info {int* mag; int mnest; } ;
struct mask_info {struct mask_info* next; } ;


 int VAR_0 ;
 struct mask_info* FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct tl_info *VAR_1, struct mask_info *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = VAR_1->mag[VAR_0 - VAR_3];
 for (VAR_4 = 0; VAR_4 < VAR_1->mnest - VAR_3; VAR_4++)
  VAR_5 *= VAR_1->mag[VAR_0 - VAR_3 - 1 - VAR_4];
 VAR_5 = FUNC_1(VAR_5, 1);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_2->next = FUNC_0(sizeof(struct mask_info));
  VAR_2 = VAR_2->next;
 }
}
