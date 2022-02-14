
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct attachment {size_t size; int * data; } ;


 struct attachment* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (struct attachment*,int) ;
 int FUNC_2 (int *,int const*,size_t) ;

__attribute__((used)) static void FUNC_3(const uint8_t *VAR_2, size_t VAR_3)
{
   VAR_0 = (struct attachment*)FUNC_1(
         VAR_0, (VAR_1 + 1) * sizeof(*VAR_0));

   VAR_0[VAR_1].data = (uint8_t*)FUNC_0(VAR_3);
   VAR_0[VAR_1].size = VAR_3;
   FUNC_2(VAR_0[VAR_1].data, VAR_2, VAR_3);

   VAR_1++;
}
