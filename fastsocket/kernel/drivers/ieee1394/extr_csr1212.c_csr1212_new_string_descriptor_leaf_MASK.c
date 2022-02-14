
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__* data; } ;
struct TYPE_4__ {TYPE_1__ leaf; } ;
struct csr1212_keyval {TYPE_2__ value; } ;


 scalar_t__* FUNC_0 (struct csr1212_keyval*) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (char const*) ;
 struct csr1212_keyval* FUNC_3 (int ,int ,int *,scalar_t__) ;
 int FUNC_4 (scalar_t__*,char const*,size_t) ;
 scalar_t__ FUNC_5 (size_t) ;
 size_t FUNC_6 (char const*) ;

struct csr1212_keyval *FUNC_7(const char *VAR_1)
{
 struct csr1212_keyval *VAR_2;
 u32 *VAR_3;
 size_t VAR_4, VAR_5;

 if (!VAR_1 || !*VAR_1 || FUNC_2(VAR_1))
  return ((void*)0);

 VAR_4 = FUNC_6(VAR_1);
 VAR_5 = FUNC_1(VAR_4);
 VAR_2 = FUNC_3(0, 0, ((void*)0), FUNC_5(VAR_5) +
          VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->value.leaf.data[1] = 0;
 VAR_3 = FUNC_0(VAR_2);
 VAR_3[VAR_5 - 1] = 0;
 FUNC_4(VAR_3, VAR_1, VAR_4);

 return VAR_2;
}
