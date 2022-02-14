
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvesafb_ktask {struct completion* done; } ;
struct completion {int dummy; } ;


 int FUNC_0 (struct uvesafb_ktask*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct uvesafb_ktask *VAR_0)
{
 struct completion *VAR_1 = VAR_0->done;

 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->done = VAR_1;
}
