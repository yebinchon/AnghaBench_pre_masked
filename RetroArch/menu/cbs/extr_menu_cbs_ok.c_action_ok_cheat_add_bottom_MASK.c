
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int,int,int *,int ,int ) ;
 int FUNC_6 (char*,int ,int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_6,
      const char *VAR_7, unsigned VAR_8, size_t VAR_9, size_t VAR_10)
{
   char VAR_11[256];
   bool VAR_12 = 0 ;
   unsigned int VAR_13 = FUNC_0() + 1;

   FUNC_3(VAR_1, &VAR_12);
   FUNC_2(VAR_5, ((void*)0));
   FUNC_1(VAR_13, VAR_0);

   VAR_11[0] = '\0';
   FUNC_6(VAR_11,
         FUNC_4(VAR_4), sizeof(VAR_11));
   VAR_11[sizeof(VAR_11) - 1] = 0;

   FUNC_5(VAR_11, 1, 180, 1, ((void*)0), VAR_3, VAR_2);

   return 0 ;
}
