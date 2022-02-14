
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {struct request* special; } ;
struct mapped_device {int * pending; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct mapped_device*) ;
 size_t FUNC_3 (struct request*) ;

__attribute__((used)) static struct request *FUNC_4(struct mapped_device *VAR_0, struct request *VAR_1)
{
 struct request *VAR_2;

 FUNC_1(VAR_1);
 VAR_2 = VAR_1->special;
 FUNC_0(&VAR_0->pending[FUNC_3(VAR_2)]);
 FUNC_2(VAR_0);

 return VAR_2;
}
