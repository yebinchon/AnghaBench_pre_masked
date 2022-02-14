
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int uint64_t ;
typedef int debugger_op ;
typedef int boolean_t ;


 int VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 unsigned long VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 char const* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char const*,int *,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(debugger_op VAR_12, const char *VAR_13, const char *VAR_14,
  va_list *VAR_15, uint64_t VAR_16, void *VAR_17,
  boolean_t VAR_18, unsigned long VAR_19)
{
 VAR_2 = VAR_12;


 if (VAR_0 == 1 || VAR_9 == ((void*)0)) {
  VAR_1 = VAR_13;
  VAR_9 = VAR_14;
  VAR_5 = VAR_15;
  VAR_7 = VAR_17;
  VAR_6 = VAR_19;
 } else if (VAR_0 > 1 && VAR_14 != ((void*)0)) {
  FUNC_1("Nested panic detected:");
  if (VAR_14 != ((void*)0))
   FUNC_0(VAR_14, VAR_15, VAR_11, 0);
 }

 VAR_4 = VAR_18;
 VAR_3 = VAR_10;


 VAR_8 = VAR_16;

 return;
}
