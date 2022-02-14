
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct av7110 {int aout; int avout; } ;


 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int,char*,struct av7110*) ;
 int FUNC_2 (struct av7110*,int*,int) ;

__attribute__((used)) static void FUNC_3(u8 *VAR_0, int VAR_1, void *VAR_2)
{
 struct av7110 *VAR_3 = (struct av7110 *) VAR_2;
 FUNC_1(2, "av7110:%p, \n", VAR_3);

 if ((VAR_0[3] & 0xe0) == 0xe0) {
  FUNC_2(VAR_3, VAR_0, VAR_1);
  FUNC_0(&VAR_3->avout, VAR_0, VAR_1);
 } else
  FUNC_0(&VAR_3->aout, VAR_0, VAR_1);
}
