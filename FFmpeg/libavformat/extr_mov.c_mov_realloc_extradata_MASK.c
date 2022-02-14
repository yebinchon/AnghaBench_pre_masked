
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {scalar_t__ extradata_size; int extradata; } ;
struct TYPE_5__ {scalar_t__ size; } ;
typedef TYPE_1__ MOVAtom ;
typedef TYPE_2__ AVCodecParameters ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_1(AVCodecParameters *VAR_3, MOVAtom VAR_4)
{
    int VAR_5 = 0;
    uint64_t VAR_6 = (uint64_t)VAR_3->extradata_size + VAR_4.size + 8 + VAR_1;
    if (VAR_6 > VAR_2 || (uint64_t)VAR_4.size > VAR_2)
        return VAR_0;
    if ((VAR_5 = FUNC_0(&VAR_3->extradata, VAR_6)) < 0) {
        VAR_3->extradata_size = 0;
        return VAR_5;
    }
    VAR_3->extradata_size = VAR_6 - VAR_1;
    return 0;
}
