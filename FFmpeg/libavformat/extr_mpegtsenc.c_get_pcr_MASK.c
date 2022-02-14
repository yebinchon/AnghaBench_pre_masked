
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ first_pcr; int mux_rate; } ;
typedef TYPE_1__ MpegTSWrite ;
typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int64_t FUNC_2(const MpegTSWrite *VAR_1, AVIOContext *VAR_2)
{
    return FUNC_0(FUNC_1(VAR_2) + 11, 8 * VAR_0, VAR_1->mux_rate) +
           VAR_1->first_pcr;
}
