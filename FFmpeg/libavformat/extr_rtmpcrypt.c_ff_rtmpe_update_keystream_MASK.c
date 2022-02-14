
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int handshaked; int key_out; int key_in; } ;
typedef TYPE_2__ RTMPEContext ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,int,int *,int) ;

int FUNC_1(URLContext *VAR_1)
{
    RTMPEContext *VAR_2 = VAR_1->priv_data;
    char VAR_3[VAR_0];


    FUNC_0(&VAR_2->key_in, VAR_3, ((void*)0), sizeof(VAR_3), ((void*)0), 1);
    FUNC_0(&VAR_2->key_out, VAR_3, ((void*)0), sizeof(VAR_3), ((void*)0), 1);


    VAR_2->handshaked = 1;

    return 0;
}
