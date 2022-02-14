
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int udplite_coverage; } ;
typedef TYPE_2__ UDPContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*,int) ;

__attribute__((used)) static int FUNC_1(URLContext *VAR_1, const char *VAR_2, int VAR_3)
{
    UDPContext *VAR_4 = VAR_1->priv_data;


    VAR_4->udplite_coverage = VAR_0;

    return FUNC_0(VAR_1, VAR_2, VAR_3);
}
