
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_request {int list; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct pending_request* FUNC_1 (int,int ) ;

__attribute__((used)) static struct pending_request *FUNC_2(gfp_t VAR_0)
{
 struct pending_request *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (VAR_1)
  FUNC_0(&VAR_1->list);

 return VAR_1;
}
