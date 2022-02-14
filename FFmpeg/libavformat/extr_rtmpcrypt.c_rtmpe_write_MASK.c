
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int stream; int key_out; scalar_t__ handshaked; } ;
typedef TYPE_2__ RTMPEContext ;


 int FUNC_0 (int *,int *,int const*,int,int *,int) ;
 int FUNC_1 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    RTMPEContext *VAR_3 = VAR_0->priv_data;
    int VAR_4;

    if (VAR_3->handshaked) {

        FUNC_0(&VAR_3->key_out, (uint8_t *)VAR_1, VAR_1, VAR_2, ((void*)0), 1);
    }

    if ((VAR_4 = FUNC_1(VAR_3->stream, VAR_1, VAR_2)) < 0)
        return VAR_4;

    return VAR_2;
}
