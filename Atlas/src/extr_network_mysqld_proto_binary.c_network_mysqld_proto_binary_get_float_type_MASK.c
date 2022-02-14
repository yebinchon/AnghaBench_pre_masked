
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network_packet ;
typedef int network_mysqld_type_t ;
typedef int guint8 ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,double) ;

__attribute__((used)) static int FUNC_2(network_packet *VAR_0, network_mysqld_type_t *VAR_1) {
 int VAR_2 = 0;
 union {
  float f;
  guint8 f_char_shadow[sizeof(float)];
 } VAR_3;
 unsigned long VAR_4;
 double VAR_5;
 for (VAR_4 = 0; 0 == VAR_2 && VAR_4 < sizeof(float); VAR_4++) {
  VAR_2 = VAR_2 || FUNC_0(VAR_0, &(VAR_3.f_char_shadow[VAR_4]));
 }


 VAR_5 = VAR_3.f;

 VAR_2 = VAR_2 || FUNC_1(VAR_1, VAR_5);

 return VAR_2 ? -1 : 0;
}
