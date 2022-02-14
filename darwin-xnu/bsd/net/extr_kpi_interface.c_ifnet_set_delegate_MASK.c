
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef TYPE_1__* ifnet_t ;
typedef int errno_t ;
struct TYPE_12__ {int type; int family; int subfamily; int expensive; TYPE_1__* ifp; } ;
struct TYPE_13__ {char* if_xname; int if_type; int if_family; int if_subfamily; int if_eflags; TYPE_11__ if_delegated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_11__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,char*,char*,...) ;

errno_t
FUNC_9(ifnet_t VAR_7, ifnet_t VAR_8)
{
 ifnet_t VAR_9 = ((void*)0);

 if (VAR_7 == ((void*)0))
  return (VAR_0);
 else if (!FUNC_3(VAR_7, 1))
  return (VAR_1);

 FUNC_5(VAR_7);
 VAR_9 = VAR_7->if_delegated.ifp;
 if (VAR_9 != ((void*)0) && VAR_9 == VAR_8) {

  FUNC_4(VAR_7);
  goto done;
 }

 ifnet_t VAR_10 = VAR_8;
 while (VAR_10 != ((void*)0)) {
  if (VAR_10 == VAR_7) {
   FUNC_8("%s: delegating to %s would cause a loop\n",
       VAR_7->if_xname, VAR_8->if_xname);
   FUNC_4(VAR_7);
   goto done;
  }
  VAR_10 = VAR_10->if_delegated.ifp;
 }
 FUNC_0(&VAR_7->if_delegated, sizeof (VAR_7->if_delegated));
 if (VAR_8 != ((void*)0) && VAR_7 != VAR_8) {
  VAR_7->if_delegated.ifp = VAR_8;
  FUNC_6(VAR_8);
  VAR_7->if_delegated.type = VAR_8->if_type;
  VAR_7->if_delegated.family = VAR_8->if_family;
  VAR_7->if_delegated.subfamily = VAR_8->if_subfamily;
  VAR_7->if_delegated.expensive =
      VAR_8->if_eflags & VAR_4 ? 1 : 0;




  VAR_7->if_eflags &= ~(VAR_3|VAR_2);
  VAR_7->if_eflags |= (VAR_8->if_eflags &
      (VAR_3|VAR_2));

  FUNC_8("%s: is now delegating %s (type 0x%x, family %u, "
      "sub-family %u)\n", VAR_7->if_xname, VAR_8->if_xname,
      VAR_8->if_type, VAR_8->if_family,
      VAR_8->if_subfamily);
 }

 FUNC_4(VAR_7);

 if (VAR_9 != ((void*)0)) {
  if (VAR_9 != VAR_8) {
   FUNC_8("%s: is no longer delegating %s\n",
       VAR_7->if_xname, VAR_9->if_xname);
  }
  FUNC_7(VAR_9);
 }


 FUNC_1(VAR_7, VAR_6, VAR_5, ((void*)0), 0);

done:

 FUNC_2(VAR_7);

 return (0);
}
