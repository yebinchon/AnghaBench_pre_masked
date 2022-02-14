
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct csr1212_keyval {struct csr1212_keyval* associate; TYPE_1__ key; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct csr1212_keyval*) ;
 int FUNC_2 (struct csr1212_keyval*) ;

void FUNC_3(struct csr1212_keyval *VAR_5,
         struct csr1212_keyval *VAR_6)
{
 FUNC_0(!VAR_5 || !VAR_6 || VAR_5->key.id == VAR_1 ||
        (VAR_6->key.id != VAR_1 &&
  VAR_6->key.id != VAR_0 &&
  VAR_6->key.id != VAR_3 &&
  VAR_6->key.id != VAR_2 &&
  VAR_6->key.id < 0x30) ||
        (VAR_5->key.id == VAR_4 &&
  VAR_6->key.id != VAR_3) ||
        (VAR_5->key.id == VAR_3 &&
  VAR_6->key.id != VAR_2) ||
        (VAR_6->key.id == VAR_3 &&
  VAR_5->key.id != VAR_4) ||
        (VAR_6->key.id == VAR_2 &&
  VAR_5->key.id != VAR_3));

 if (VAR_5->associate)
  FUNC_2(VAR_5->associate);

 FUNC_1(VAR_6);
 VAR_5->associate = VAR_6;
}
