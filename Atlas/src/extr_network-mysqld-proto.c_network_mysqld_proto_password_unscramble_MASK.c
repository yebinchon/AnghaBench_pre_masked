
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int guchar ;
typedef int gsize ;
struct TYPE_4__ {int* str; int len; int allocated_len; } ;
typedef TYPE_1__ GString ;
typedef int GChecksum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;

int FUNC_7(
  GString *VAR_2,
  const char *VAR_3, gsize VAR_4,
  const char *VAR_5, gsize VAR_6,
  const char *VAR_7, gsize VAR_8) {
 int VAR_9;
 GChecksum *VAR_10;

 FUNC_5(((void*)0) != VAR_5, VAR_0);
 FUNC_5(20 == VAR_6, VAR_0);
 FUNC_5(((void*)0) != VAR_3, VAR_0);
 FUNC_5(20 == VAR_4, VAR_0);
 FUNC_5(((void*)0) != VAR_7, VAR_0);
 FUNC_5(20 == VAR_8, VAR_0);
 VAR_10 = FUNC_2(VAR_1);
 FUNC_4(VAR_10, (guchar *)VAR_3, VAR_4);
 FUNC_4(VAR_10, (guchar *)VAR_7, VAR_8);

 FUNC_6(VAR_2, FUNC_3(VAR_1));
 VAR_2->len = VAR_2->allocated_len;
 FUNC_1(VAR_10, (guchar *)VAR_2->str, &(VAR_2->len));

 FUNC_0(VAR_10);


 for (VAR_9 = 0; VAR_9 < 20; VAR_9++) {
  VAR_2->str[VAR_9] = (guchar)VAR_5[VAR_9] ^ (guchar)VAR_2->str[VAR_9];
 }

 return 0;
}
