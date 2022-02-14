
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv {int dec_mem; int has_cx23415; int enc_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,struct ivtv*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ivtv *VAR_4)
{
 FUNC_0("Loading encoder image\n");
 if (FUNC_2(VAR_1,
     VAR_4->enc_mem, VAR_4, VAR_3) != VAR_3) {
  FUNC_1("failed loading encoder firmware\n");
  return -3;
 }
 if (!VAR_4->has_cx23415)
  return 0;

 FUNC_0("Loading decoder image\n");
 if (FUNC_2(VAR_0,
     VAR_4->dec_mem, VAR_4, VAR_2) != VAR_2) {
  FUNC_1("failed loading decoder firmware\n");
  return -1;
 }
 return 0;
}
