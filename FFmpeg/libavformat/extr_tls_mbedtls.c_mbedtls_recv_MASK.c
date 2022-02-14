
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t max_packet_size; } ;
typedef TYPE_1__ URLContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,size_t) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, unsigned char *VAR_3, size_t VAR_4)
{
    URLContext *VAR_5 = (URLContext*) VAR_2;
    int VAR_6 = FUNC_0(VAR_5, VAR_3, VAR_4);
    if (VAR_6 >= 0)
        return VAR_6;

    if (VAR_5->max_packet_size && VAR_4 > VAR_5->max_packet_size)
        return VAR_0;

    return FUNC_1(VAR_5, "ffurl_read", VAR_1, VAR_6);
}
