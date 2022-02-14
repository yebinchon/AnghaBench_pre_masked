
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_mapping_iter {scalar_t__ length; scalar_t__ consumed; } ;


 int FUNC_0 (struct sg_mapping_iter*) ;

__attribute__((used)) static bool FUNC_1(struct sg_mapping_iter *VAR_0)
{
 return VAR_0->length == VAR_0->consumed && !FUNC_0(VAR_0);
}
