
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,int*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(void)
{


 static int VAR_2 = -1;

 if (VAR_2 == -1) {
  int VAR_3;
  size_t VAR_4 = sizeof(VAR_3);

  VAR_1;
  FUNC_0(FUNC_1("kern.development", &VAR_3, &VAR_4, ((void*)0), 0), ((void*)0));
  VAR_2 = (VAR_3 != 0);

  return VAR_2;
 } else {
  return VAR_2;
 }

}
