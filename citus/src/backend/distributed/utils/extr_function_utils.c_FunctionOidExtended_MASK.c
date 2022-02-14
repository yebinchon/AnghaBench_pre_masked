
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int oid; int * next; } ;
typedef int Oid ;
typedef int List ;
typedef TYPE_1__* FuncCandidateList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int,int *,int const,int const,int) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char const*,char const*) ;
 int * FUNC_5 (char*) ;

Oid
FUNC_6(const char *VAR_5, const char *VAR_6, int VAR_7,
     bool VAR_8)
{
 FuncCandidateList VAR_9 = ((void*)0);
 Oid VAR_10 = VAR_3;

 char *VAR_11 = FUNC_4(VAR_5, VAR_6);
 List *VAR_12 = FUNC_5(VAR_11);
 List *VAR_13 = VAR_4;
 const bool VAR_14 = 0;
 const bool VAR_15 = 0;

 VAR_9 = FUNC_0(VAR_12, VAR_7,
           VAR_13, VAR_14,
           VAR_15, 1);

 if (VAR_9 == ((void*)0))
 {
  if (VAR_8)
  {
   return VAR_3;
  }

  FUNC_1(VAR_2, (FUNC_2(VAR_1),
      FUNC_3("function \"%s\" does not exist", VAR_6)));
 }
 else if (VAR_9->next != ((void*)0))
 {
  FUNC_1(VAR_2, (FUNC_2(VAR_0),
      FUNC_3("more than one function named \"%s\"", VAR_6)));
 }


 VAR_10 = VAR_9->oid;

 return VAR_10;
}
