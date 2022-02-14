
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;
typedef int SWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (int *,int ,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;

void FUNC_5(void *VAR_8, int VAR_9)
{
 if (!FUNC_4()) return;

 if(VAR_6) {
  VAR_6 = VAR_0;
  FUNC_0(VAR_7);
 }
 VAR_9 /= VAR_3;
 while (VAR_9 > 0) {
  int VAR_10 = ((VAR_9 > VAR_1) ? VAR_1 : VAR_9);
  FUNC_3(VAR_5, VAR_10, VAR_4);
  if (VAR_2) FUNC_1((SWORD *)VAR_8, VAR_5, VAR_10, 128/4);
  else FUNC_2((UBYTE *)VAR_8, VAR_5, VAR_10, 128/4);
  VAR_8 = (char *) VAR_8 + VAR_1*(VAR_2 ? 2 : 1)*((VAR_3 == 2) ? 2: 1);
  VAR_9 -= VAR_1;
 }
}
