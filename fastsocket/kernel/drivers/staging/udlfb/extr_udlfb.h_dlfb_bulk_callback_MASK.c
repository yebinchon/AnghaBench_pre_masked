
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {struct dlfb_data* context; } ;
struct dlfb_data {int done; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_0)
{
 struct dlfb_data *VAR_1 = VAR_0->context;
 FUNC_0(&VAR_1->done);
}
