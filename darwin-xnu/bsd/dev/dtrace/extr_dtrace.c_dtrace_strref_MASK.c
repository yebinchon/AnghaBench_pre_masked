
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* dtst_str; int dtst_refcount; } ;
typedef TYPE_1__ dtrace_string_t ;


 int FUNC_0 (int) ;
 TYPE_1__** FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_5 (int,int ) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char const*,char*,size_t) ;

__attribute__((used)) static char *
FUNC_9(const char *VAR_5)
{
 dtrace_string_t *VAR_6 = ((void*)0);
 size_t VAR_7 = (VAR_5 != ((void*)0) ? FUNC_7(VAR_5) : 0) + 1;

 FUNC_2(&VAR_3, VAR_1);

 if (VAR_5 == ((void*)0))
  VAR_5 = "";

 for (VAR_6 = FUNC_4(VAR_4, VAR_5); VAR_6 != ((void*)0);
      VAR_6 = *(FUNC_1(VAR_4, VAR_6))) {
  if (FUNC_8(VAR_5, VAR_6->dtst_str, VAR_7) != 0) {
   continue;
  }
  FUNC_0(VAR_6->dtst_refcount != VAR_2);
  VAR_6->dtst_refcount++;
  return VAR_6->dtst_str;
 }

 VAR_6 = FUNC_5(sizeof(dtrace_string_t) + VAR_7, VAR_0);
 VAR_6->dtst_refcount = 1;
 (void) FUNC_6(VAR_6->dtst_str, VAR_5, VAR_7);

 FUNC_3(VAR_4, VAR_6);

 return VAR_6->dtst_str;
}
