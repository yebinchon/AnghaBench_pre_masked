
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rxml_document_t ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(const char *VAR_1)
{
   rxml_document_t *VAR_2 = FUNC_3(VAR_1);
   if (!VAR_2)
   {
      FUNC_0(VAR_0, "rxml: Failed to load document: %s\n", VAR_1);
      return;
   }

   FUNC_1(FUNC_4(VAR_2), 0);
   FUNC_2(VAR_2);
}
