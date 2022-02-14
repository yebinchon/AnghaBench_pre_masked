
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_moptions {int imo_trace; int imo_debug; int imo_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip_moptions*) ;
 int VAR_2 ;
 int FUNC_1 (struct ip_moptions*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ,int ) ;
 struct ip_moptions* FUNC_3 (int ) ;
 struct ip_moptions* FUNC_4 (int ) ;

struct ip_moptions *
FUNC_5(int VAR_9)
{
 struct ip_moptions *VAR_10;

 VAR_10 = (VAR_9 == VAR_2) ? FUNC_3(VAR_8) : FUNC_4(VAR_8);
 if (VAR_10 != ((void*)0)) {
  FUNC_1(VAR_10, VAR_6);
  FUNC_2(&VAR_10->imo_lock, VAR_4, VAR_3);
  VAR_10->imo_debug |= VAR_0;
  if (VAR_5 != 0) {
   VAR_10->imo_debug |= VAR_1;
   VAR_10->imo_trace = VAR_7;
  }
  FUNC_0(VAR_10);
 }

 return (VAR_10);
}
