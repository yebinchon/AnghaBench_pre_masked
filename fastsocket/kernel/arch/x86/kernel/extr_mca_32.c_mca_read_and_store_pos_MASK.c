
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 unsigned char FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0)
{
 int VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
  VAR_0[VAR_1] = FUNC_1(FUNC_0(VAR_1));
  if (VAR_0[VAR_1] != 0xff) {
   VAR_2 = 1;
  }
 }
 return VAR_2;
}
