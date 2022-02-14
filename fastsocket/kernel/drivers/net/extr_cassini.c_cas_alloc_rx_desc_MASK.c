
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cas {int *** rx_pages; } ;
typedef int cas_page_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (struct cas*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct cas *VAR_1, int VAR_2)
{
 cas_page_t **VAR_3 = VAR_1->rx_pages[VAR_2];
 int VAR_4, VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if ((VAR_3[VAR_5] = FUNC_1(VAR_1, VAR_0)) == ((void*)0))
   return -1;
 }
 return 0;
}
