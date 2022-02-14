
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SpvId ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (int *,int,long,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 long FUNC_5 (int *) ;
 int * FUNC_6 (long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(const char *VAR_1, SpvId **VAR_2, size_t *VAR_3)
{
 long VAR_4;
 FILE *VAR_5 = FUNC_1(VAR_1, "rb");

 if (!VAR_5)
  return -1;

 FUNC_4(VAR_5, 0, VAR_0);
 VAR_4 = FUNC_5(VAR_5);
 FUNC_7(VAR_5);

 *VAR_2 = FUNC_6(VAR_4);
 if (FUNC_2(*VAR_2, 1, VAR_4, VAR_5) != (size_t)VAR_4)
 {
  FUNC_0(VAR_5);
  FUNC_3(*VAR_2);
  return -1;
 }

 FUNC_0(VAR_5);
 *VAR_3 = VAR_4 / sizeof(SpvId);
 return 0;
}
