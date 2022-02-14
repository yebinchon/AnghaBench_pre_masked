
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* ifnet_t ;
typedef int errno_t ;
struct TYPE_8__ {int if_flags; scalar_t__ if_pcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*,int ,char*,char*) ;
 int FUNC_5 (TYPE_1__*) ;

errno_t
FUNC_6(
 ifnet_t VAR_4,
 int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_3(VAR_4);
 VAR_7 = VAR_4->if_flags;
 VAR_4->if_pcount += VAR_5 ? 1 : -1;

 if (VAR_4->if_pcount > 0)
  VAR_4->if_flags |= VAR_0;
 else
  VAR_4->if_flags &= ~VAR_0;

 VAR_8 = VAR_4->if_flags;
 FUNC_2(VAR_4);

 if (VAR_8 != VAR_7 && (VAR_8 & VAR_1) != 0) {
  VAR_6 = FUNC_1(VAR_4, 0, VAR_3, ((void*)0));
  if (VAR_6 == 0) {
   FUNC_5(VAR_4);
  } else {
   FUNC_3(VAR_4);

   VAR_4->if_pcount -= VAR_5 ? 1 : -1;
   if (VAR_4->if_pcount > 0)
       VAR_4->if_flags |= VAR_0;
   else
       VAR_4->if_flags &= ~VAR_0;
   FUNC_2(VAR_4);
  }
 }

 if (VAR_8 != VAR_7) {
  FUNC_4(VAR_2, "%s: promiscuous mode %s%s\n",
      FUNC_0(VAR_4),
      (VAR_8 & VAR_0) != 0 ? "enable" : "disable",
      VAR_6 != 0 ? " failed" : " succeeded");
 }
 return (VAR_6);
}
