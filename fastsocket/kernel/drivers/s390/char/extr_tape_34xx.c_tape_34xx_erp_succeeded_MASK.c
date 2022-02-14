
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {size_t op; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct tape_request*) ;
 int * VAR_0 ;

__attribute__((used)) static inline int
FUNC_2(struct tape_request *VAR_1)
{
 FUNC_0(3, "Error Recovery successful for %s\n",
    VAR_0[VAR_1->op]);
 return FUNC_1(VAR_1);
}
