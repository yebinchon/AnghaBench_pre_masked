
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int immediate; } ;
struct csr1212_keyval {int valid; TYPE_1__ value; } ;


 int VAR_0 ;
 struct csr1212_keyval* FUNC_0 (int ,int ) ;

struct csr1212_keyval *FUNC_1(u8 VAR_1, u32 VAR_2)
{
 struct csr1212_keyval *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->value.immediate = VAR_2;
 VAR_3->valid = 1;
 return VAR_3;
}
