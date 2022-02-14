
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct connection {int rdbuf_pos; int * rdbuf; } ;
typedef int BOOL ;



__attribute__((used)) static BOOL FUNC_0(struct connection *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    uint8_t *VAR_3 = VAR_0->rdbuf + VAR_0->rdbuf_pos;

    return VAR_1 + VAR_2 < VAR_3;
}
