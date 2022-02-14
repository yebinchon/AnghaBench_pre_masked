
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st5481_d_out {int urb; } ;
struct st5481_adapter {struct st5481_d_out d_out; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct st5481_adapter *VAR_0)
{
 struct st5481_d_out *VAR_1 = &VAR_0->d_out;

 FUNC_0(2,"");

 FUNC_1(VAR_1->urb);
}
