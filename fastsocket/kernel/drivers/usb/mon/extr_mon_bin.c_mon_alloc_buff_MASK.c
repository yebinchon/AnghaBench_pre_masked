
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_pgmap {unsigned char* ptr; int pg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(struct mon_pgmap *VAR_2, int VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_1(VAR_1);
  if (VAR_5 == 0) {
   while (VAR_4-- != 0)
    FUNC_0((unsigned long) VAR_2[VAR_4].ptr);
   return -VAR_0;
  }
  VAR_2[VAR_4].ptr = (unsigned char *) VAR_5;
  VAR_2[VAR_4].pg = FUNC_2((void *) VAR_5);
 }
 return 0;
}
