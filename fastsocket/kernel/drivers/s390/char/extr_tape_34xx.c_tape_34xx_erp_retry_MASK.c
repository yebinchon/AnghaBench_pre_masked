
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {size_t op; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static inline int
FUNC_1(struct tape_request *VAR_2)
{
 FUNC_0(3, "xerp retr %s\n", VAR_1[VAR_2->op]);
 return VAR_0;
}
