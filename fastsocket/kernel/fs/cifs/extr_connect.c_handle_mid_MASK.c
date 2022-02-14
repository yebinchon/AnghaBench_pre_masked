
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mid_q_entry {int multiRsp; char* resp_buf; int multiEnd; int large_buf; } ;
struct TCP_Server_Info {int large_buf; int * smallbuf; int * bigbuf; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 void FUNC_3 (struct mid_q_entry*,int) ;

__attribute__((used)) static void
FUNC_4(struct mid_q_entry *VAR_0, struct TCP_Server_Info *VAR_1,
    char *VAR_2, int VAR_3)
{
 if (VAR_3 == 0 && FUNC_1(VAR_2) > 0) {
  VAR_0->multiRsp = 1;
  if (VAR_0->resp_buf) {

   VAR_3 = FUNC_2(VAR_2, VAR_0->resp_buf);
   if (VAR_3 > 0)
    return;


   VAR_0->multiEnd = 1;
   return FUNC_3(VAR_0, VAR_3);
  }
  if (!VAR_1->large_buf) {

   FUNC_0(1, "1st trans2 resp needs bigbuf");
  } else {

   VAR_0->resp_buf = VAR_2;
   VAR_0->large_buf = 1;
   VAR_1->bigbuf = ((void*)0);
  }
  return;
 }
 VAR_0->resp_buf = VAR_2;
 VAR_0->large_buf = VAR_1->large_buf;

 if (!VAR_0->multiRsp) {

  if (VAR_1->large_buf)
   VAR_1->bigbuf = ((void*)0);
  else
   VAR_1->smallbuf = ((void*)0);
 }
 FUNC_3(VAR_0, VAR_3);
}
