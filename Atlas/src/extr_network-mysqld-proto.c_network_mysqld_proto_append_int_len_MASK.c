
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guint64 ;
typedef scalar_t__ gsize ;
typedef int GString ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(GString *VAR_0, guint64 VAR_1, gsize VAR_2) {
 gsize VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_0(VAR_0, VAR_1 & 0xff);
  VAR_1 >>= 8;
 }

 return 0;
}
