
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_seq {int dummy; } ;
struct fc_frame {int dummy; } ;
struct fc_exch {int seq; } ;




 int FUNC_0 (struct fc_exch*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fc_exch*) ;
 int FUNC_5 (struct fc_frame*) ;
 unsigned int FUNC_6 (struct fc_frame*) ;

__attribute__((used)) static void FUNC_7(struct fc_seq *VAR_2, struct fc_frame *VAR_3, void *VAR_4)
{
 struct fc_exch *VAR_5 = VAR_4;
 unsigned int VAR_6;

 if (FUNC_1(VAR_3)) {
  int VAR_7 = FUNC_2(VAR_3);

  if (VAR_7 == -VAR_0 || VAR_7 == -VAR_1)
   goto cleanup;
  FUNC_0(VAR_5, "Cannot process RRQ, "
       "frame error %d\n", VAR_7);
  return;
 }

 VAR_6 = FUNC_6(VAR_3);
 FUNC_5(VAR_3);

 switch (VAR_6) {
 case 128:
  FUNC_0(VAR_5, "LS_RJT for RRQ");

 case 129:
  goto cleanup;
 default:
  FUNC_0(VAR_5, "unexpected response op %x "
       "for RRQ", VAR_6);
  return;
 }

cleanup:
 FUNC_3(&VAR_5->seq);

 FUNC_4(VAR_5);
}
