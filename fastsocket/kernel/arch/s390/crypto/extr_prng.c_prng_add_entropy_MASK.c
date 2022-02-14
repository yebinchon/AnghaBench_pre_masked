
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int entropy ;
typedef int __u64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*,char*,int) ;
 int FUNC_2 (int ,int *,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
 __u64 VAR_2[4];
 unsigned int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
  VAR_4 = FUNC_1(VAR_0, VAR_1, (char *)VAR_2,
         (char *)VAR_2, sizeof(VAR_2));
  FUNC_0(VAR_4 < 0 || VAR_4 != sizeof(VAR_2));
  FUNC_2(VAR_1, VAR_2, sizeof(VAR_2));
 }
}
