
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* stabline ) (TYPE_1__*) ;} ;
struct TYPE_5__ {scalar_t__ file; scalar_t__ y; } ;
typedef TYPE_1__ Coordinate ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (int *) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(Coordinate *VAR_6) {
 if (VAR_6->file && VAR_6->file != VAR_1) {
  if (VAR_3)
   FUNC_0(VAR_3);
  VAR_1 = VAR_6->file;
  VAR_3 = FUNC_2(VAR_1, "r");
  VAR_4 = 0;
  VAR_2 = 0;
 }
 if (VAR_2 != VAR_6->y && VAR_3) {
  char VAR_7[512];
  if (VAR_4 > VAR_6->y) {
   FUNC_4(VAR_3);
   VAR_4 = 0;
  }
  for ( ; VAR_4 < VAR_6->y; VAR_4++)
   if (FUNC_1(VAR_7, sizeof VAR_7, VAR_3) == ((void*)0)) {
    FUNC_0(VAR_3);
    VAR_3 = ((void*)0);
    break;
   }
  if (VAR_3 && VAR_4 == VAR_6->y)
   FUNC_3("%s%s", VAR_0, VAR_7);
 }
 VAR_2 = VAR_6->y;
 if (VAR_5.stabline)
  (*VAR_5.stabline)(VAR_6);
}
