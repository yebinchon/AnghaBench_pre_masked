
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_defrouter {int nddr_trace; int nddr_debug; int nddr_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nd_defrouter*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct nd_defrouter* FUNC_2 (int ) ;
 struct nd_defrouter* FUNC_3 (int ) ;

__attribute__((used)) static struct nd_defrouter *
FUNC_4(int VAR_9)
{
 struct nd_defrouter *VAR_10;

 VAR_10 = (VAR_9 == VAR_2) ? FUNC_2(VAR_8) : FUNC_3(VAR_8);
 if (VAR_10 != ((void*)0)) {
  FUNC_0(VAR_10, VAR_6);
  FUNC_1(&VAR_10->nddr_lock, VAR_4, VAR_3);
  VAR_10->nddr_debug |= VAR_0;
  if (VAR_5 != 0) {
   VAR_10->nddr_debug |= VAR_1;
   VAR_10->nddr_trace = VAR_7;
  }
 }
 return (VAR_10);
}
