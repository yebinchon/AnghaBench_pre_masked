
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mptsub {scalar_t__ mpts_refcnt; int mpts_flags; int * mpts_src; int * mpts_socket; int * mpts_mpte; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct mptsub*) ;

__attribute__((used)) static void
FUNC_3(struct mptsub *VAR_3)
{
 FUNC_1(VAR_3->mpts_refcnt == 0);
 FUNC_1(!(VAR_3->mpts_flags & VAR_0));
 FUNC_1(VAR_3->mpts_mpte == ((void*)0));
 FUNC_1(VAR_3->mpts_socket == ((void*)0));

 if (VAR_3->mpts_src != ((void*)0)) {
  FUNC_0(VAR_3->mpts_src, VAR_1);
  VAR_3->mpts_src = ((void*)0);
 }

 FUNC_2(VAR_2, VAR_3);
}
