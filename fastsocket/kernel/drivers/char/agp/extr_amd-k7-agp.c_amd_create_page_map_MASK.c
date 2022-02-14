
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amd_page_map {unsigned long* real; unsigned long* remapped; } ;
struct TYPE_2__ {int scratch_page; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 unsigned long* FUNC_5 (int ,int) ;
 int FUNC_6 (unsigned long*) ;
 int FUNC_7 (unsigned long,int) ;
 int FUNC_8 (unsigned long*) ;
 int FUNC_9 (unsigned long*) ;
 int FUNC_10 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_11(struct amd_page_map *VAR_4)
{
 int VAR_5;

 VAR_4->real = (unsigned long *) FUNC_2(VAR_1);
 if (VAR_4->real == ((void*)0))
  return -VAR_0;


 FUNC_1(FUNC_8(VAR_4->real));
 FUNC_4();
 VAR_4->remapped = FUNC_5(FUNC_9(VAR_4->real),
         VAR_2);
 if (VAR_4->remapped == ((void*)0)) {
  FUNC_0(FUNC_8(VAR_4->real));
  FUNC_3((unsigned long) VAR_4->real);
  VAR_4->real = ((void*)0);
  return -VAR_0;
 }
 FUNC_4();





 for (VAR_5 = 0; VAR_5 < VAR_2 / sizeof(unsigned long); VAR_5++) {
  FUNC_10(VAR_3->scratch_page, VAR_4->remapped+VAR_5);
  FUNC_6(VAR_4->remapped+VAR_5);
 }

 return 0;
}
