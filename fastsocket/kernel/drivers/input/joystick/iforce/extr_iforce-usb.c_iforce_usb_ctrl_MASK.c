
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int actual_length; scalar_t__ status; struct iforce* context; } ;
struct iforce {int ecmd; int wait; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_0)
{
 struct iforce *VAR_1 = VAR_0->context;
 if (VAR_0->status) return;
 VAR_1->ecmd = 0xff00 | VAR_0->actual_length;
 FUNC_0(&VAR_1->wait);
}
