
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (void*,void*,int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_5)
{
 void *VAR_6 = VAR_0;

 if (&FUNC_1)
  FUNC_1(VAR_2);

 VAR_2++;
 VAR_3--;
 if (VAR_3 <= 0) {
  VAR_3 = VAR_4;

  FUNC_0(VAR_5);
  FUNC_2(VAR_0, VAR_6, 320 * VAR_1 / 8 / 4);
  if (&FUNC_1)
   FUNC_1(VAR_2);

  VAR_2++;
 }

 return 0;
}
