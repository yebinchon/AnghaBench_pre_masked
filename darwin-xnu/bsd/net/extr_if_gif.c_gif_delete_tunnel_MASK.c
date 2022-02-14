
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gif_softc {int gif_ro; int * gif_pdst; int * gif_psrc; } ;
typedef int caddr_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct gif_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct gif_softc *VAR_1)
{
 FUNC_1(VAR_1);
 if (VAR_1->gif_psrc) {
  FUNC_0((caddr_t)VAR_1->gif_psrc, VAR_0);
  VAR_1->gif_psrc = ((void*)0);
 }
 if (VAR_1->gif_pdst) {
  FUNC_0((caddr_t)VAR_1->gif_pdst, VAR_0);
  VAR_1->gif_pdst = ((void*)0);
 }
 FUNC_2(&VAR_1->gif_ro);

}
