
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct MD5Context {int md5; } ;
struct TYPE_3__ {struct MD5Context* priv_data; } ;
typedef TYPE_1__ URLContext ;


 int FUNC_0 (int ,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_1(URLContext *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
    struct MD5Context *VAR_3 = VAR_0->priv_data;
    FUNC_0(VAR_3->md5, VAR_1, VAR_2);
    return VAR_2;
}
