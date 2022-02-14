
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int guchar ;
typedef int gsize ;
struct TYPE_4__ {int len; scalar_t__ str; int allocated_len; } ;
typedef TYPE_1__ GString ;
typedef int GChecksum ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

int FUNC_6(GString *VAR_1, const char *VAR_2, gsize VAR_3) {
 GChecksum *VAR_4;


 VAR_4 = FUNC_2(VAR_0);

 FUNC_4(VAR_4, (guchar *)VAR_2, VAR_3);

 FUNC_5(VAR_1, FUNC_3(VAR_0));
 VAR_1->len = VAR_1->allocated_len;
 FUNC_1(VAR_4, (guchar *)VAR_1->str, &(VAR_1->len));

 FUNC_0(VAR_4);

 return 0;
}
