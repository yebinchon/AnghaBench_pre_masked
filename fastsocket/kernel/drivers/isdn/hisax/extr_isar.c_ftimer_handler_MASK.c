
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct BCState {int Flag; TYPE_1__* cs; } ;
struct TYPE_2__ {scalar_t__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (struct BCState*,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct BCState *VAR_5) {
 if (VAR_5->cs->debug)
  FUNC_0(VAR_5->cs, "ftimer flags %04x",
   VAR_5->Flag);
 FUNC_2(VAR_1, &VAR_5->Flag);
 if (FUNC_2(VAR_2, &VAR_5->Flag)) {
  FUNC_1(VAR_5, VAR_3);
 }
 if (FUNC_2(VAR_0, &VAR_5->Flag)) {
  FUNC_1(VAR_5, VAR_4);
 }
}
