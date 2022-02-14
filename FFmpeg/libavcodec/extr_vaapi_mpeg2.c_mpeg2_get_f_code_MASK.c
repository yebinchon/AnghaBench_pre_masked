
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** mpeg_f_code; } ;
typedef TYPE_1__ MpegEncContext ;



__attribute__((used)) static inline int FUNC_0(const MpegEncContext *VAR_0)
{
    return (VAR_0->mpeg_f_code[0][0] << 12) | (VAR_0->mpeg_f_code[0][1] << 8) |
           (VAR_0->mpeg_f_code[1][0] << 4) | VAR_0->mpeg_f_code[1][1];
}
