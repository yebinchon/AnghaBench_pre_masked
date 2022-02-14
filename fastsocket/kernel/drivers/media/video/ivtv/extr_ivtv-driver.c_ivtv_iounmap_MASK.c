
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int * enc_mem; int * dec_mem; scalar_t__ has_cx23415; int * reg_mem; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ivtv *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;


 if (VAR_0->reg_mem != ((void*)0)) {
  FUNC_0("releasing reg_mem\n");
  FUNC_1(VAR_0->reg_mem);
  VAR_0->reg_mem = ((void*)0);
 }

 if (VAR_0->has_cx23415 && VAR_0->dec_mem != ((void*)0)) {
  FUNC_0("releasing dec_mem\n");
  FUNC_1(VAR_0->dec_mem);
 }
 VAR_0->dec_mem = ((void*)0);


 if (VAR_0->enc_mem != ((void*)0)) {
  FUNC_0("releasing enc_mem\n");
  FUNC_1(VAR_0->enc_mem);
  VAR_0->enc_mem = ((void*)0);
 }
}
