
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 char* FUNC_0 (unsigned int) ;
 char* FUNC_1 (unsigned int) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,size_t,char*,char*,unsigned int,char*) ;

__attribute__((used)) static int FUNC_4(
      file_list_t *VAR_4,
      unsigned VAR_5, unsigned VAR_6,
      const char *VAR_7, const char *VAR_8,
      char *VAR_9, size_t VAR_10)
{
   unsigned VAR_11 = (VAR_5 - VAR_2) / VAR_3;

   FUNC_3(VAR_9, VAR_10, "%s #%d: %s",
         FUNC_2(VAR_1),
         VAR_11 + 1,
         FUNC_0(VAR_11) ?
         FUNC_0(VAR_11) :
         (FUNC_1(VAR_11) ?
            FUNC_1(VAR_11) :
            FUNC_2(VAR_0)));
   return 0;
}
