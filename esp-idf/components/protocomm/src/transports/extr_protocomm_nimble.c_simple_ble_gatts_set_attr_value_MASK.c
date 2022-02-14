
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct data_mbuf {int outlen; int * outbuf; int attr_handle; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct data_mbuf*,int ) ;
 int VAR_2 ;
 struct data_mbuf* FUNC_2 (int,int) ;
 int VAR_3 ;
 struct data_mbuf* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(uint16_t VAR_5, ssize_t VAR_6,
        uint8_t *VAR_7)
{
    struct data_mbuf *VAR_8 = FUNC_3(VAR_5);
    if (!VAR_8) {
        VAR_8 = FUNC_2(1, sizeof(struct data_mbuf));
        if (!VAR_8) {
            FUNC_0(VAR_2, "Failed to allocate memory for storing outbuf and outlen");
            return VAR_0;
        }
        FUNC_1(&VAR_3, VAR_8, VAR_4);
        VAR_8->attr_handle = VAR_5;
    } else {
        FUNC_4(VAR_8->outbuf);
    }
    VAR_8->outbuf = VAR_7;
    VAR_8->outlen = VAR_6;
    return VAR_1;
}
