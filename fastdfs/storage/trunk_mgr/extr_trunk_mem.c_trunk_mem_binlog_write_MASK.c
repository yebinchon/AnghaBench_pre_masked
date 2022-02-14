
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; } ;
struct TYPE_6__ {TYPE_1__ file; } ;
typedef TYPE_2__ FDFSTrunkFullInfo ;


 char const VAR_0 ;
 char const VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,char const,TYPE_2__ const*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(const int VAR_4, const char VAR_5, const FDFSTrunkFullInfo *VAR_6)

{
 FUNC_0(&VAR_3);
 if (VAR_5 == VAR_0)
 {
  VAR_2 += VAR_6->file.size;
 }
 else if (VAR_5 == VAR_1)
 {
  VAR_2 -= VAR_6->file.size;
 }
 FUNC_1(&VAR_3);

 return FUNC_2(VAR_4, VAR_5, VAR_6);
}
