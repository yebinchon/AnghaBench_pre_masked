
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** reliste; int ** relist; } ;
typedef int Resub ;
typedef int Reprog ;
typedef TYPE_1__ Reljunk ;
typedef int Relist ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int * VAR_1 ;
 int FUNC_2 (int const*,char*,int *,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(const Reprog *VAR_2,
 char *VAR_3,
 Resub *VAR_4,
 int VAR_5,
 Reljunk *VAR_6
)
{
 int VAR_7;
 Relist *VAR_8, *VAR_9;


 VAR_8 = FUNC_1(VAR_0*sizeof(Relist));
 if(VAR_8 == VAR_1)
  return -1;
 VAR_9 = FUNC_1(VAR_0*sizeof(Relist));
 if(VAR_9 == VAR_1){
  FUNC_0(VAR_9);
  return -1;
 }
 VAR_6->relist[0] = VAR_8;
 VAR_6->relist[1] = VAR_9;
 VAR_6->reliste[0] = VAR_8 + VAR_0 - 2;
 VAR_6->reliste[1] = VAR_9 + VAR_0 - 2;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_8);
 FUNC_0(VAR_9);
 return VAR_7;
}
