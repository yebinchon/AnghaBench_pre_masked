
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; } ;
typedef TYPE_1__ network_mysqld_type_t ;
typedef void* guint8 ;
typedef void* guint64 ;
typedef void* guint32 ;
typedef void* guint16 ;
typedef int GString ;







 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int *,void*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,void**,int *) ;

__attribute__((used)) static int FUNC_5(GString *VAR_0, network_mysqld_type_t *VAR_1) {
 guint64 VAR_2;
 guint8 VAR_3;
 guint16 VAR_4;
 guint32 VAR_5;
 int VAR_6 = 0;

 VAR_6 = VAR_6 || FUNC_4(VAR_1, &VAR_2, ((void*)0));
 if (0 != VAR_6) return -1;

 switch (VAR_1->type) {
 case 128:

  VAR_3 = VAR_2;

  VAR_6 = VAR_6 || FUNC_3(VAR_0, VAR_3);
  break;
 case 129:
  VAR_4 = VAR_2;

  VAR_6 = VAR_6 || FUNC_0(VAR_0, VAR_4);
  break;
 case 131:
 case 132:
  VAR_5 = VAR_2;

  VAR_6 = VAR_6 || FUNC_1(VAR_0, VAR_5);
  break;
 case 130:
  VAR_6 = VAR_6 || FUNC_2(VAR_0, VAR_2);
  break;
 default:
  VAR_6 = -1;
  break;
 }

 return VAR_6 ? -1 : 0;
}
