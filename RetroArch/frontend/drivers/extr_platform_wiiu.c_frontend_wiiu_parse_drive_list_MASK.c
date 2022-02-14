
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_list_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int,int ,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void *VAR_5, bool VAR_6)
{

   file_list_t *VAR_7 = (file_list_t *)VAR_5;
   enum msg_hash_enums VAR_8 = VAR_6 ?
      VAR_1 :
      VAR_2;

   if (!VAR_7)
      return -1;

   FUNC_0(VAR_7, VAR_3,
         FUNC_1(VAR_1),
         VAR_8,
         VAR_0, 0, 0);

   FUNC_0(VAR_7, VAR_4,
         FUNC_1(VAR_1),
         VAR_8,
         VAR_0, 0, 0);

   return 0;
}
