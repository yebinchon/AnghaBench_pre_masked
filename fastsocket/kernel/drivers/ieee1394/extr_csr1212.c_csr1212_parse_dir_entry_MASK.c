
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct csr1212_keyval {struct csr1212_keyval* next; struct csr1212_keyval* prev; scalar_t__ offset; int valid; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

 int VAR_0 ;

 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct csr1212_keyval*,struct csr1212_keyval*,int) ;
 struct csr1212_keyval* FUNC_4 (struct csr1212_keyval*,scalar_t__) ;
 struct csr1212_keyval* FUNC_5 (int ,int ) ;
 struct csr1212_keyval* FUNC_6 (int ) ;
 struct csr1212_keyval* FUNC_7 (int ,int ) ;
 struct csr1212_keyval* FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (struct csr1212_keyval*) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct csr1212_keyval *VAR_4, u32 VAR_5, u32 VAR_6)
{
 int VAR_7 = VAR_1;
 struct csr1212_keyval *VAR_8 = ((void*)0);
 u32 VAR_9;
 bool VAR_10 = 1;

 switch (FUNC_1(VAR_5)) {
 case 128:
  VAR_8 = FUNC_7(FUNC_0(VAR_5),
       FUNC_2(VAR_5));
  if (!VAR_8) {
   VAR_7 = -VAR_3;
   goto out;
  }

  VAR_10 = 0;
  break;

 case 129:
  VAR_8 = FUNC_5(FUNC_0(VAR_5),
        FUNC_2(VAR_5));
  if (!VAR_8) {
   VAR_7 = -VAR_3;
   goto out;
  }

  VAR_10 = 0;
  break;

 default:

  VAR_9 = FUNC_10(FUNC_2(VAR_5)) + VAR_6;
  if (VAR_9 == VAR_6) {



   VAR_7 = -VAR_2;
   goto out;
  }

  VAR_8 = FUNC_4(VAR_4, VAR_9);

  if (VAR_8)
   break;

  if (FUNC_1(VAR_5) == VAR_0)
   VAR_8 = FUNC_6(FUNC_0(VAR_5));
  else
   VAR_8 = FUNC_8(FUNC_0(VAR_5), ((void*)0), 0);

  if (!VAR_8) {
   VAR_7 = -VAR_3;
   goto out;
  }

  VAR_10 = 0;

  VAR_8->valid = 0;
  VAR_8->offset = VAR_9;

  VAR_8->prev = VAR_4;
  VAR_8->next = VAR_4->next;
  VAR_4->next->prev = VAR_8;
  VAR_4->next = VAR_8;
 }
 VAR_7 = FUNC_3(VAR_4, VAR_8, VAR_10);
out:
 if (VAR_7 != VAR_1 && VAR_8 != ((void*)0))
  FUNC_9(VAR_8);
 return VAR_7;
}
