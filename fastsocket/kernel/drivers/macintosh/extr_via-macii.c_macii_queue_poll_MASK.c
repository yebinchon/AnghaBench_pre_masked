
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adb_request {struct adb_request* next; scalar_t__ reply_len; scalar_t__ complete; scalar_t__ sent; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adb_request*,int *,int ,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct adb_request* VAR_3 ;
 int FUNC_3 (int) ;
 struct adb_request* VAR_4 ;
 int FUNC_4 (struct adb_request*) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_5;
 int VAR_6;
 static struct adb_request VAR_7;

 if (!VAR_1) return;

 VAR_5 = (1 << (((VAR_2 & 0xF0) >> 4) + 1)) - 1;
 if (VAR_1 & ~VAR_5)
  VAR_6 = FUNC_3(VAR_1 & ~VAR_5) - 1;
 else
  VAR_6 = FUNC_3(VAR_1) - 1;

 FUNC_1(FUNC_4(&VAR_7));

 FUNC_2(&VAR_7, ((void*)0), VAR_0, 1,
             FUNC_0(VAR_6, 0));

 VAR_7.sent = 0;
 VAR_7.complete = 0;
 VAR_7.reply_len = 0;
 VAR_7.next = VAR_3;

 if (VAR_3 != ((void*)0)) {
  VAR_3 = &VAR_7;
 } else {
  VAR_3 = &VAR_7;
  VAR_4 = &VAR_7;
 }
}
