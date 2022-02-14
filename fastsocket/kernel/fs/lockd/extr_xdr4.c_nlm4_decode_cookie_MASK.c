
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_cookie {int len; int data; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int *,unsigned int) ;
 int FUNC_3 (int ,int ,int) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static __be32 *
FUNC_5(__be32 *VAR_1, struct nlm_cookie *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_4(*VAR_1++);

 if(VAR_3==0)
 {
  VAR_2->len=4;
  FUNC_3(VAR_2->data, 0, 4);
 }
 else if(VAR_3<=VAR_0)
 {
  VAR_2->len=VAR_3;
  FUNC_2(VAR_2->data, VAR_1, VAR_3);
  VAR_1+=FUNC_0(VAR_3);
 }
 else
 {
  FUNC_1("lockd: bad cookie size %d (only cookies under "
   "%d bytes are supported.)\n",
    VAR_3, VAR_0);
  return ((void*)0);
 }
 return VAR_1;
}
