
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static void FUNC_0(u64 * VAR_0)
{
 VAR_0[0] -= VAR_0[7] ^ 0xa5a5a5a5a5a5a5a5ULL;
 VAR_0[1] ^= VAR_0[0];
 VAR_0[2] += VAR_0[1];
 VAR_0[3] -= VAR_0[2] ^ ((~VAR_0[1]) << 19);
 VAR_0[4] ^= VAR_0[3];
 VAR_0[5] += VAR_0[4];
 VAR_0[6] -= VAR_0[5] ^ ((~VAR_0[4]) >> 23);
 VAR_0[7] ^= VAR_0[6];
 VAR_0[0] += VAR_0[7];
 VAR_0[1] -= VAR_0[0] ^ ((~VAR_0[7]) << 19);
 VAR_0[2] ^= VAR_0[1];
 VAR_0[3] += VAR_0[2];
 VAR_0[4] -= VAR_0[3] ^ ((~VAR_0[2]) >> 23);
 VAR_0[5] ^= VAR_0[4];
 VAR_0[6] += VAR_0[5];
 VAR_0[7] -= VAR_0[6] ^ 0x0123456789abcdefULL;
}
