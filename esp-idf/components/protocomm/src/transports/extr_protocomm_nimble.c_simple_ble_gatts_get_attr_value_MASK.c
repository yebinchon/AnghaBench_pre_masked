
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct data_mbuf {int outlen; int * outbuf; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct data_mbuf* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(uint16_t VAR_3, ssize_t
        *VAR_4, uint8_t **VAR_5)
{
    struct data_mbuf *VAR_6 = FUNC_1(VAR_3);
    if (!VAR_6) {
        FUNC_0(VAR_2, "Outbuf with handle %d not found", VAR_3);
        return VAR_0;
    }
    *VAR_5 = VAR_6->outbuf;
    *VAR_4 = VAR_6->outlen;
    return VAR_1;
}
