
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {char* nodeName; int nodePort; } ;
struct TYPE_4__ {TYPE_2__* placement; } ;
typedef TYPE_1__ ShardPlacementAccess ;
typedef TYPE_2__ ShardPlacement ;
typedef int MultiConnection ;
typedef int List ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*) ;
 char* FUNC_3 () ;
 int VAR_1 ;
 int * FUNC_4 (int,int *,char const*) ;
 int * FUNC_5 (int,char*,int,char const*,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char*) ;

MultiConnection *
FUNC_8(uint32 VAR_2, List *VAR_3,
        const char *VAR_4)
{
 char *VAR_5 = ((void*)0);
 MultiConnection *VAR_6 = ((void*)0);

 if (VAR_4 == ((void*)0))
 {
  VAR_4 = VAR_5 = FUNC_3();
 }

 VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
 {

  ShardPlacementAccess *VAR_7 =
   (ShardPlacementAccess *) FUNC_6(VAR_3);
  ShardPlacement *VAR_8 = VAR_7->placement;
  char *VAR_9 = VAR_8->nodeName;
  int VAR_10 = VAR_8->nodePort;





  VAR_6 = FUNC_5(VAR_2, VAR_9, VAR_10,
                 VAR_4, ((void*)0));

  if ((VAR_2 & VAR_0) &&
   FUNC_2(VAR_6, VAR_8))
  {
   VAR_6 = FUNC_5(VAR_2 |
                  VAR_1,
                  VAR_9, VAR_10,
                  VAR_4, ((void*)0));

   FUNC_0(!FUNC_2(VAR_6, VAR_8));
  }
 }


 FUNC_1(VAR_3, VAR_6);

 if (VAR_5)
 {
  FUNC_7(VAR_5);
 }

 return VAR_6;
}
