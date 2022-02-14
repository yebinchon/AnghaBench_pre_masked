
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ sidx_pts; scalar_t__ first_tfra_pts; scalar_t__ tfdt_dts; } ;
typedef TYPE_1__ MOVFragmentStreamInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int64_t FUNC_1(MOVFragmentStreamInfo * VAR_1)
{
    FUNC_0(VAR_1);
    if (VAR_1->sidx_pts != VAR_0)
        return VAR_1->sidx_pts;
    if (VAR_1->first_tfra_pts != VAR_0)
        return VAR_1->first_tfra_pts;
    return VAR_1->tfdt_dts;
}
