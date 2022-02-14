
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int guint32 ;
typedef int guint ;
typedef unsigned char* gconstpointer ;


 int FUNC_0 (unsigned char) ;

guint FUNC_1(gconstpointer VAR_0) {

 const unsigned char *VAR_1 = VAR_0;
 unsigned char VAR_2;
 guint32 VAR_3 = 5381;

 while ((VAR_2 = *VAR_1++)) {
  VAR_3 = ((VAR_3 << 5) + VAR_3) + FUNC_0(VAR_2);
 }

 return VAR_3;
}
