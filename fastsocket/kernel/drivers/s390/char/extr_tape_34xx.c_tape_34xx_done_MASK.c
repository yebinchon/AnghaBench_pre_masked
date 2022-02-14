
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {size_t op; int device; } ;


 int FUNC_0 (int,char*,int ) ;
 int VAR_0 ;






 int FUNC_1 (int ,int ) ;
 int * VAR_1 ;

__attribute__((used)) static inline int
FUNC_2(struct tape_request *VAR_2)
{
 FUNC_0(6, "%s done\n", VAR_1[VAR_2->op]);

 switch (VAR_2->op) {
  case 132:
  case 131:
  case 129:
  case 128:
  case 133:
  case 130:
   FUNC_1(VAR_2->device, 0);
   break;
  default:
   ;
 }
 return VAR_0;
}
