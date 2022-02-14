
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netbuf {int * ptr; int * p; } ;


 int VAR_0 ;
 struct netbuf* FUNC_0 (int ) ;

__attribute__((used)) static struct netbuf* FUNC_1()
{
 struct netbuf *VAR_1 = ((void*)0);

 VAR_1 = FUNC_0(VAR_0);
 if(VAR_1) {
  VAR_1->p = ((void*)0);
  VAR_1->ptr = ((void*)0);
 }
 return VAR_1;
}
