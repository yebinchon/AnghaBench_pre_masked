
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_5;

 VAR_3 = FUNC_3(VAR_2 * sizeof(struct list_head),
      VAR_1);
 if (!VAR_3) {
  FUNC_0("unable to allocate memory");
  return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_1(VAR_3 + VAR_5);
 FUNC_2(&VAR_4);

 return 0;
}
