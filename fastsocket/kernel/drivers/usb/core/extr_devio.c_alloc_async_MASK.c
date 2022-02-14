
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async {int urb; } ;


 int VAR_0 ;
 int FUNC_0 (struct async*) ;
 struct async* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static struct async *FUNC_3(unsigned int VAR_1)
{
 struct async *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct async), VAR_0);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->urb = FUNC_2(VAR_1, VAR_0);
 if (!VAR_2->urb) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }
 return VAR_2;
}
