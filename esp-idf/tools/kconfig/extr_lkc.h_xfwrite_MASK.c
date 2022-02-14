
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 size_t FUNC_2 (void const*,size_t,size_t,int *) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_3(const void *VAR_1, size_t VAR_2, size_t VAR_3, FILE *VAR_4)
{
 FUNC_0(VAR_2 != 0);

 if (FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4) != VAR_3)
  FUNC_1(VAR_0, "Error in writing or end of file.\n");
}
