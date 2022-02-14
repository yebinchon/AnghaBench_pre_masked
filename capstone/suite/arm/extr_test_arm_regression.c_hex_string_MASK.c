
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,int,char*,unsigned char) ;

__attribute__((used)) static char *FUNC_2(unsigned char *VAR_0, size_t VAR_1)
{


 char *VAR_2;
 size_t VAR_3;

 VAR_2 = (char *) FUNC_0(VAR_1*2 + 1);
 if (!VAR_2) { goto Exit; }

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  FUNC_1(VAR_2 + (VAR_3*2), 2, "%02x", VAR_0[VAR_3]);
 }

 VAR_2[VAR_1*2] = 0;

Exit:
 return VAR_2;
}
