
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int dummy; } ;
struct ca_msg {int length; int msg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct firedtv*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct firedtv *VAR_1, void *VAR_2)
{
 struct ca_msg *VAR_3 = VAR_2;

 return FUNC_0(VAR_1, VAR_3->msg, &VAR_3->length) ? -VAR_0 : 0;
}
