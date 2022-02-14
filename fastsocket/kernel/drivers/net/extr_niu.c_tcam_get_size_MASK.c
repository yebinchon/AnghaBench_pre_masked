
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ tcam_sz; } ;
struct niu {TYPE_1__ clas; } ;



__attribute__((used)) static u16 FUNC_0(struct niu *VAR_0)
{

 return VAR_0->clas.tcam_sz - 1;
}
