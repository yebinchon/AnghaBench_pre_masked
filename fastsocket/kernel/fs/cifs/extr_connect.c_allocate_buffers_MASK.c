
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TCP_Server_Info {char* bigbuf; char* smallbuf; scalar_t__ large_buf; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static bool
FUNC_6(struct TCP_Server_Info *VAR_0)
{
 if (!VAR_0->bigbuf) {
  VAR_0->bigbuf = (char *)FUNC_1();
  if (!VAR_0->bigbuf) {
   FUNC_0(1, "No memory for large SMB response");
   FUNC_5(3000);

   return 0;
  }
 } else if (VAR_0->large_buf) {

  FUNC_4(VAR_0->bigbuf, 0, FUNC_3());
 }

 if (!VAR_0->smallbuf) {
  VAR_0->smallbuf = (char *)FUNC_2();
  if (!VAR_0->smallbuf) {
   FUNC_0(1, "No memory for SMB response");
   FUNC_5(1000);

   return 0;
  }

 } else {

  FUNC_4(VAR_0->smallbuf, 0, FUNC_3());
 }

 return 1;
}
