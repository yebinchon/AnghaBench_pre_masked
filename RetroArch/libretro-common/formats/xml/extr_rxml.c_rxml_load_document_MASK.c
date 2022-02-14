
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rxml_document_t ;
typedef int RFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 long FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int ,int ) ;
 size_t FUNC_3 (int *,char*,long) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (long) ;
 int * FUNC_6 (char*) ;

rxml_document_t *FUNC_7(const char *VAR_2)
{
   rxml_document_t *VAR_3;
   char *VAR_4 = ((void*)0);
   long VAR_5 = 0;
   RFILE *VAR_6 = FUNC_2(VAR_2,
         VAR_1,
         VAR_0);
   if (!VAR_6)
      return ((void*)0);

   VAR_5 = FUNC_1(VAR_6);
   VAR_4 = (char*)FUNC_5(VAR_5 + 1);
   if (!VAR_4)
      goto error;

   VAR_4[VAR_5] = '\0';
   if (FUNC_3(VAR_6, VAR_4, VAR_5) != (size_t)VAR_5)
      goto error;

   FUNC_0(VAR_6);
   VAR_6 = ((void*)0);

   VAR_3 = FUNC_6(VAR_4);

   FUNC_4(VAR_4);
   return VAR_3;

error:
   FUNC_4(VAR_4);
   if(VAR_6)
      FUNC_0(VAR_6);
   return ((void*)0);
}
