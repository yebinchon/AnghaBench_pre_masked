
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network_mysqld_type_t ;
typedef int guint8 ;
typedef int GString ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,double*) ;

__attribute__((used)) static int FUNC_2(GString *VAR_0, network_mysqld_type_t *VAR_1) {
 union {
  double d;
  guint8 d_char_shadow[sizeof(double)];
 } VAR_2;
 int VAR_3 = 0;
 unsigned long VAR_4;

 VAR_3 = VAR_3 || FUNC_1(VAR_1, &VAR_2.d);
 if (0 != VAR_3) return -1;
 for (VAR_4 = 0; 0 == VAR_3 && VAR_4 < sizeof(double); VAR_4++) {
  VAR_3 = VAR_3 || FUNC_0(VAR_0, VAR_2.d_char_shadow[VAR_4]);
 }


 return VAR_3 ? -1 : 0;
}
