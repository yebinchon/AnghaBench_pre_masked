
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int network_packet ;
typedef int guint64 ;
typedef int GString ;


 scalar_t__ FUNC_0 (int *,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

int FUNC_2(network_packet *VAR_0, GString *VAR_1) {
 guint64 VAR_2;
 int VAR_3 = 0;

 VAR_3 = VAR_3 || FUNC_1(VAR_0, &VAR_2);
 VAR_3 = VAR_3 || FUNC_0(VAR_0, VAR_2, VAR_1);

 return VAR_3 ? -1 : 0;
}
