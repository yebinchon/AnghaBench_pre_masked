
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain {int dom_flags; scalar_t__ dom_protohdrlen; int (* dom_init ) (struct domain*) ;int dom_protosw; int dom_mtx_s; int * dom_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct domain*) ;

__attribute__((used)) static void
FUNC_4(struct domain *VAR_11)
{
 FUNC_1(VAR_11->dom_flags & VAR_0);

 if (!(VAR_11->dom_flags & VAR_1)) {
  FUNC_2(&VAR_11->dom_mtx_s, VAR_6,
      VAR_5);
  VAR_11->dom_mtx = &VAR_11->dom_mtx_s;
  FUNC_0(&VAR_11->dom_protosw);
  if (VAR_11->dom_init != ((void*)0))
   VAR_11->dom_init(VAR_11);
  VAR_11->dom_flags |= VAR_1;
 }


 if (VAR_3 < 16)
  VAR_3 = 16;
 VAR_3 = VAR_9;

 if (VAR_11->dom_protohdrlen > VAR_4)
  VAR_4 = VAR_11->dom_protohdrlen;
 VAR_4 = VAR_10;

 VAR_8 = VAR_9 + VAR_10;
 VAR_7 = VAR_2 - VAR_8;
}
