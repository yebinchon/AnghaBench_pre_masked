
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char guint32 ;
struct TYPE_3__ {scalar_t__ str; } ;
typedef TYPE_1__ GString ;



guint32 FUNC_0(GString *VAR_0) {
 unsigned char *VAR_1 = (unsigned char *)VAR_0->str;

 return VAR_1[0] | VAR_1[1] << 8 | VAR_1[2] << 16;
}
