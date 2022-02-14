
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int * data; } ;
struct TYPE_4__ {TYPE_1__ leaf; } ;
struct csr1212_keyval {TYPE_2__ value; } ;


 int FUNC_0 (struct csr1212_keyval*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct csr1212_keyval*,int ) ;
 int FUNC_2 (struct csr1212_keyval*,int ) ;
 int VAR_1 ;
 struct csr1212_keyval* FUNC_3 (int ,int *,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,void const*,size_t) ;

__attribute__((used)) static struct csr1212_keyval *
FUNC_6(u8 VAR_2, u32 VAR_3,
       const void *VAR_4, size_t VAR_5)
{
 struct csr1212_keyval *VAR_6;

 VAR_6 = FUNC_3(VAR_1, ((void*)0),
         VAR_5 + VAR_0);
 if (!VAR_6)
  return ((void*)0);

 FUNC_4(VAR_6->value.leaf.data[0]);
 FUNC_2(VAR_6, VAR_2);
 FUNC_1(VAR_6, VAR_3);

 if (VAR_4)
  FUNC_5(FUNC_0(VAR_6), VAR_4, VAR_5);

 return VAR_6;
}
