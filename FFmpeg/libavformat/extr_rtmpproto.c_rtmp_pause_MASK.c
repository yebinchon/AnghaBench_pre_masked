
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {int last_timestamp; } ;
typedef TYPE_2__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int,int ) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_2, int VAR_3)
{
    RTMPContext *VAR_4 = VAR_2->priv_data;
    int VAR_5;
    FUNC_0(VAR_2, VAR_0, "Pause at timestamp %d\n",
           VAR_4->last_timestamp);
    if ((VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_3, VAR_4->last_timestamp)) < 0) {
        FUNC_0(VAR_2, VAR_1, "Unable to send pause command at timestamp %d\n",
               VAR_4->last_timestamp);
        return VAR_5;
    }
    return 0;
}
