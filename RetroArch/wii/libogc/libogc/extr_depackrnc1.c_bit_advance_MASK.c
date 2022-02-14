
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bitbuf; int bitcount; } ;
typedef TYPE_1__ bit_stream ;


 int FUNC_0 (unsigned char*) ;

__attribute__((used)) static void FUNC_1 (bit_stream *VAR_0, int VAR_1, unsigned char **VAR_2) {
    VAR_0->bitbuf >>= VAR_1;
    VAR_0->bitcount -= VAR_1;
    if (VAR_0->bitcount < 16) {
 (*VAR_2) += 2;
 VAR_0->bitbuf |= (FUNC_0(*VAR_2)<<VAR_0->bitcount);
 VAR_0->bitcount += 16;
    }
}
