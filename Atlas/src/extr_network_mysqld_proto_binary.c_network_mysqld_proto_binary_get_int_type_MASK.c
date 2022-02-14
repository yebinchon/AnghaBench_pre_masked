
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int network_packet ;
struct TYPE_4__ {int type; int is_unsigned; } ;
typedef TYPE_1__ network_mysqld_type_t ;
typedef int guint8 ;
typedef int guint64 ;
typedef int guint32 ;
typedef int guint16 ;







 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_5(network_packet *VAR_0, network_mysqld_type_t *VAR_1) {
 int VAR_2 = 0;
 guint8 VAR_3;
 guint16 VAR_4;
 guint32 VAR_5;
 guint64 VAR_6;

 switch (VAR_1->type) {
 case 128:
  VAR_2 = VAR_2 || FUNC_3(VAR_0, &VAR_3);
  VAR_2 = VAR_2 || FUNC_4(VAR_1, (guint64)VAR_3, VAR_1->is_unsigned);
  break;
 case 129:
  VAR_2 = VAR_2 || FUNC_0(VAR_0, &VAR_4);
  VAR_2 = VAR_2 || FUNC_4(VAR_1, (guint64)VAR_4, VAR_1->is_unsigned);
  break;
 case 131:
 case 132:
  VAR_2 = VAR_2 || FUNC_1(VAR_0, &VAR_5);
  VAR_2 = VAR_2 || FUNC_4(VAR_1, (guint64)VAR_5, VAR_1->is_unsigned);
  break;
 case 130:
  VAR_2 = VAR_2 || FUNC_2(VAR_0, &VAR_6);
  VAR_2 = VAR_2 || FUNC_4(VAR_1, VAR_6, VAR_1->is_unsigned);
  break;
 default:
  VAR_2 = -1;
  break;
 }

 return VAR_2 ? -1 : 0;
}
