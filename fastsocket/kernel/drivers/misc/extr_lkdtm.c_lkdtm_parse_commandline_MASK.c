
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_10 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_11;
 unsigned long VAR_12;

 if (VAR_6 < 1 || VAR_10 < 1)
  return -VAR_1;

 FUNC_2(&VAR_3, VAR_12);
 VAR_2 = VAR_6;
 FUNC_3(&VAR_3, VAR_12);


 if (!VAR_8 && !VAR_7)
  return 0;


 if (!VAR_8 || !VAR_7)
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_8, FUNC_5(VAR_8));
 if (VAR_9 == VAR_0)
  return -VAR_1;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_4); VAR_11++) {
  if (!FUNC_4(VAR_7, VAR_4[VAR_11])) {
   VAR_5 = VAR_11 + 1;
   return 0;
  }
 }


 return -VAR_1;
}
