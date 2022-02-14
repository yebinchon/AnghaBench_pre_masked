
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct nd_ifinfo {int lock; int const* randomid; int * randomseed1; int randomseed0; scalar_t__ initialized; } ;
struct ifnet {int dummy; } ;
typedef int nullbuf ;


 struct nd_ifinfo* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int const*,int *,int) ;
 int FUNC_3 (int const*,int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int *,int const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct ifnet *VAR_0, u_int8_t *VAR_1, const u_int8_t *VAR_2,
    int VAR_3)
{
 u_int8_t VAR_4[8];
 struct nd_ifinfo *VAR_5 = FUNC_0(VAR_0);

 FUNC_1(VAR_5 != ((void*)0) && VAR_5->initialized);
 FUNC_6(&VAR_5->lock);
 FUNC_4(VAR_4, sizeof (VAR_4));
 if (FUNC_2(VAR_5->randomid, VAR_4, sizeof (VAR_4)) == 0) {

  VAR_3 = 1;
 }

 if (VAR_3) {
  FUNC_3(VAR_2, VAR_5->randomseed1, sizeof (VAR_5->randomseed1));


  (void) FUNC_5(VAR_5->randomseed0, VAR_5->randomseed1,
      VAR_5->randomid);
 }

 FUNC_3(VAR_5->randomid, VAR_1, 8);
 FUNC_7(&VAR_5->lock);
}
