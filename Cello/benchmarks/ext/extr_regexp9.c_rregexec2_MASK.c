
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** reliste; int ** relist; } ;
typedef int Rune ;
typedef int Resub ;
typedef int Reprog ;
typedef TYPE_1__ Reljunk ;
typedef int Relist ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int const*,int *,int *,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(const Reprog *VAR_1,
 Rune *VAR_2,
 Resub *VAR_3,
 int VAR_4,
 Reljunk *VAR_5
)
{
 Relist VAR_6[5*VAR_0], VAR_7[5*VAR_0];


 VAR_5->relist[0] = VAR_6;
 VAR_5->relist[1] = VAR_7;
 VAR_5->reliste[0] = VAR_6 + FUNC_0(VAR_6) - 2;
 VAR_5->reliste[1] = VAR_7 + FUNC_0(VAR_7) - 2;

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
