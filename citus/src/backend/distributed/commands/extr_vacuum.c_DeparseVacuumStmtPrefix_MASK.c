
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int options; scalar_t__ truncate; scalar_t__ index_cleanup; } ;
struct TYPE_8__ {char* data; int len; } ;
typedef TYPE_1__* StringInfo ;
typedef TYPE_2__ CitusVacuumParams ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,char) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_3 () ;

__attribute__((used)) static StringInfo
FUNC_4(CitusVacuumParams VAR_9)
{
 int VAR_10 = VAR_9.options;
 StringInfo VAR_11 = FUNC_3();


 if (VAR_10 & VAR_7)
 {
  FUNC_2(VAR_11, "VACUUM ");
  VAR_10 &= ~VAR_7;
 }
 else
 {
  FUNC_0((VAR_10 & VAR_0) != 0);

  FUNC_2(VAR_11, "ANALYZE ");
  VAR_10 &= ~VAR_0;

  if (VAR_10 & VAR_8)
  {
   FUNC_2(VAR_11, "VERBOSE ");
   VAR_10 &= ~VAR_8;
  }
 }


 if (VAR_10 == 0




  )
 {
  return VAR_11;
 }


 FUNC_1(VAR_11, '(');

 if (VAR_10 & VAR_0)
 {
  FUNC_2(VAR_11, "ANALYZE,");
 }

 if (VAR_10 & VAR_1)
 {
  FUNC_2(VAR_11, "DISABLE_PAGE_SKIPPING,");
 }

 if (VAR_10 & VAR_2)
 {
  FUNC_2(VAR_11, "FREEZE,");
 }

 if (VAR_10 & VAR_3)
 {
  FUNC_2(VAR_11, "FULL,");
 }

 if (VAR_10 & VAR_8)
 {
  FUNC_2(VAR_11, "VERBOSE,");
 }
 VAR_11->data[VAR_11->len - 1] = ')';

 FUNC_1(VAR_11, ' ');

 return VAR_11;
}
