
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ Tree ;
struct TYPE_5__ {char* name; int type; } ;
typedef TYPE_1__* Symbol ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_5(Symbol VAR_2, Symbol VAR_3, Tree VAR_4) {
 FUNC_0(VAR_3->name); FUNC_0("#");
 FUNC_4(FUNC_2(VAR_0), 0);
 FUNC_0(" returned");
 if (FUNC_1(VAR_3->type) != VAR_1 && VAR_4) {
  FUNC_0(" ");
  FUNC_4(VAR_4, 0);
 }
 FUNC_0("\n");
 FUNC_3(VAR_2);
}
