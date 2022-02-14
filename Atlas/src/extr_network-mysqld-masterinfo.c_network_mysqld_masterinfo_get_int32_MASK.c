
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int network_packet ;
typedef int guint32 ;
struct TYPE_5__ {int str; } ;
typedef TYPE_1__ GString ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int ,char**,int ) ;

__attribute__((used)) static int FUNC_4(network_packet *VAR_1, guint32 *VAR_2) {
 GString *VAR_3;
 int VAR_4 = 0;

 VAR_3 = FUNC_1(((void*)0));
 VAR_4 = VAR_4 || FUNC_2(VAR_1, VAR_3);
 if (!VAR_4) {
  char *VAR_5;
  guint32 VAR_6;

  VAR_6 = FUNC_3(VAR_3->str, &VAR_5, 0);

  VAR_4 = VAR_4 || (*VAR_5 != '\0');

  if (!VAR_4) *VAR_2 = VAR_6;
 }

 FUNC_0(VAR_3, VAR_0);

 return VAR_4 ? -1 : 0;
}
