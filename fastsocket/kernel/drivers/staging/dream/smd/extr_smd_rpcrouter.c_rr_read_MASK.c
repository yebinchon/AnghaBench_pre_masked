
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(void *VAR_6, int VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;

 for(;;) {
  FUNC_2(&VAR_4, VAR_9);
  if (FUNC_1(VAR_3) >= VAR_7) {
   VAR_8 = FUNC_0(VAR_3, VAR_6, VAR_7);
   FUNC_3(&VAR_4, VAR_9);
   if (VAR_8 == VAR_7)
    return 0;
   else
    return -VAR_0;
  }
  VAR_1 = VAR_7;
  FUNC_5(&VAR_2);
  FUNC_3(&VAR_4, VAR_9);


  FUNC_4(VAR_5, FUNC_1(VAR_3) >= VAR_7);
 }
 return 0;
}
