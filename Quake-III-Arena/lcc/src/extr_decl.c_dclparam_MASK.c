
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char* Type ;
struct TYPE_5__ {scalar_t__ scope; char src; int sclass; char* type; int defined; } ;
typedef TYPE_1__* Symbol ;
typedef char Coordinate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 char FUNC_3 () ;
 int VAR_3 ;
 TYPE_1__* FUNC_4 (char*,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_9 (char*,int ) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;
 char VAR_5 ;
 int FUNC_12 (char*,char*,int ) ;

__attribute__((used)) static Symbol FUNC_13(int VAR_6, char *VAR_7, Type VAR_8, Coordinate *VAR_9) {
 Symbol VAR_10;

 if (FUNC_6(VAR_8))
  VAR_8 = FUNC_10(VAR_8);
 else if (FUNC_5(VAR_8))
  VAR_8 = FUNC_0(VAR_8);
 if (VAR_6 == 0)
  VAR_6 = VAR_0;
 else if (VAR_6 != VAR_2) {
  FUNC_1("invalid storage class `%k' for `%t%s\n",
   VAR_6, VAR_8, FUNC_11(VAR_7 ? " %s'" : "' parameter", VAR_7));
  VAR_6 = VAR_0;
 } else if (FUNC_8(VAR_8) || FUNC_7(VAR_8)) {
  FUNC_12("register declaration ignored for `%t%s\n",
   VAR_8, FUNC_11(VAR_7 ? " %s'" : "' parameter", VAR_7));
  VAR_6 = VAR_0;
 }

 VAR_10 = FUNC_9(VAR_7, VAR_3);
 if (VAR_10 && VAR_10->scope == VAR_4)
  FUNC_1("duplicate declaration for `%s' previously declared at %w\n", VAR_7, &VAR_10->src);

 else
  VAR_10 = FUNC_4(VAR_7, &VAR_3, VAR_4, VAR_1);
 VAR_10->sclass = VAR_6;
 VAR_10->src = *VAR_9;
 VAR_10->type = VAR_8;
 VAR_10->defined = 1;
 if (VAR_5 == '=') {
  FUNC_1("illegal initialization for parameter `%s'\n", VAR_7);
  VAR_5 = FUNC_3();
  (void)FUNC_2(0);
 }
 return VAR_10;
}
