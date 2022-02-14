
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct zcc_magazine {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int*,int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,char*,int ) ;
 int VAR_5 ;
 int * VAR_6 ;
 uintptr_t VAR_7 ;
 int FUNC_4 () ;
 int VAR_8 ;
 int * FUNC_5 (int,int,int,char*) ;
 int VAR_9 ;

void FUNC_6(void)
{

 if (! FUNC_0("zcc_magazine_element_count", &VAR_5, sizeof (uint16_t)))
  VAR_5 = VAR_1;

 int VAR_10 = sizeof(struct zcc_magazine) + VAR_5 * sizeof(void *);

 VAR_6 = FUNC_5(VAR_10, 100000 * VAR_10 , VAR_10, "zcc_magazine_zone");

 FUNC_1(VAR_6 != ((void*)0));


 if (! FUNC_0("zcc_depot_element_count", &VAR_4, sizeof (uint16_t)))
  VAR_4 = VAR_0;

 FUNC_3(&VAR_8, "zcc_depot_lock", VAR_2);


 VAR_7 = (uintptr_t) FUNC_2();

 VAR_9 = VAR_3;

 FUNC_4();
}
