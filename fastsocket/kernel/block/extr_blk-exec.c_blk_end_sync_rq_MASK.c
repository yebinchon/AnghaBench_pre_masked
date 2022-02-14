
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int q; struct completion* end_io_data; } ;
struct completion {int dummy; } ;


 int FUNC_0 (int ,struct request*) ;
 int FUNC_1 (struct completion*) ;

__attribute__((used)) static void FUNC_2(struct request *VAR_0, int VAR_1)
{
 struct completion *VAR_2 = VAR_0->end_io_data;

 VAR_0->end_io_data = ((void*)0);
 FUNC_0(VAR_0->q, VAR_0);





 FUNC_1(VAR_2);
}
