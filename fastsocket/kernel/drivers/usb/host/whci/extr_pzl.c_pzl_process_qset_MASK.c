
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct whc_qtd {int status; } ;
struct whc_qset {scalar_t__ ntds; int td_start; scalar_t__ remove; struct whc_qtd* qtd; } ;
struct whc {int dummy; } ;
typedef enum whc_update { ____Placeholder_whc_update } whc_update ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct whc*,struct whc_qset*,struct whc_qtd*) ;
 int FUNC_2 (struct whc*,struct whc_qset*,struct whc_qtd*) ;
 int FUNC_3 (struct whc*,struct whc_qset*) ;
 int FUNC_4 (struct whc*,struct whc_qset*) ;

__attribute__((used)) static enum whc_update FUNC_5(struct whc *VAR_4, struct whc_qset *VAR_5)
{
 enum whc_update VAR_6 = 0;
 uint32_t VAR_7 = 0;

 while (VAR_5->ntds) {
  struct whc_qtd *VAR_8;
  int VAR_9;

  VAR_9 = VAR_5->td_start;
  VAR_8 = &VAR_5->qtd[VAR_5->td_start];
  VAR_7 = FUNC_0(VAR_8->status);




  if (VAR_7 & VAR_0)
   break;

  if (VAR_7 & VAR_1) {

   FUNC_1(VAR_4, VAR_5, VAR_8);



   VAR_6 |= VAR_3;
   goto done;
  }


  FUNC_2(VAR_4, VAR_5, VAR_8);
 }

 if (!VAR_5->remove)
  VAR_6 |= FUNC_4(VAR_4, VAR_5);

done:



 if (VAR_5->remove && VAR_5->ntds == 0) {
  FUNC_3(VAR_4, VAR_5);
  VAR_6 |= VAR_2;
 }

 return VAR_6;
}
