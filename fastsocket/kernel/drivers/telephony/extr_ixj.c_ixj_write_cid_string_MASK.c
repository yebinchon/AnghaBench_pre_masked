
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXJ ;


 int FUNC_0 (int *,char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(IXJ *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_1); VAR_3++) {
  FUNC_0(VAR_0, VAR_1[VAR_3]);
  VAR_2 = (VAR_2 + VAR_1[VAR_3]);
 }
 return VAR_2;
}
