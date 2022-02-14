
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmultiaddr {int ifma_trace; int ifma_debug; int ifma_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifmultiaddr*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int ,int ) ;
 struct ifmultiaddr* FUNC_2 (int ) ;
 struct ifmultiaddr* FUNC_3 (int ) ;

__attribute__((used)) static struct ifmultiaddr *
FUNC_4(int VAR_9)
{
 struct ifmultiaddr *VAR_10;

 VAR_10 = (VAR_9 == VAR_2) ? FUNC_2(VAR_8) :
     FUNC_3(VAR_8);

 if (VAR_10 != ((void*)0)) {
  FUNC_0(VAR_10, VAR_6);
  FUNC_1(&VAR_10->ifma_lock, VAR_4, VAR_3);
  VAR_10->ifma_debug |= VAR_0;
  if (VAR_5 != 0) {
   VAR_10->ifma_debug |= VAR_1;
   VAR_10->ifma_trace = VAR_7;
  }
 }
 return (VAR_10);
}
