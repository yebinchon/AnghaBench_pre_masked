
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int dummy; } ;
struct ca_msg {int* msg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct firedtv*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct firedtv *VAR_1, void *VAR_2)
{
 struct ca_msg *VAR_3 = VAR_2;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = 4;
 if (VAR_3->msg[3] & 0x80) {
  VAR_5 = 0;
  for (VAR_6 = 0; VAR_6 < (VAR_3->msg[3] & 0x7f); VAR_6++)
   VAR_5 = (VAR_5 << 8) + VAR_3->msg[VAR_4++];
 } else {
  VAR_5 = VAR_3->msg[3];
 }

 return FUNC_0(VAR_1, &VAR_3->msg[VAR_4], VAR_5) ? -VAR_0 : 0;
}
