
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
  float f;
  guint8 f_char_shadow[sizeof(float)];
 } VAR_2;
 double VAR_3;
 int VAR_4 = 0;
 unsigned long VAR_5;

 VAR_4 = VAR_4 || FUNC_1(VAR_1, &VAR_3);
 if (0 != VAR_4) return -1;

 VAR_2.f = VAR_3;
 for (VAR_5 = 0; 0 == VAR_4 && VAR_5 < sizeof(float); VAR_5++) {
  VAR_4 = VAR_4 || FUNC_0(VAR_0, VAR_2.f_char_shadow[VAR_5]);
 }


 return VAR_4 ? -1 : 0;
}
