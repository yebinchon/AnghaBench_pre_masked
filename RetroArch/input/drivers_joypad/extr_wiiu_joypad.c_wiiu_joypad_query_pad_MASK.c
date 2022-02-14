
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* query_pad ) (unsigned int) ;} ;


 unsigned int VAR_0 ;
 TYPE_1__** VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static bool FUNC_1(unsigned VAR_3)
{
   return VAR_2 &&
      VAR_3 < VAR_0 &&
      VAR_1[VAR_3] != ((void*)0) &&
      VAR_1[VAR_3]->query_pad(VAR_3);
}
