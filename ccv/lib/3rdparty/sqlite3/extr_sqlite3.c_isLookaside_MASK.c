
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pEnd; int pStart; } ;
struct TYPE_5__ {TYPE_1__ lookaside; } ;
typedef TYPE_2__ sqlite3 ;


 int FUNC_0 (void*,int ,int ) ;

__attribute__((used)) static int FUNC_1(sqlite3 *VAR_0, void *VAR_1){
  return FUNC_0(VAR_1, VAR_0->lookaside.pStart, VAR_0->lookaside.pEnd);
}
